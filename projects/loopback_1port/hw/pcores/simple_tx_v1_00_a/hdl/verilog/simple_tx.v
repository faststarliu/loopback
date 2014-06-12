/*
################################################################################
#
#  NetFPGA-10G http://www.netfpga.org
#
#  File:
#        simple_tx.v 
#
#  Author:
#        nm525
#
#  Description:
#        simple_tx's Verilog Top Module File
#
#  Copyright notice:
#        Copyright (C) 2010, 2011 The Board of Trustees of The Leland Stanford
#                                 Junior University
#
#  Licence:
#        This file is part of the NetFPGA 10G development base package.
#
#        This file is free code: you can redistribute it and/or modify it under
#        the terms of the GNU Lesser General Public License version 2.1 as
#        published by the Free Software Foundation.
#
#        This package is distributed in the hope that it will be useful, but
#        WITHOUT ANY WARRANTY; without even the implied warranty of
#        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
#        Lesser General Public License for more details.
#
#        You should have received a copy of the GNU Lesser General Public
#        License along with the NetFPGA source package.  If not, see
#        http://www.gnu.org/licenses/.
#
#
*/

`uselib lib=unisims_ver
`uselib lib=proc_common_v3_00_a

module simple_tx
#(
    // Master AXI Stream Data Width
    parameter C_M_AXIS_DATA_WIDTH=64,
    parameter C_S_AXIS_DATA_WIDTH=64,
    parameter C_M_AXIS_TUSER_WIDTH=128,
    parameter C_S_AXIS_TUSER_WIDTH=128,
    parameter C_S_AXI_DATA_WIDTH=32,
    parameter C_S_AXI_ADDR_WIDTH=32,
    parameter C_GEN_PKT_SIZE= 16, // in words
    parameter C_CHECK_PKT_SIZE= 16, // in words
    parameter C_IFG_SIZE    = 5, // in words    
    parameter C_USE_WSTRB=0,
    parameter C_DPHASE_TIMEOUT=0,
    parameter C_BASEADDR=32'hFFFFFFFF,
    parameter C_HIGHADDR=32'h00000000,
    parameter C_S_AXI_ACLK_FREQ_HZ=100
)
(

     // difference no clock, added new , update mpd

    // Global Ports
    input axi_aclk,
    input axi_aresetn,


    // Master Stream Ports (interface to data path downstream)
    output reg [C_M_AXIS_DATA_WIDTH - 1:0]         m_axis_tdata,
    output reg [C_M_AXIS_TUSER_WIDTH - 1:0]        m_axis_tuser,
    output reg [((C_M_AXIS_DATA_WIDTH / 8)) - 1:0] m_axis_tstrb,
    output reg                                     m_axis_tvalid,
    input                                          m_axis_tready,
    output reg                                     m_axis_tlast,

    // Slave Stream Ports (interface to data path upstream)
    input [C_S_AXIS_DATA_WIDTH - 1:0]          s_axis_tdata,
    input [((C_S_AXIS_DATA_WIDTH / 8)) - 1:0]  s_axis_tstrb,
    input [C_S_AXIS_TUSER_WIDTH - 1:0]         s_axis_tuser,
    input                                      s_axis_tvalid,
    output                                     s_axis_tready,
    input                                      s_axis_tlast,

    // AXI Lite control/status interface
    input                                      s_axi_aclk,
    input                                      s_axi_aresetn,
    input  [C_S_AXI_ADDR_WIDTH-1:0]            s_axi_awaddr,
    input                                      s_axi_awvalid,
    output                                     s_axi_awready,
    input  [C_S_AXI_DATA_WIDTH-1:0]            s_axi_wdata,
    input  [((C_S_AXI_DATA_WIDTH / 8)) - 1:0]  s_axi_wstrb,
    input                                      s_axi_wvalid,
    output                                     s_axi_wready,
    output [1:0]                               s_axi_bresp,
    output                                     s_axi_bvalid,
    input                                      s_axi_bready,
    input  [C_S_AXI_ADDR_WIDTH-1:0]            s_axi_araddr,
    input                                      s_axi_arvalid,
    output                                     s_axi_arready,
    output [C_S_AXI_DATA_WIDTH-1:0]            s_axi_rdata,
    output [1:0]                               s_axi_rresp,
    output                                     s_axi_rvalid,
    input                                      s_axi_rready
);


   // ------------- Regs/ wires -----------

   localparam NUM_RO_REGS       = 5;
   localparam NUM_RW_REGS       = 2;

  // wire [NUM_WO_REGS*C_S_AXI_DATA_WIDTH-1:0] wo_regs;
   wire [NUM_RW_REGS*C_S_AXI_DATA_WIDTH-1:0] rw_regs;
   wire [NUM_RO_REGS*C_S_AXI_DATA_WIDTH-1:0] ro_regs;

   wire                                      Bus2IP_Clk;
   wire                                      Bus2IP_Resetn;
   wire [C_S_AXI_ADDR_WIDTH-1:0]             Bus2IP_Addr;
   wire [0:0]                                Bus2IP_CS;
   wire                                      Bus2IP_RNW;
   wire [C_S_AXI_DATA_WIDTH-1:0]             Bus2IP_Data;
   wire [C_S_AXI_DATA_WIDTH/8-1:0]           Bus2IP_BE;
   wire [C_S_AXI_DATA_WIDTH-1:0]             IP2Bus_Data;
   wire                                      IP2Bus_RdAck;
   wire                                      IP2Bus_WrAck;
   wire                                      IP2Bus_Error;
   
   reg [C_S_AXI_DATA_WIDTH-1 : 0] tx_count;
   reg [C_S_AXI_DATA_WIDTH-1 : 0] rx_count;
   reg [C_S_AXI_DATA_WIDTH-1 : 0] err_count;
   wire [31:0] gate;

   wire [31:0] rst_cntrs;
   reg [31:0] timestamp, count;
   reg tx_count_enable, rx_count_enable, err_count_enable;
	
   reg [2:0] state, state_next;


   localparam GATE   	    = 3'b001;
   localparam MODULE_HEADER = 3'b010;
   localparam SECOND 	    = 3'b100;


   assign s_axis_tready = 1'b1;



   always @(*) begin//{
      state_next   = state;
         m_axis_tuser = 'b0;
         m_axis_tdata = 'b0;
         m_axis_tstrb = 'b0;
         m_axis_tvalid = 'b0;
         m_axis_tlast = 'b0;
	 tx_count_enable = 'b0;
	 rx_count_enable = 'b0;
	 err_count_enable = 'b0;
	 
      case(state) //{

        GATE: begin//{
                        m_axis_tvalid = 'b1;
                        state_next = MODULE_HEADER;
                        end//}

        MODULE_HEADER: begin//{
                         m_axis_tlast = 'b0;
                         m_axis_tvalid = 'b1;
                         m_axis_tstrb=32'hffffffff;
                         m_axis_tuser = 128'h00000000000000000000000004800040;
                         m_axis_tdata = 64'haaaaaaaaaaaaaaaa;
                             // if(m_axis_tready) begin//{
                         state_next = SECOND;
                               // end//}
        		end//}

        SECOND: begin//{
                m_axis_tlast = 'b1;
                m_axis_tvalid = 'b1;
                m_axis_tstrb=32'hffffffff;
                m_axis_tdata = 64'hffffffffffffffff;
                m_axis_tuser= 128'h0;
                if(m_axis_tlast & m_axis_tvalid) begin//{
                           state_next = GATE;
		           tx_count_enable = 'b1;
                         end//}
                end//}


      endcase //} case (state)
   end //} always @ (*)

   always @(posedge axi_aclk) begin
      if(~axi_aresetn) begin
         state <= GATE;
      end
      else begin
         state <= state_next;
      end
   end




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
    .S_AXI_ACLK          (  s_axi_aclk    ),
    .S_AXI_ARESETN       (  s_axi_aresetn ),
    .S_AXI_AWADDR        (  s_axi_awaddr  ),
    .S_AXI_AWVALID       (  s_axi_awvalid ),
    .S_AXI_WDATA         (  s_axi_wdata  ),
    .S_AXI_WSTRB         (  s_axi_wstrb   ),
    .S_AXI_WVALID        (  s_axi_wvalid  ),
    .S_AXI_BREADY        (  s_axi_bready  ),
    .S_AXI_ARADDR        (  s_axi_araddr  ),
    .S_AXI_ARVALID       (  s_axi_arvalid ),
    .S_AXI_RREADY        (  s_axi_rready  ),
    .S_AXI_ARREADY       (  s_axi_arready ),
    .S_AXI_RDATA         (  s_axi_rdata   ),
    .S_AXI_RRESP         (  s_axi_rresp   ),
    .S_AXI_RVALID        (  s_axi_rvalid  ),
    .S_AXI_WREADY        (  s_axi_wready  ),
    .S_AXI_BRESP         (  s_axi_bresp   ),
    .S_AXI_BVALID        (  s_axi_bvalid  ),
    .S_AXI_AWREADY       (  s_axi_awready ),
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
//    .bus2ip_clk     ( Bus2IP_Clk     ),
//    .bus2ip_resetn  ( Bus2IP_Resetn  ), 
//    .bus2ip_addr    ( Bus2IP_Addr    ),
//    .bus2ip_cs      ( Bus2IP_CS[0]   ),
//    .bus2ip_rnw     ( Bus2IP_RNW     ),
//    .bus2ip_data    ( Bus2IP_Data    ),
//    .bus2ip_be      ( Bus2IP_BE      ),
//    .ip2bus_data    ( IP2Bus_Data    ),
//    .ip2bus_rdack   ( IP2Bus_RdAck   ),
//    .ip2bus_wrack   ( IP2Bus_WrAck   ),
//    .ip2bus_error   ( IP2Bus_Error   ),
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


