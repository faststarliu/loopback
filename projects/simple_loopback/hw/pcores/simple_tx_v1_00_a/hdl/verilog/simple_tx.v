/*******************************************************************************
 *
 *  NetFPGA-10G http://www.netfpga.org
 *
 *  Author:
 *        Neelakandan Manihatty Bojan
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
  input                                     S_AXIS_TLAST
);

  localparam NUM_RW_REGS       = 2;
  localparam NUM_RO_REGS       = 4;

  // -- Signals

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
  
  wire     [NUM_RW_REGS*C_S_AXI_DATA_WIDTH-1 : 0] rw_regs;
  wire     [NUM_RO_REGS*C_S_AXI_DATA_WIDTH-1 : 0] ro_regs;
  
  reg      [C_S_AXI_DATA_WIDTH-1 : 0]             cntr;
  wire                                            rst_cntrs;

//*************************Logic*****************

   reg [2:0] state, state_next;
   reg tx_count_enable;
   reg [31:0] tx_count, cntr_gate;
   wire [31:0] gate;

   localparam GATE          = 3'b001;
   localparam MODULE_HEADER = 3'b010;
   localparam SECOND        = 3'b100;


   assign S_AXIS_TREADY = 1'b1;

  always @(*) begin//{
      state_next   = state;
         M_AXIS_TUSER = 'b0;
         M_AXIS_TDATA = 'b0;
         M_AXIS_TSTRB = 'b0;
         M_AXIS_TVALID = 'b0;
         M_AXIS_TLAST = 'b0;
         tx_count_enable = 'b0;

      case(state) //{

        GATE: if((cntr_gate== 32'b1) | gate) begin//{
                        M_AXIS_TVALID = 'b0;
                        state_next = MODULE_HEADER;
                        end//}

        MODULE_HEADER: begin//{
                         M_AXIS_TLAST = 'b0;
                         M_AXIS_TVALID = 'b1;
                         M_AXIS_TSTRB=32'hffffffff;
                         M_AXIS_TUSER = 128'h00000000000000000000000004800040;
                         M_AXIS_TDATA = {8'h00,32'h00000700,16'h0900,32'h00000600,8'b01,32'h0,16'h0200,16'h0888,48'hbbbbbbbbbbbb,48'haaaaaaaaaaaa};
                          if(M_AXIS_TREADY) begin//{
                         state_next = SECOND;
                                end//}
                        end//}

        SECOND: begin//{
                M_AXIS_TLAST = 'b1;
                M_AXIS_TVALID = 'b1;
                M_AXIS_TSTRB=32'hffffffff;
                M_AXIS_TDATA = 256'h dddddddddddddccccccccccaaaaaaaaaaaffffffeeeee;
                M_AXIS_TUSER= 128'h0;
                if(M_AXIS_TLAST & M_AXIS_TVALID & M_AXIS_TREADY) begin//{
                           state_next = GATE;
                           tx_count_enable = 'b1;
                         end//}
                end//}


      endcase //} case (state)
   end //} always @ (*)

   always @(posedge S_AXI_ACLK) begin
      if(~S_AXI_ARESETN) begin
         state <= GATE;
      end
      else begin
         state <= state_next;
      end
   end


 
//*************************Logic Ends*****************
  // -- AXILITE IPIF
  axi_lite_ipif_1bar #
  (
    .C_S_AXI_DATA_WIDTH (C_S_AXI_DATA_WIDTH),
    .C_S_AXI_ADDR_WIDTH (C_S_AXI_ADDR_WIDTH),
	.C_USE_WSTRB        (C_USE_WSTRB),
	.C_DPHASE_TIMEOUT   (C_DPHASE_TIMEOUT),
    .C_BAR0_BASEADDR    (C_BASEADDR),
    .C_BAR0_HIGHADDR    (C_HIGHADDR)
  ) axi_lite_ipif_inst
  (
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
  (
    .C_S_AXI_DATA_WIDTH (C_S_AXI_DATA_WIDTH),          
    .C_S_AXI_ADDR_WIDTH (C_S_AXI_ADDR_WIDTH),   
    .NUM_RW_REGS        (NUM_RW_REGS),
    .NUM_RO_REGS        (NUM_RO_REGS)
  ) ipif_regs_inst
  (   
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
  
  // -- Register assignments
  
  assign rst_cntrs = rw_regs[31:0]; 
  assign gate      = rw_regs[63:32];
  
  assign ro_regs = {M_AXIS_TDATA,M_AXIS_TREADY,tx_count,cntr_gate,cntr};
  
  
  always @ (posedge S_AXI_ACLK) begin
    if (~S_AXI_ARESETN) begin
	  cntr <= {C_S_AXI_DATA_WIDTH{1'b0}};
	  cntr_gate <= 32'b0;
	end
	else if (rst_cntrs) begin
	  cntr <= {C_S_AXI_DATA_WIDTH{1'b0}};
	  cntr_gate <= 32'b0;
	end
        else if(cntr == 32'b1001100010010110100000000000) begin//{
          cntr <= 32'b0;
       	  cntr_gate <= 32'b1;
        end//}
	else begin
	  cntr <= cntr + 1'b1;
	  cntr_gate <= 32'b0;
	end
  end


always @(posedge S_AXI_ACLK)
         if(~S_AXI_ARESETN) begin//{
                tx_count <= 'b0;
                end//}
        else if (rst_cntrs) begin//{
                tx_count <= 'b0;
                end//}
        else if (tx_count_enable) begin//{
                tx_count <= tx_count + 1'b1;
		end//}

  
endmodule
