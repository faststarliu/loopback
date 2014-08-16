/*******************************************************************************
 *
 *  NetFPGA-10G http://www.netfpga.org
 *
 *  Author:
 *       ya240 on 17/06/2014
 *
 *  Description:
 *        
 *
 *  Copyright notice:
 *        Copyright (C) 2010, 2011 The Board of Trustees of The Leland Stanford
 *                                 Junior University
 *
 *  Licence:
 *        This file is part of the NetFPGA 10G development base package.
 *
 *        This file is free code: you can redistribute it and/or modify it under
 *        the terms of the GNU Lesser General Public License version 2.1 as
 *        published by the Free Software Foundation.
 *
 *        This package is distributed in the hope that it will be useful, but
 *        WITHOUT ANY WARRANTY; without even the implied warranty of
 *        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *        Lesser General Public License for more details.
 *
 *        You should have received a copy of the GNU Lesser General Public
 *        License along with the NetFPGA source package.  If not, see
 *        http://www.gnu.org/licenses/.
 *
 */

`uselib lib=unisims_ver
`uselib lib=proc_common_v3_00_a

module simple_tx
#(
  parameter C_FAMILY              = "virtex5",
  parameter C_S_AXI_DATA_WIDTH    = 32,          
  parameter C_S_AXI_ADDR_WIDTH    = 32,          
  parameter C_USE_WSTRB           = 0,
  parameter C_DPHASE_TIMEOUT      = 0,
  parameter C_BASEADDR            = 32'hFFFFFFFF,
  parameter C_HIGHADDR            = 32'h00000000,
  parameter C_S_AXI_ACLK_FREQ_HZ  = 100,
  parameter C_M_AXIS_DATA_WIDTH	  = 256,
  parameter C_S_AXIS_DATA_WIDTH	  = 256,
  parameter C_M_AXIS_TUSER_WIDTH  = 128,
  parameter C_S_AXIS_TUSER_WIDTH  = 128
)
(
  // Slave AXI Ports
  input                                     S_AXI_ACLK,
  input                                     S_AXI_ARESETN,
  input      [C_S_AXI_ADDR_WIDTH-1 : 0]     S_AXI_AWADDR,
  input                                     S_AXI_AWVALID,
  input      [C_S_AXI_DATA_WIDTH-1 : 0]     S_AXI_WDATA,
  input      [C_S_AXI_DATA_WIDTH/8-1 : 0]   S_AXI_WSTRB,
  input                                     S_AXI_WVALID,
  input                                     S_AXI_BREADY,
  input      [C_S_AXI_ADDR_WIDTH-1 : 0]     S_AXI_ARADDR,
  input                                     S_AXI_ARVALID,
  input                                     S_AXI_RREADY,
  output                                    S_AXI_ARREADY,
  output     [C_S_AXI_DATA_WIDTH-1 : 0]     S_AXI_RDATA,
  output     [1 : 0]                        S_AXI_RRESP,
  output                                    S_AXI_RVALID,
  output                                    S_AXI_WREADY,
  output     [1 :0]                         S_AXI_BRESP,
  output                                    S_AXI_BVALID,
  output                                    S_AXI_AWREADY,
  
  // Master Stream Ports (interface to data path)
  output reg    [C_M_AXIS_DATA_WIDTH - 1:0]    M_AXIS_TDATA,
  output reg    [((C_M_AXIS_DATA_WIDTH / 8)) - 1:0] M_AXIS_TSTRB,
  output reg    [C_M_AXIS_TUSER_WIDTH-1:0]     M_AXIS_TUSER,
  output reg                                   M_AXIS_TVALID,
  input                                        M_AXIS_TREADY,
  output reg                                   M_AXIS_TLAST,
 
  // Slave Stream Ports (interface to RX queues)
  input      [C_S_AXIS_DATA_WIDTH - 1:0]    S_AXIS_TDATA,
  input      [((C_S_AXIS_DATA_WIDTH / 8)) - 1:0] S_AXIS_TSTRB,
  input      [C_S_AXIS_TUSER_WIDTH-1:0]     S_AXIS_TUSER,
  input                                     S_AXIS_TVALID,
  output                                    S_AXIS_TREADY,
  input                                     S_AXIS_TLAST,

 // Master Stream Ports (interface to data path)
  output reg    [C_M_AXIS_DATA_WIDTH - 1:0]    M_AXIS0_TDATA,
  output reg    [((C_M_AXIS_DATA_WIDTH / 8)) - 1:0] M_AXIS0_TSTRB,
  output reg    [C_M_AXIS_TUSER_WIDTH-1:0]     M_AXIS0_TUSER,
  output reg                                   M_AXIS0_TVALID,
  input                                        M_AXIS0_TREADY,
  output reg                                   M_AXIS0_TLAST,

  // user defined ports	
  // gate and rst
  input 				    ext_rst_count,
  input 				    ext_gate_ctrl,
   
  // switch lane0 and lane1 controls, need to be pulses
  input 				    ext_switch_lane0_on,
  input 				    ext_switch_lane1_on,
  input 				    ext_switch_lane0_done, 
  input 				    ext_switch_lane1_done

);
 
 //////////////////////////// LOCAL FUNCS  ///////////////////////////////
 // standard log2 function
 function integer log2;
   input integer n;
	begin
		log2 = 0;
		while(2**log2 < n) begin
			log2=log2+1;
		end
	end
 endfunction	

  /////////////////////////// LOCAL PARAMS ///////////////////////////////

  // define number of AXI registers here
  localparam NUM_RW_REGS       		= 4;
  localparam NUM_RO_REGS       		= 13;

  // Statistics FIFO with DMA directed data
  localparam DEPTH_FIFO_DMA 		= 30;	
  localparam HALF_DEPTH_FIFO_DMA 	= 25;	
  localparam HALF_EMPTY_FIFO_DMA 	= 3; 

 // localparam ADDR_SIZE_FIFO 	= log2(DEPTH_FIFO_DMA);
  
  // TX FSM STATES
  localparam 	TX_FSM_WIDTH    = 2;		
  localparam 	GATE          	= 2'd0,
		IPG		= 2'd1,
		FIRST_WORD      = 2'd2,
		REMAINDER	= 2'd3;

 // RX FSM STATES
 localparam RX_FSM_WIDTH = 2; 
 localparam WAIT_ARRIVAL    = 2'd0,
	    HEAD_DETECT     = 2'd1,
	    SECOND_DETECT   = 2'd2;		


 // FILL in STATS FIFO FSM 
 localparam STAT_FSM_WIDTH	= 1;
 localparam STAT_FIDLE 		= 1'd0,
	    STAT_FNORM_FILL 	= 1'd1;

 
 // DRAIN DMA's FSM
 localparam DRAIN_FSM_WIDTH	= 2;	
 localparam DRAIN_COUNT_MAX	= 25;
 localparam DRAIN_COUNT_WIDTH   = log2(DRAIN_COUNT_MAX);	

 localparam FIFO_TX_WAIT 	= 2'd0,
	    FIFO_TX_HEADER	= 2'd1,
	    FIFO_TX_PAYLOAD	= 2'd2;
 

  /////////////////////////// LOCAL DEFINES ///////////////////////////////
  // -- axi lite slave ipif 
  wire                                            Bus2IP_Clk;
  wire                                            Bus2IP_Resetn;
  wire     [C_S_AXI_ADDR_WIDTH-1 : 0]             Bus2IP_Addr;
  wire     [0:0]                                  Bus2IP_CS;
  wire                                            Bus2IP_RNW;
  wire     [C_S_AXI_DATA_WIDTH-1 : 0]             Bus2IP_Data;
  wire     [C_S_AXI_DATA_WIDTH/8-1 : 0]           Bus2IP_BE;
  wire     [C_S_AXI_DATA_WIDTH-1 : 0]             IP2Bus_Data;
  wire                                            IP2Bus_RdAck;
  wire                                            IP2Bus_WrAck;
  wire                                            IP2Bus_Error;
  
  // -- register infrastructure 
  
  // address offsets for RW REGs
  //---- FIXED INTER PACKET GAP ADDR   == `C_M_AXI_ADDR_WIDTH'h0000;
  //---- TOTAL NUMBER OF TX PACKETS    == `C_M_AXI_ADDR_WIDTH'h0004;
  // --- # of 32B words (Frame size)   == `C_M_AXI_ADDR_WIDTH'h0008; 
  // --- last TSTRB of full/part word  == `C_M_AXI_ADDR_WIDTH'h000C;  
  wire     [(NUM_RW_REGS*C_S_AXI_DATA_WIDTH)-1 : 0] rw_regs;

  // address offsets for RO REGs   
  //---- TSTAMP START   == 'h0008 & 'h000C;
  //---- TSTAMP STOP    == 'h0010 & 'h0014;
  //---- ARR PKT SEQ #  == 'h0018;
  //---- EXP PKT SEQ #  == 'h001C;
  //---- TSTAMP SW ON   == 'h0020 & 'h0024;
  //---- TSTAMP SW DONE == 'h0028 & 'h002C;	
  wire     [(NUM_RO_REGS*C_S_AXI_DATA_WIDTH)-1 : 0]  ro_regs;
   
  // -- Tx Traffic generator's FSM & counters
  reg [TX_FSM_WIDTH-1:0] 			  state_tx_fsm, state_tx_fsm_next, state_tx_fsm_prev;
  reg 						  tx_count_enable;
  reg [31:0] 					  tx_count;
  wire [31:0] 					  tx_seq_num;
  wire 						  last_tstrb_zero, last_wd_full_part;

  // -- Rx Traffic analyzer and tstamps
  reg [RX_FSM_WIDTH-1 :0 ]  			  rx_fsm_state;	
  reg [31:0] 					  rx_count;
  reg [31:0] 					  arr_pck_seq_num, exp_pck_seq_num;
  
  reg 						  ext_switch_ln0_on_q, ext_switch_ln1_on_q;
  reg 						  ext_switch_ln0_done_q, ext_switch_ln1_done_q;
  wire 						  frame_arr, frame_done; 
  
  // -- Inter-packet gap GEN (in clk cycles >=2)
  reg [31:0]					  ipg, ipg_next, ipg_value;

  // -- Packet GEN -- total number of frames to tx
  reg [31:0]					  tpt, tpt_next, tpt_value;

  // -- total number of full/partial 32B words to tx excluding header 
  reg [31:0]					  n32_words, n32_words_next, n32B_words_value;
  
  // -- the last TSTRB value calc by software of either full or partial word
  reg [31:0]					  last_tstrb_value;
    
  // -- reset counters
  wire rst_sync_ip;
  reg  						  rst_cntrs;

  // -- Traffic generation gating (ON)
  reg 						  gate_pulse;
  
  // -- 64b free running counter (local clock)
  wire 						  free_count_max;
  reg [63:0] 					  free_count;
  wire [64:0] 					  free_count_next;

  // data tstamp
  reg [63:0] 					  tstamp_data_start, tstamp_data_stop;  

  // tstamps for the switch are 56bits wide
  reg [55:0] 					  tstamp_sw_ln0_start, tstamp_sw_ln1_start;
  reg [55:0] 					  tstamp_sw_ln0_stop, tstamp_sw_ln1_stop;  

 // -- SYNC FIFO for DMA - PCIe - host Statistics transactions
 reg    [C_M_AXIS_DATA_WIDTH - 1:0]  		  tstmp_fin;
 wire   [C_M_AXIS_DATA_WIDTH - 1:0]  		  tstmp_fout;
 reg 						  tstmp_fwe, tstmp_fre;
 wire 						  tstmp_faempty, tstmp_fhempty;
 wire						  tstmp_fhfull, tstmp_ffull;

 // -- Statistics FSM, collects sparse data into one place
 reg [STAT_FSM_WIDTH-1 : 0]			  stat_fsm_state; 	
 wire 						  frame_info_up;
 wire						  switch_info_up;	

 // -- FSM for STAT FIFO Drain
 reg [DRAIN_FSM_WIDTH-1 : 0] 			  drain_fsm_state, drain_fsm_state_next, drain_fsm_state_prev;
 reg 						  drain_count_enbl;
 wire 						  drain_count_max;
 reg [DRAIN_COUNT_WIDTH-1:0] 			  drain_count; 
 
 ///////////////////////////////////////////////////////////////////////////////////
 // -- AXILITE IPIF
 axi_lite_ipif_1bar #
 (.C_S_AXI_DATA_WIDTH (C_S_AXI_DATA_WIDTH),
  .C_S_AXI_ADDR_WIDTH (C_S_AXI_ADDR_WIDTH),
  .C_USE_WSTRB        (C_USE_WSTRB),
  .C_DPHASE_TIMEOUT   (C_DPHASE_TIMEOUT),
  .C_BAR0_BASEADDR    (C_BASEADDR),
  .C_BAR0_HIGHADDR    (C_HIGHADDR)
  ) axi_lite_ipif_inst (
  .S_AXI_ACLK          ( S_AXI_ACLK     ),
  .S_AXI_ARESETN       ( S_AXI_ARESETN  ),
  .S_AXI_AWADDR        ( S_AXI_AWADDR   ),
  .S_AXI_AWVALID       ( S_AXI_AWVALID  ),
  .S_AXI_WDATA         ( S_AXI_WDATA    ),
  .S_AXI_WSTRB         ( S_AXI_WSTRB    ),
  .S_AXI_WVALID        ( S_AXI_WVALID   ),
  .S_AXI_BREADY        ( S_AXI_BREADY   ),
  .S_AXI_ARADDR        ( S_AXI_ARADDR   ),
  .S_AXI_ARVALID       ( S_AXI_ARVALID  ),
  .S_AXI_RREADY        ( S_AXI_RREADY   ),
  .S_AXI_ARREADY       ( S_AXI_ARREADY  ),
  .S_AXI_RDATA         ( S_AXI_RDATA    ),
  .S_AXI_RRESP         ( S_AXI_RRESP    ),
  .S_AXI_RVALID        ( S_AXI_RVALID   ),
  .S_AXI_WREADY        ( S_AXI_WREADY   ),
  .S_AXI_BRESP         ( S_AXI_BRESP    ),
  .S_AXI_BVALID        ( S_AXI_BVALID   ),
  .S_AXI_AWREADY       ( S_AXI_AWREADY  ),
	
  // Controls to the IP/IPIF modules
  .Bus2IP_Clk          ( Bus2IP_Clk     ),
  .Bus2IP_Resetn       ( Bus2IP_Resetn  ),
  .Bus2IP_Addr         ( Bus2IP_Addr    ),
  .Bus2IP_RNW          ( Bus2IP_RNW     ),
  .Bus2IP_BE           ( Bus2IP_BE      ),
  .Bus2IP_CS           ( Bus2IP_CS      ),
  .Bus2IP_Data         ( Bus2IP_Data    ),
  .IP2Bus_Data         ( IP2Bus_Data    ),
  .IP2Bus_WrAck        ( IP2Bus_WrAck   ),
  .IP2Bus_RdAck        ( IP2Bus_RdAck   ),
  .IP2Bus_Error        ( IP2Bus_Error   )
 );
  
  // -- IPIF REGS
  ipif_regs #
  ( .C_S_AXI_DATA_WIDTH (C_S_AXI_DATA_WIDTH),          
    .C_S_AXI_ADDR_WIDTH (C_S_AXI_ADDR_WIDTH),   
    .NUM_RW_REGS        (NUM_RW_REGS),


    .NUM_RO_REGS        (NUM_RO_REGS)
  ) ipif_regs_inst (   
    .Bus2IP_Clk     ( Bus2IP_Clk     ),
    .Bus2IP_Resetn  ( Bus2IP_Resetn  ), 
    .Bus2IP_Addr    ( Bus2IP_Addr    ),
    .Bus2IP_CS      ( Bus2IP_CS[0]   ),
    .Bus2IP_RNW     ( Bus2IP_RNW     ),
    .Bus2IP_Data    ( Bus2IP_Data    ),
    .Bus2IP_BE      ( Bus2IP_BE      ),
    .IP2Bus_Data    ( IP2Bus_Data    ),
    .IP2Bus_RdAck   ( IP2Bus_RdAck   ),
    .IP2Bus_WrAck   ( IP2Bus_WrAck   ),
    .IP2Bus_Error   ( IP2Bus_Error   ),

    .rw_regs        ( rw_regs ),
    .ro_regs        ( ro_regs )
  );

 
 // -- SYNC FIFO
 simple_synch_fifo #
 (
   .WIDTH	   	(C_M_AXIS_DATA_WIDTH),
   .HALF_DEPTH	 	(HALF_DEPTH_FIFO_DMA),
   .DEPTH		(DEPTH_FIFO_DMA),
   .HALF_EMPTY		(HALF_EMPTY_FIFO_DMA)	
 ) synch_fifo_dma (
   .clock		(S_AXI_ACLK), 
   .reset		(rst_sync_ip),
   .data_in		(tstmp_fin),
   .write_en		(tstmp_fwe), 
   .read_en		(tstmp_fre),
   // 
   .data_out		(tstmp_fout),
   .fifo_empty		(),
   .fifo_aempty	        (tstmp_faempty), 	
   .fifo_hempty		(tstmp_fhempty), 
   .fifo_hfull		(tstmp_fhfull),
   .fifo_full		(tstmp_ffull)
 );