always @(posedge axi_aclk)
         if(~axi_aresetn) begin//{
                count <= 'b0;
		timestamp <= 'b0;
                end//}
        else if (rst_cntrs) begin//{
 		count <= 'b0;
                timestamp <= 'b0;
                end//}
        //else if(count == 32'b100110001000000000000000000) begin//{
 //         else if(count == 32'b1001100010010110100000000000) begin//{
//                timestamp <= timestamp +'b1;
//                count <='b0;
//                end//}
        else
                count <= count + 1'b1;


always @(posedge axi_aclk)
         if(~axi_aresetn) begin//{
                tx_count <= 'b0;
                rx_count <= 'b0;
                err_count <= 'b0;
                end//}
        else if (rst_cntrs) begin//{
 		tx_count <= 'b0;
                rx_count <= 'b0;
                err_count <= 'b0;
                end//}
        //else if(count == 32'b100110001000000000000000000) begin//{
       else if (tx_count_enable) begin//{
                tx_count <= tx_count +'b1;
                end//}
       else if (rx_count_enable) begin//{
                rx_count <= rx_count +'b1;
                end//}
       else if (err_count_enable) begin//{
               err_count <= err_count +'b1;
               end//}




  assign rst_cntrs = rw_regs[31:0];
  assign gate      = rw_regs[63:32];
	
  assign ro_regs = {err_count,rx_count,tx_count,count};




endmodule
