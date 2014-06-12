`timescale 1ns/1ps
module testbench();

reg  aclk;
reg  aresetn; 
wire [63:0] tdata;  
wire [7:0] tstrb;  
wire  tvalid;  
wire  tready;  
wire  tlast;   

initial begin
        aclk = 1'b0;
        aresetn = 1'b0;
        repeat(4) #10 aclk = ~aclk;
        aresetn = 1'b1;
        forever #10 aclk = ~aclk; // generate a clock
    end



simple_tx
#(.C_M_AXIS_DATA_WIDTH(64),
.C_S_AXIS_DATA_WIDTH(64),
.C_S_AXI_DATA_WIDTH(32),
.C_S_AXI_ADDR_WIDTH(32),
.C_GEN_PKT_SIZE(16), // in words
.C_CHK_PKT_SIZE(16), // in words
.C_IFG_SIZE(5), // in words    
.C_USE_WSTRB(0),
.C_DPHASE_TIMEOUT(0),
.C_BASEADDR(32'hFFFFFFFF),
.C_HIGHADDR(32'h00000000),
.C_S_AXI_ACLK_FREQ_HZ(100)
) dut
(
.axi_aclk(aclk),
.axi_aresetn(aresetn),

.m_axis_tdata(tdata),
.m_axis_tstrb(tstrb),
.m_axis_tvalid(tvalid),
.m_axis_tready(tready),
.m_axis_tlast(tlast),

.s_axis_tdata(tdata),
.s_axis_tstrb(tstrb),
.s_axis_tvalid(tvalid),
.s_axis_tready(tready),
.s_axis_tlast(tlast),

.s_axi_aclk(aclk),
.s_axi_aresetn(aresetn),
.s_axi_awaddr(32'b0),
.s_axi_awvalid(1'b1),
.s_axi_awready(),
.s_axi_wdata(32'b0),
.s_axi_wstrb(4'b0),
.s_axi_wvalid(1'b1),
.s_axi_wready(),
.s_axi_bresp(),
.s_axi_bvalid(),
.s_axi_bready(1'b1),
.s_axi_araddr(32'b0),
.s_axi_arvalid(1'b1),
.s_axi_arready(),
.s_axi_rdata(),
.s_axi_rresp(),
.s_axi_rvalid(),
.s_axi_rready(1'b1)
);

endmodule 






