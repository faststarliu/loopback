/*******************************************************************************
 *
 *  NetFPGA-10G http://www.netfpga.org
 *
 *  Author:
 *     ya240 
 *
 *  Description:
 *        
 *
 *  Copyright notice:
 *        Copyright (C) 2014 University of Cambridge
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

module simple_tx_reset
#(
  parameter C_FAMILY              = "virtex5",
  parameter C_S_AXI_DATA_WIDTH    = 32,          
  parameter C_S_AXI_ADDR_WIDTH    = 32,          
  parameter C_USE_WSTRB           = 0,
  parameter C_DPHASE_TIMEOUT      = 0,
  parameter C_BASEADDR            = 32'hFFFFFFFF,
  parameter C_HIGHADDR            = 32'h00000000
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
  
  // simple_tx_rst --> simple_tx	
  output  				    common_rst,
  output 				    common_gate,

  output	 			    switch_lane0_on,
  output 				    switch_lane1_on,
  output 				    switch_lane0_done, 
  output 				    switch_lane1_done,

 
  // simple_tx_rst --> gpio
  // switch drivers
  output 				    osw_drive0, 
  output 				    osw_drive1, 
  // switch stats
  input  				    osw_status0,
  input 				    osw_status1 	

);
 ////////////////////////////////////////////////////////////////
 // --- SIMPLE_TX_RST --> SIMPLE_TX ---  
 // common_rst -- resets free running counters in simple tx
 // common_gate -- launches pkt generation after AXI gate is set up.
 // not related optical switch control.
 // switch_on  -- informs when switch was set into ON state (respectively to lane #).
 // switch_done -- informs when switch has been setup (respectively to lane #)
 // both sw_on & sw_done are pulses.
 //
 // --- SIMPLE_TX_RST <--> GPIO --- 
 // 2 tx gpio lanes are used for ctrl -- 
 // path P1(P1')->P2(P2') for ON state lane 0 / OFF state lane1;
 // path P1(P1')->P3(P3') for OFF state lane 0 / ON state lane1;	
 // osw_drive0 -- drive lane 0. 
 // osw_drive1 -- drive lane 1.
 // ----------------------------------
 // 2 rx gpio pins are used for status --
 // osw_status0 shows when switching p1-p2
 // is complete. osw_status1 shows the same
 // for p1-p3 path. 
 ////////////////////////////////////////////////////////////////

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


  // define number of AXI registers here
  localparam NUM_RW_REGS       	= 3;
  localparam NUM_RO_REGS       	= 1;
	
  // FSM
  localparam NUM_STATES = 3;
  localparam SW_IDLE 	= 2'd0, 
	     SW_DRIVE	= 2'd1,
	     SW_NDRIVE	= 2'd2;	

  // # cycles to get stability of gpio rx
  // set your value here; period = DEBOUNCE_CYCLES*6.4ns
  localparam DEBOUNCE_CYCLES = 4096;
    
  // do not touch
  localparam DEB_COUNT_SIZE = log2(DEBOUNCE_CYCLES);
  
 

  // -- Internal bus Signals
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
  
 
  // address offsets for RW REGs
  //---- COUNTERS RESET  -- `C_M_AXI_ADDR_WIDTH'h0000;
  //---- GATE CONTROL 	 -- `C_M_AXI_ADDR_WIDTH'h0004;
  //---- OPTICAL SW CTRL -- `C_M_AXI_ADDR_WIDTH'h0008;	
  wire     [NUM_RW_REGS*C_S_AXI_DATA_WIDTH-1 : 0] rw_regs;
  wire     [NUM_RO_REGS*C_S_AXI_DATA_WIDTH-1 : 0] ro_regs; 


  // user defined
  reg 						 rst_cntrs, rst_cntrs_q;
  reg 						 gate, gate_q;
  
  reg	[1:0]					 axi_sw_ctrl; 
  reg						 axi_sw_ctrl0_q, axi_sw_ctrl1_q;
  reg						 drive_lane0, drive_lane1;		
  wire 						 sw_on, sw_off;	

 // Optical switch -> GPIO STATUS + debouncer. 
  wire 						 osw_status0_sync, osw_status1_sync;	
  wire						 stat_signal0, stat_signal1;			
  wire						 stat_pulse0, stat_pulse1;
  reg 	 					 sw_stat0_dff, sw_stat1_dff;
 	

 // OSwitch FSM and ctrls
  reg [NUM_STATES-2:0] 				 fsm_state, fsm_state_next;	
  reg 						 drive_lane0_r;
  reg 						 drive_lane1_r;
  reg 						 sw_count_enbl_r;


 // switch counter
  wire 						sw_count_max;
  reg [63:0] 					sw_count;
  reg 						sw_count_enbl;


 ///////////////////////////////////////////////////////////////////////////////////
 // -- AXILITE IPIF -- registers
 axi_lite_ipif_1bar #
 (.C_S_AXI_DATA_WIDTH (C_S_AXI_DATA_WIDTH),
  .C_S_AXI_ADDR_WIDTH (C_S_AXI_ADDR_WIDTH),
  .C_USE_WSTRB        (C_USE_WSTRB       ),
  .C_DPHASE_TIMEOUT   (C_DPHASE_TIMEOUT  ),
  .C_BAR0_BASEADDR    (C_BASEADDR        ),
  .C_BAR0_HIGHADDR    (C_HIGHADDR        )
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
    .NUM_RW_REGS        (NUM_RW_REGS       ),
    .NUM_RO_REGS        (NUM_RO_REGS       )
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
    .ro_regs	    ( ro_regs )
  );

 ///////////////////////////////////////////////////////////////////////////////////
 // -- 2 RX GPIO Signals

 // -- put some synchronizers/buffers on the way --
 // status0 + 11 pipeline stages
 synchronizer #(
  .WIDTH		(1), 
  .DEPTH		(10)
 ) synch_gpio_st0 (
  .clockA		(S_AXI_ACLK), 
  .resetA		(~S_AXI_ARESETN),
  .clockB		(S_AXI_ACLK), 
  .resetB		(~S_AXI_ARESETN),
  .dataA		(osw_status0),
  .dataB		(osw_status0_sync)
 );

 // status1 + 11 pipeline stages
 synchronizer #(
  .WIDTH		(1), 
  .DEPTH		(10)
 ) synch_gpio_st1 (
  .clockA		(S_AXI_ACLK), 
  .resetA		(~S_AXI_ARESETN),
  .clockB		(S_AXI_ACLK), 
  .resetB		(~S_AXI_ARESETN),
  .dataA		(osw_status1),
  .dataB		(osw_status1_sync)
 );

 // -- Debouncers on the way 
 debouncer #(
  .COUNT_WIDTH 		(DEB_COUNT_SIZE)
 ) db_osw_status0 (
  .aclk			(S_AXI_ACLK), 
  .aresetn		(S_AXI_ARESETN),
  .osw_status		(osw_status0_sync),
  .sw_stat_reg		(stat_signal0)
 );

 debouncer #(
  .COUNT_WIDTH 		(DEB_COUNT_SIZE)
 ) db_osw_status1 (
  .aclk			(S_AXI_ACLK), 
  .aresetn		(S_AXI_ARESETN),
  .osw_status		(osw_status1_sync),
  .sw_stat_reg		(stat_signal1)
 );

 //////////////////////// RX STATUS ///////////////////////////
 // create pulses for the filtered GPIO RX signals
 always @(posedge S_AXI_ACLK or negedge S_AXI_ARESETN) begin : sw_stat_seq_l
	if(~S_AXI_ARESETN) 	{sw_stat0_dff, sw_stat1_dff} <= 'b0;
	else 			{sw_stat0_dff, sw_stat1_dff} <= {stat_signal0, stat_signal1};
 end
 // create pulses for feedback loop
 assign stat_pulse0  = (sw_stat0_dff ^ stat_signal0) & stat_signal0;
 assign stat_pulse1  = (sw_stat1_dff ^ stat_signal1) & stat_signal1;

 // switch done pulse
 assign switch_lane0_done = stat_pulse0;
 assign switch_lane1_done = stat_pulse1;

 //////////////////////// AXI REGS ///////////////////////////

assign ro_regs = {drive_lane1, drive_lane0, fsm_state};

 // Rst_cntrs resets counters of simple_tx IPs.
 // Gate_trigger will start simple_tx IPs pck generation.
 // Switch_ctrl controls optical switch.
 always @(posedge S_AXI_ACLK or negedge S_AXI_ARESETN) begin : rst_tran_l
      if(~S_AXI_ARESETN) begin
	 // receive from regs and pulse it since
	 // reg path is slow for value change.
	 axi_sw_ctrl				<= 'b0;
	 axi_sw_ctrl0_q				<= 'b0;	
	 axi_sw_ctrl1_q  			<= 'b0;

	 gate 					<= 'b0;
 	 rst_cntrs 				<= 1'b1;
	 gate_q					<= 'b0;
 	 rst_cntrs_q 				<= 1'b1; 
      end else begin
	 axi_sw_ctrl   				<= rw_regs[(2*C_S_AXI_DATA_WIDTH)+1:2*C_S_AXI_DATA_WIDTH];
	 {axi_sw_ctrl1_q, axi_sw_ctrl0_q}  	<= axi_sw_ctrl;
	
 	 gate      				<= rw_regs[1*C_S_AXI_DATA_WIDTH];
	 rst_cntrs 				<= rw_regs[0*C_S_AXI_DATA_WIDTH]; 
 	 gate_q      				<= gate;
	 rst_cntrs_q 				<= rst_cntrs;	
      end
   end

 // pulse rst and gate since axi regs can keep 
 // values for longer
 assign common_rst 	= (rst_cntrs ^ rst_cntrs_q) 	& rst_cntrs;
 assign common_gate 	= (gate ^ gate_q) 		& gate; 

 wire axi_sw_ctrl_pulse0 = (axi_sw_ctrl[0] ^ axi_sw_ctrl0_q) & axi_sw_ctrl[0];
 wire axi_sw_ctrl_pulse1 = (axi_sw_ctrl[1] ^ axi_sw_ctrl1_q) & axi_sw_ctrl[1];

 //////////////////////// TX GATE CTRL ////////////////////////

 // Assert Optical Switch GPIO pins when switch_ctrl has arrived.
 // Deassert switch signal after some time, to avoid device charging.
 // Optical switch operates in latched mode, i.e. stays in the 
 // state until switched in opposite direction again.

 assign sw_on  =  axi_sw_ctrl_pulse0 & ~axi_sw_ctrl_pulse1;
 assign sw_off = ~axi_sw_ctrl_pulse0 &  axi_sw_ctrl_pulse1;


 // SW CTRL FSM comb
 always @ (*) begin : sw_ctrl_fsm_comb_l
	fsm_state_next 	= fsm_state;
	drive_lane0_r	= 'b0;
	drive_lane1_r	= 'b0;
	sw_count_enbl_r	= 'b0;

	case (fsm_state) 		
		SW_IDLE: begin
			if (sw_on)       fsm_state_next = SW_DRIVE;
			else if (sw_off) fsm_state_next = SW_NDRIVE;
			else		 fsm_state_next = SW_IDLE;
	  	end
 	  	SW_DRIVE: begin
			sw_count_enbl_r = 1'b1;
			drive_lane0_r	= 1'b1;	
			if (sw_count_max) begin
				 fsm_state_next  = SW_IDLE;
				 sw_count_enbl_r = 1'b0;
				 drive_lane0_r	 = 1'b0;
			end
	  	end
	  	SW_NDRIVE: begin
			sw_count_enbl_r = 1'b1;
			drive_lane1_r	= 1'b1;
			if (sw_count_max) begin
				 fsm_state_next  = SW_IDLE;				 
				 sw_count_enbl_r = 1'b0;
				 drive_lane1_r	 = 1'b0;				 
			end
	  	end
		default : begin
			fsm_state_next	= SW_IDLE;
		end
	endcase	
 end

 // seq
 always @(posedge S_AXI_ACLK or negedge S_AXI_ARESETN) begin : sw_ctrl_fsm_seq_l
	if(~S_AXI_ARESETN) begin
		fsm_state	<= SW_IDLE;

		drive_lane0	<= 'b0;
		drive_lane1	<= 'b0;

		sw_count_enbl	<= 'b0;	
	end else begin
		fsm_state	<= fsm_state_next;

		drive_lane0	<= drive_lane0_r;
		drive_lane1	<= drive_lane1_r;

		sw_count_enbl	<= sw_count_enbl_r;		
        end
 end

 // drive the lanes
 assign osw_drive0 = drive_lane0;
 assign osw_drive1 = drive_lane1;

 // switch ON/OFF state for lanes 0 and 1 
 assign switch_lane0_on = sw_on;
 assign switch_lane1_on = sw_off;

 // feedback loop, disable switch after switch is active
 // assign sw_count_max = (stat_pulse0 | stat_pulse1);
 
 // with no feedback
 assign sw_count_max = sw_count[19];

 always @(posedge S_AXI_ACLK or negedge S_AXI_ARESETN) begin : sw_count_seq_l
   if (~S_AXI_ARESETN)      	sw_count <= 'b0;
   else if (sw_count_max)     	sw_count <= 'b0;
   else 		      	sw_count <= (sw_count_enbl) ? sw_count + 1'b1 : sw_count;
 end

  
endmodule