/*
small_async_fifo
  #(
    .DSIZE		(C_M_AXIS_DATA_WIDTH),
    .ASIZE 		(ADDR_SIZE_FIFO),
    .ALMOST_FULL_SIZE 	(25),
    .ALMOST_EMPTY_SIZE  (1)
    ) asynch_fifo_dma (
   .wclk		(S_AXI_ACLK), 
   .wrst_n		(~rst_sync_ip),		
   .wdata		(tstmp_fin),
   .winc		(tstmp_fwe), 
	
   .rclk		(S_AXI_ACLK), 
   .rrst_n		(~rst_sync_ip),			
   .rdata		(tstmp_fout),
   .rinc		(tstmp_fre), 

   .wfull 		(tstmp_ffull),
   .w_almost_full	(tstmp_fhfull),
   .rempty		(),
   .r_almost_empty	(tstmp_faempty)
   );
*/

///////////////////////////////////////////////////////////////////////////////////
 
 ////////////////////////////////////////////////////////////////
 ////////////////////////// RW REGS /////////////////////////////
 ////////////////////////////////////////////////////////////////

  // rw_registers
  always @(posedge S_AXI_ACLK or negedge S_AXI_ARESETN) begin : rw_regs_seq_l
      if(~S_AXI_ARESETN) begin
	 gate_pulse		<= 1'b0;
 	 rst_cntrs 		<= 1'b1;

         ipg_value		<= 'h2;
	 tpt_value 		<= 'h0;
	 n32B_words_value 	<= 'h2;
	 last_tstrb_value 	<= 'h00003FFF; 
	 
      end else begin
	gate_pulse     		<= ext_gate_ctrl;
	rst_cntrs 		<= ext_rst_count; 

	// assign rw regs	
        {last_tstrb_value, n32B_words_value, tpt_value, ipg_value}  	<= rw_regs[4*C_S_AXI_DATA_WIDTH-1 : 0]; 

      end
   end
 

 // internal ip reset
 assign rst_sync_ip = rst_cntrs | (~S_AXI_ARESETN);
 
 ////////////////////////////////////////////////////////////////
 ////////////////////////// TX PART /////////////////////////////
 ////////////////////////////////////////////////////////////////

 //------------------------------------------------------------------------------------------------------------------------------------------------------------------ 
 // Byte order is defined in ARM AXI Stream Spec, i.e. the first byte appears in TDATA[7:0], and TSTRB[0] is always a '1'. + Little endian representation: 
 // Word representation:  M_AXIS_TDATA 	= {8'h00, 32'h00000700, 16'h0900, 32'h00000600, 8'b01, 32'h0, 16'h0200, 16'h0888, 48'hbbbbbbbbbbbb, 48'haaaaaaaaaaaa}; 
 //------------------------------------------------------------------------------------------------------------------------------------------------------------------
 // Decomposition sequence:
 // /15. ip_d_a (16b) /14. ip_s_a(32b) /13. Hdr_c (2B) /12. Prot.(8b) /11. TTL(8b) /10. Fragm_o(13b) /9. Flags(3b) /8. ID(2B) /7. Tot Len(2B) /6. DSCP+ECN(8b) /5. IHL(4b) /4. IP_Ver.(4b) /3. E_type(2B) /2. E_src_a(6B) /1. E_dest_a(6B) 
 // /15. 16'h0000     /14. 32'h00070009 /13. 16'h0000  /12. 8'h00     /11. 8'h06   /10. {12'h000, 1'b0}  /9. 3'b001 /8. 16'h0000 /7. 16'h0000 /6. 8'h02  /5. 4'h0 /4. 4'h0 /3. 16'h8808  /2. 48'hbbbbbbbbbbbb /1. 48'haaaaaaaaaaaa	
 // Notice: The second word contains a remaining portion of IP's dest address (16b) 
 
 //Example: 68B on the wire => ///// 14B ETH + 20B IP + (30B PAYLD) ///// + 4B ETH FCS (added later)
 
 assign last_tstrb_zero = (last_tstrb_value == 'h0);  

// ---- for 2 words to tx n32_words can be either 1 (1full + 1 partial) or 2 (full) ---//
 assign last_wd_full_part = (n32_words == 'h0) | ((n32_words == 'h1) & last_tstrb_zero);	
 
 // MAIN TX FSM combinatorial
  always @(*) begin : tx_fsm_comb_l
      	 state_tx_fsm_next   	= state_tx_fsm;
 	 ipg_next 		= ipg;
	 tpt_next 		= tpt;
	 n32_words_next 	= n32_words;

         M_AXIS_TUSER 		= 'b0;
         M_AXIS_TDATA 		= 'b0;
         M_AXIS_TSTRB 		= 'b0;
         M_AXIS_TVALID 		= 'b0;
         M_AXIS_TLAST 		= 'b0;

         tx_count_enable 	= 'b0;

      case(state_tx_fsm)
        GATE : begin
		if(gate_pulse) begin
                    state_tx_fsm_next 	= IPG;
		    tpt_next 		= tpt_value; 
		    n32_words_next 	= n32B_words_value;	
		end
	end
	IPG : begin
		ipg_next = ipg - 1;
		if(!ipg) begin
			ipg_next 		= ipg_value - 1;

			if (tpt == 'h0) state_tx_fsm_next = GATE;
			else 		state_tx_fsm_next = FIRST_WORD;			
		end 
	end
        FIRST_WORD : begin
		 // --- push header, pay attention to the encapsulated info as specified above --- //
                 M_AXIS_TVALID	= 'b1;
		 M_AXIS_TUSER 	= 128'h000000000000000000000000_14_80_0040;
		 M_AXIS_TSTRB	= {32{1'b1}};
               //  M_AXIS_TDATA = {8'h00, 32'h00000700, 16'h0900, 32'h00000600, 8'h02, 32'h14, 16'h0204, 16'h0008, 48'hbbbbbbbbbbbb, 48'haaaaaaaaaaaa};
		 M_AXIS_TDATA 	= {8'h00, 32'h00000700, 16'h0900, 32'h00000600, 8'b01, 32'h0, 16'h0200, 16'h0888, 48'hbbbbbbbbbbbb, 48'haaaaaaaaaaaa};
		 
		 if(M_AXIS_TREADY) begin
			state_tx_fsm_next 	= REMAINDER;
			n32_words_next		= n32_words - 1;	
		 end
        end
        REMAINDER : begin
                M_AXIS_TVALID 	= 1'b1;	

		if(M_AXIS_TREADY) begin
			if (last_wd_full_part) begin
				 tx_count_enable   	= 1'b1;
				 n32_words_next		= n32B_words_value;
				 M_AXIS_TLAST 		= 1'b1;
				 M_AXIS_TSTRB		= (n32_words == 'h0) ? last_tstrb_value : {32{1'b1}};
				 	
				if (tpt == 'h0) begin
					state_tx_fsm_next 	=  GATE;
					tpt_next 		=  tpt_value;
				end else begin
					state_tx_fsm_next 	=  IPG;
					tpt_next		=  tpt - 1;
				end
			end else begin

				state_tx_fsm_next 	= REMAINDER;	
				n32_words_next	   	= n32_words - 1;
				M_AXIS_TSTRB		= {32{1'b1}};
			end			
	        end

		// encapsulate tstamps here + padding	
		if (state_tx_fsm_prev ==  FIRST_WORD) 
			M_AXIS_TDATA 	= {{18{8'hC3}}, free_count, tx_seq_num, 16'h0007};  
		else 	M_AXIS_TDATA 	= {32{8'hC3}};
        end	
	default : begin
		state_tx_fsm_next = GATE;
	end
      endcase
   end 

  // tx fsm seq 
  always @(posedge S_AXI_ACLK) begin : tx_fsm_seq_l
      if(rst_sync_ip) begin
         state_tx_fsm 		<= GATE;
	 state_tx_fsm_prev	<= GATE;
 	 n32_words		<= 'h2;
	 ipg			<= 'h2;
	 tpt			<= 'h0;	 
      end else begin
	state_tx_fsm 		<= state_tx_fsm_next;
	state_tx_fsm_prev	<= state_tx_fsm;
	n32_words		<= n32_words_next;
	ipg 			<= ipg_next;
	tpt 			<= tpt_next;
      end
   end

// tx sequence number 
 always @(posedge S_AXI_ACLK) begin
   if (rst_sync_ip) tx_count <= 'b0;
   else		    tx_count <= (tx_count_enable) ? tx_count + 1'b1 : tx_count;
 end

 assign tx_seq_num = tx_count;

 ////////////////////////////////////////////////////////////////
 ////////////////////////// RX PART /////////////////////////////
 ////////////////////////////////////////////////////////////////

  // Slave Stream Ports (interface to data path upstream)
 assign S_AXIS_TREADY = 1'b1;
 	
 // simple rx part that compares the encapsulated sequence number 
 // with the rx_counter. if match than simple RTT measurements, else 
 // recovery time measurements. Extract the info from the second word.

 assign frame_arr 	= S_AXIS_TVALID & S_AXIS_TREADY;
 assign frame_done	= S_AXIS_TVALID & S_AXIS_TREADY & S_AXIS_TLAST;	

 always @ (posedge S_AXI_ACLK) begin : rx_frame_l
	if (rst_sync_ip) begin
		rx_fsm_state 		<= WAIT_ARRIVAL;	
		// frame stats	
		tstamp_data_start		<= 'b0;
		tstamp_data_stop		<= 'b0;
		rx_count 		<= 'b0;
		arr_pck_seq_num		<= 'b0;
		exp_pck_seq_num 	<= 'b0;

	end else begin
		arr_pck_seq_num	 	<= arr_pck_seq_num;
		exp_pck_seq_num 	<= exp_pck_seq_num;
		tstamp_data_start		<= tstamp_data_start;
		tstamp_data_stop		<= tstamp_data_stop;	
		rx_count		<= rx_count;

		// FSM updates -- last statement wins
		case (rx_fsm_state) 
			WAIT_ARRIVAL : begin
				if (frame_arr) 	rx_fsm_state 	<= HEAD_DETECT;
				else 		rx_fsm_state 	<= WAIT_ARRIVAL;
			end		
			HEAD_DETECT : begin
				if (frame_arr) begin
					rx_fsm_state 		<= SECOND_DETECT;
					rx_count 		<= rx_count + 1'b1;			
					arr_pck_seq_num 	<= S_AXIS_TDATA[47:16];
			        	exp_pck_seq_num 	<= rx_count;
					tstamp_data_start 		<= S_AXIS_TDATA[111:48];
					tstamp_data_stop  		<= free_count;
	
				end else begin
					rx_fsm_state 	<= HEAD_DETECT;
				end			
			end		
			SECOND_DETECT : begin
				if (frame_done) rx_fsm_state 	<= WAIT_ARRIVAL;
				else 		rx_fsm_state 	<= SECOND_DETECT;
			end	
			default : begin
				rx_fsm_state 	<= WAIT_ARRIVAL;
			end
	     endcase			
	end	
 end

 // record when switch is reconfigured, latch ctrls
 always @ (posedge S_AXI_ACLK) begin : rx_switch_l
	if (rst_sync_ip) begin
		// external pulses	
		ext_switch_ln0_on_q	<= 'b0;
		ext_switch_ln1_on_q	<= 'b0;
		ext_switch_ln0_done_q 	<= 'b0;
		ext_switch_ln1_done_q 	<= 'b0;
		
		// timestamping when pulse arrives
		tstamp_sw_ln0_start	<= 'b0;
		tstamp_sw_ln1_start	<= 'b0;
		tstamp_sw_ln0_stop	<= 'b0;
		tstamp_sw_ln1_stop	<= 'b0;

	end else begin
		ext_switch_ln0_on_q	<= ext_switch_lane0_on;
		ext_switch_ln1_on_q	<= ext_switch_lane1_on;
		ext_switch_ln0_done_q	<= ext_switch_lane0_done;
		ext_switch_ln1_done_q 	<= ext_switch_lane1_done;
		
		tstamp_sw_ln0_start 	<= (ext_switch_lane0_on) ? free_count[55:0] : tstamp_sw_ln0_start;
		tstamp_sw_ln1_start 	<= (ext_switch_lane1_on) ? free_count[55:0] : tstamp_sw_ln1_start;
		tstamp_sw_ln0_stop  	<= (ext_switch_lane0_done) ? free_count[55:0] : tstamp_sw_ln0_stop;
		tstamp_sw_ln1_stop  	<= (ext_switch_lane1_done) ? free_count[55:0] : tstamp_sw_ln1_stop;
	end	
 end

 ////////////////////////////////////////////////////////////////
 //////////////////// STATISTICS PART ///////////////////////////
 ////////////////////////////////////////////////////////////////
 
 // Encapsulate all timestamps into frame payloads and send them 
 // to the DMA. But first fill in the DMA-related fifo with correct info.
 
 // data timestamps 
 assign frame_info_up = (rx_fsm_state == SECOND_DETECT);
 // switching events 
 assign switch_info_up = (ext_switch_ln0_on_q | ext_switch_ln1_on_q | ext_switch_ln0_done_q | ext_switch_ln1_done_q);

 // data cannot arrive when switching is happening. 
 // exclude the case when these events happen simultaneously. 
 always @ (posedge S_AXI_ACLK) begin : stat_fifo_fsm_2l
	if (rst_sync_ip) begin
		stat_fsm_state <= STAT_FIDLE;		
		tstmp_fin 	<= 'b0;
		tstmp_fwe 	<= 1'b0;
	end else begin		
		case (stat_fsm_state)
			STAT_FIDLE: begin
				// frame has arrived, no other events	
				if (frame_info_up) begin
					stat_fsm_state  <= STAT_FNORM_FILL;
					tstmp_fwe 	<= ~tstmp_ffull;
					tstmp_fin 	<= {48'hcafe_cafe_cafe, tstamp_data_start, tstamp_data_stop, arr_pck_seq_num, exp_pck_seq_num, 16'hcafe};					
					
				// switch tstamp ln0 or ln1 is asserted
				end else if (switch_info_up) begin
					stat_fsm_state  <= STAT_FNORM_FILL;
					tstmp_fwe 	<= ~tstmp_ffull;
					tstmp_fin 	<= {16'hbeef, tstamp_sw_ln0_start, tstamp_sw_ln0_stop, tstamp_sw_ln1_start, tstamp_sw_ln1_stop, 16'hbeef};				
							
				// stay in this state
				end else begin
					stat_fsm_state  <= STAT_FIDLE;	
					tstmp_fwe 	<= 1'b0;	
					tstmp_fin 	<= 'b0;
				end				
			end
			STAT_FNORM_FILL : begin
					stat_fsm_state  <= STAT_FIDLE;	
					tstmp_fwe 	<= 1'b0;
					tstmp_fin 	<= tstmp_fin;
			end
			default : begin
				stat_fsm_state  <= STAT_FIDLE;		
				tstmp_fin 	<= 'b0;
				tstmp_fwe 	<= 'b0;			
			end
		endcase	
	end	
 end

 ////////////////////////////////////////////////////////////////
 //////////////////// TX TO DMA PART  ///////////////////////////
 ////////////////////////////////////////////////////////////////


  ///// Forward data to the DMA. FSM to drain the queue,
  ///// depending on the occupancy. 
  ///// send a fixed packet of size 800B.	
  // comb    	  
  always @(*) begin : drain_fifo_comb_3l
      	drain_fsm_state_next   	= drain_fsm_state;
         M_AXIS0_TUSER 		= 'b0;
         M_AXIS0_TDATA 		= 'b0;
         M_AXIS0_TSTRB 		= 'b0;
         M_AXIS0_TVALID 	= 'b0;
         M_AXIS0_TLAST 		= 'b0;
         drain_count_enbl 	= 'b0;
	 tstmp_fre		= 'b0;	

      case(drain_fsm_state)
        FIFO_TX_WAIT: begin

		if (tstmp_fhfull) 
			drain_fsm_state_next = FIFO_TX_HEADER; 
				
	end
        FIFO_TX_HEADER: begin
  		 // set to tx 800B packets, set tuser port to CPU
                 M_AXIS0_TVALID	= 'b1;
		 
		 if(M_AXIS0_TREADY) begin
			drain_fsm_state_next 	= FIFO_TX_PAYLOAD;
			drain_count_enbl 	= 'b1;			
		 end

		 M_AXIS0_TUSER 	= 128'h00000000_00000000_00000000_02_80_0320;
		 M_AXIS0_TSTRB	= {32{1'b1}};
//               M_AXIS0_TDATA 	= {8'h00, 32'h00000700, 16'h0900, 32'h00000600, 8'h02, 32'h14, 16'h0204, 16'h0008, 48'hcccccccccccc, 48'hdddddddddddd};
		 M_AXIS0_TDATA 	= {8'h00, 32'h00000700, 16'h0900, 32'h00000600, 8'h02, 16'h0000 , 16'h2003, 16'h0045, 16'h0008, 48'hcccccccccccc, 48'hdddddddddddd};	
        end	
        FIFO_TX_PAYLOAD: begin
		M_AXIS0_TVALID 	= 1'b1;
		
		if(M_AXIS0_TREADY) begin
			if (!tstmp_faempty) begin
				drain_fsm_state_next 	= (drain_count_max) ? FIFO_TX_WAIT : FIFO_TX_PAYLOAD;
				tstmp_fre		= 'b1;
				drain_count_enbl 	= 'b1; 
				M_AXIS0_TLAST 		= (drain_count_max) ? 1'b1 : 1'b0;  
			end else begin		
				drain_fsm_state_next 	= FIFO_TX_WAIT;
				tstmp_fre		= 1'b1;
				drain_count_enbl 	= 1'b1; 
				M_AXIS0_TLAST 		= 1'b1;	
			end		     			
	        end
                M_AXIS0_TSTRB	= {32{1'b1}};

		if (drain_fsm_state_prev ==  FIFO_TX_HEADER) // include remaining 16b of IP dest address
				M_AXIS0_TDATA 	= {tstmp_fout[C_M_AXIS_DATA_WIDTH - 1 : 16], 16'h0007}; 
		else 		M_AXIS0_TDATA 	= tstmp_fout;
                                             
        end
	default : begin
		drain_fsm_state_next = FIFO_TX_WAIT;
	end	
      endcase
   end 		

   // seq
   always @(posedge S_AXI_ACLK) begin : drain_fifo_seq_3l
      if(rst_sync_ip) begin
		drain_fsm_state		<= FIFO_TX_WAIT;
		drain_fsm_state_prev	<= FIFO_TX_WAIT;
      end else begin	
		drain_fsm_state		<= drain_fsm_state_next;
		drain_fsm_state_prev 	<= drain_fsm_state;
      end			
   end	
					 

 ////////////////////////////////////////////////////////////////
 ////////////////////////// OTHER /////////////////////////////
 ////////////////////////////////////////////////////////////////

 // drain counter
 assign drain_count_max = (drain_count == (DRAIN_COUNT_MAX-1));
 //assign drain_count_max = tstmp_fhempty;
 always @(posedge S_AXI_ACLK) begin : drain_count_l
   if (rst_sync_ip)      	drain_count <= 'b0;
   else if (drain_count_max)    drain_count <= 'b0;
   else 		      	drain_count <= (drain_count_enbl) ? drain_count + 1'b1 : drain_count;
 end


// free running counter -- next release use OSNT pcore
assign free_count_next = free_count + 1'b1;
assign free_count_max = free_count_next[64];
always @(posedge S_AXI_ACLK) begin : free_count_seq_l
   if (rst_sync_ip)      	free_count <= 'b0;
   else if (free_count_max)     free_count<= 'b0;
   else 		 	free_count <= free_count_next[63:0];
end

// RO register assignment
assign ro_regs = {tstamp_data_start, tstamp_data_stop, arr_pck_seq_num, exp_pck_seq_num, tstamp_sw_ln0_start, tstamp_sw_ln0_stop, tstamp_sw_ln1_start, tstamp_sw_ln1_stop};
  
endmodule
