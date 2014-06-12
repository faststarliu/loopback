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
    output                                         m_axis_tlast,

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

   localparam NUM_RO_REGS       = 3;
   localparam NUM_RW_REGS       = 1;

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
   wire count_reset;

   localparam GEN_PKT = 2'd0;
   localparam GEN_IFG = 2'd1;
   localparam GEN_FINISH = 2'd3;
   
   localparam CHK_IDLE = 2'd0;
   localparam CHK_FINISH = 2'd1;
   localparam CHK_COMPARE = 2'd3;
   localparam CHK_WAIT_LAST = 2'd2;

   wire [255:0] seed;

   reg [1:0] gen_state;
   reg [1:0] chk_state;

   reg [15:0] gen_word_num;
   reg [15:0] chk_word_num;

   reg ok;
   reg [C_M_AXIS_DATA_WIDTH-1 : 0] pkt_tx_buf;
   reg [C_M_AXIS_DATA_WIDTH-1 : 0] pkt_rx_buf;

   assign seed = 256'hCAFEBEEFCAFEBEEFCAFEBEEFCAFEBEEFCAFEBEEFCAFEBEEFCAFEBEEFCAFEBEEF;

   assign m_axis_tlast = (gen_word_num == C_GEN_PKT_SIZE-1) ? 1'b1 : 1'b0;



   // ------------ Modules -------------
    
    always @( posedge axi_aclk or negedge axi_aresetn)
    begin
        if(axi_aresetn == 1'b0)
        begin
            m_axis_tstrb <= {(C_M_AXIS_DATA_WIDTH/8) {1'b0}};
            m_axis_tvalid <= 1'b0;
            gen_word_num <= {16 {1'b0}};
            tx_count <= {32 {1'b0}};
            gen_state <= GEN_IFG; // Initiate to Between Frames
        end
        else
        begin
            if (gen_state == GEN_PKT)
            begin
                m_axis_tstrb <= {(C_M_AXIS_DATA_WIDTH/8) {1'b1}};
                m_axis_tvalid <= 1'b1;
                if (m_axis_tready == 1'b1)
                begin
                    if (gen_word_num == C_GEN_PKT_SIZE - 1)
                    begin
                        m_axis_tstrb <= {(C_M_AXIS_DATA_WIDTH/8) {1'b0}};
                        m_axis_tvalid <= 1'b0;
                        tx_count <= tx_count + 1'b1;
                        gen_state <= GEN_IFG;
                    end
                    else
                    begin
                        pkt_tx_buf <= {pkt_tx_buf[0], pkt_tx_buf[C_M_AXIS_DATA_WIDTH-1:1]};
                        m_axis_tdata <= {pkt_tx_buf[0], pkt_tx_buf[C_M_AXIS_DATA_WIDTH-1:1]};
                    end
                    gen_word_num <= gen_word_num + 1'b1;
                end
            end
            else if (gen_state == GEN_IFG)
            begin
                m_axis_tstrb <= {(C_M_AXIS_DATA_WIDTH/8) {1'b0}};
                m_axis_tvalid <= 1'b0;
                if (m_axis_tready == 1'b1)
                begin
                    gen_word_num <= gen_word_num + 1'b1;
                    if (gen_word_num == C_GEN_PKT_SIZE + C_IFG_SIZE - 1)
                    begin
                        if (count_reset == 1'b1)
                        begin
                            gen_state <= GEN_IFG; // Hold state at GEN_IFG gently
                            tx_count <= {32 {1'b0}};
                        end
                        else
                            gen_state <= GEN_FINISH;
                    end 
                end
            end
            else if (gen_state == GEN_FINISH)
            begin
                m_axis_tstrb <= {(C_M_AXIS_DATA_WIDTH/8) {1'b1}};
                m_axis_tvalid <= 1'b1;
                m_axis_tdata <= seed[C_M_AXIS_DATA_WIDTH-1:0];
                pkt_tx_buf <= seed[C_M_AXIS_DATA_WIDTH-1:0];
                gen_word_num <= {16 {1'b0}};
                gen_state <= GEN_PKT;
            end
        end
    end

    assign s_axis_tready = 1'b1;
 


    always @( posedge axi_aclk or negedge axi_aresetn)
    begin
        if(axi_aresetn == 1'b0)
        begin
            chk_state <= CHK_IDLE;
            rx_count <= {C_S_AXI_DATA_WIDTH {1'b0}};
            err_count <= {C_S_AXI_DATA_WIDTH {1'b0}};
            ok <= 1'b1;
            chk_word_num <= {16 {1'b0}};
        end
        else
        begin
            if (chk_state == CHK_IDLE) // Waiting for a Packet
			begin
                if (s_axis_tvalid == 1'b1)
                begin
                    ok <= 1'b1;
                    pkt_rx_buf <= {s_axis_tdata[0],s_axis_tdata[C_S_AXIS_DATA_WIDTH-1:1]};
                    chk_word_num <= 16'd0;
                    chk_state <= CHK_COMPARE;
                end
			end
            else if(chk_state == CHK_COMPARE) // Checking packet
			begin
                if (s_axis_tvalid == 1'b1)
                begin
                    pkt_rx_buf <= {pkt_rx_buf[0],pkt_rx_buf[C_S_AXIS_DATA_WIDTH-1:1]};
                    chk_word_num <= chk_word_num + 1'b1;
                    if (s_axis_tdata == pkt_rx_buf)
                        ok <= 1'b1;
                    else
                        ok <= 1'b0;
                    if (chk_word_num == C_CHECK_PKT_SIZE-2)
                        if (s_axis_tlast == 1'b1)
                            chk_state <= CHK_FINISH;
                        else
                        begin
                            ok <= 1'b0;
                            chk_state <= CHK_WAIT_LAST;
                        end
                end
			end
            else if (chk_state == CHK_FINISH) // Finish up
            begin
                if (ok == 1'b1)
                    rx_count <= rx_count + 1'b1;
                else
                    err_count <= err_count + 1'b1;
                chk_state <= CHK_IDLE;
                ok <= 1'b1;
            end
            else if (chk_state == CHK_WAIT_LAST)
			begin
                if ((s_axis_tlast == 1'b1) && (s_axis_tvalid == 1'b1))
                    chk_state <= CHK_FINISH;
            end

            if (count_reset == 1'b1)
            begin
                rx_count <= {C_S_AXI_DATA_WIDTH {1'b0}};
                err_count <= {C_S_AXI_DATA_WIDTH {1'b0}};
            end
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

  assign count_reset = rw_regs[0];
  assign ro_regs     = {err_count,rx_count,tx_count};

endmodule
