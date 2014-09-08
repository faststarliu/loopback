///////////////////////////////////////////////////////////
// Simple testbench that loopback M_AXIS and S_AXIS if's.
// Axi lite master generates single transaction for a gate signal
// 
//////////////////////////////////////////////////////////

`timescale 1ns/1ps

`define C_M_AXI_ADDR_WIDTH 32
`define C_M_AXI_DATA_WIDTH 32
`define C_S_AXIS_DATA_WIDTH 256
`define C_M_AXIS_DATA_WIDTH 256

`define C_TRANSACTIONS_NUM 4

`define C_M_AXIS_DATA_WIDTH   256
`define C_M_AXIS_TUSER_WIDTH  128

module testbench();

// clk, rst
reg  aclk;
reg  aresetn; 

// axi lite interface
wire wcomplete;
wire rcomplete;
wire [`C_M_AXI_ADDR_WIDTH-1:0] axi_awaddr; 
wire axi_awvalid; 
wire axi_awready;
wire [`C_M_AXI_DATA_WIDTH-1:0] axi_wdata; 
wire [`C_M_AXI_DATA_WIDTH/8-1:0] axi_wstrb; 
wire axi_wvalid;
wire axi_wready; 
wire [1:0] axi_bresp; 
wire axi_bvalid; 
wire axi_bready;
wire [`C_M_AXI_ADDR_WIDTH-1:0] axi_araddr;
wire axi_arvalid; 
wire axi_arready; 
wire [`C_M_AXI_DATA_WIDTH-1:0] axi_rdata;
wire [1:0] axi_rresp;
wire axi_rvalid;
wire axi_rready;


// global time 
wire [63:0] stamp_counter;

/////////////////////////////////////////////////////////////////////////
osnt_timestamp
#(
  .C_S_AXI_DATA_WIDTH (`C_M_AXI_DATA_WIDTH),          
  .C_S_AXI_ADDR_WIDTH (`C_M_AXI_ADDR_WIDTH),          
  .C_USE_WSTRB 	      (0),
  .C_DPHASE_TIMEOUT   (0),
  .C_BASEADDR	      (32'hFFFFFFFF),
  .C_HIGHADDR         (32'h00000000),
  .C_S_AXI_ACLK_FREQ_HZ (100),
  .TIMESTAMP_WIDTH	(64),
  .C_DEFAULT_ENABLE_CTR (0)
) osnt_timestamp_dut
(
 // Slave AXI Ports
 .S_AXI_ACLK			(aclk),
 .S_AXI_ARESETN			(aresetn),
 .S_AXI_AWADDR			(axi_awaddr),
 .S_AXI_AWVALID			(axi_awvalid),
 .S_AXI_WDATA			(axi_wdata),
 .S_AXI_WSTRB			(axi_wstrb),
 .S_AXI_WVALID			(axi_wvalid),
 .S_AXI_BREADY			(axi_bready),
 .S_AXI_ARADDR			(axi_araddr),
 .S_AXI_ARVALID			(axi_arvalid),
 .S_AXI_RREADY			(axi_rready),
 .S_AXI_ARREADY			(axi_arready),
 .S_AXI_RDATA			(axi_rdata),
 .S_AXI_RRESP			(axi_rresp),
 .S_AXI_RVALID			(axi_rvalid),
 .S_AXI_WREADY			(axi_wready),
 .S_AXI_BRESP			(axi_bresp),
 .S_AXI_BVALID			(axi_bvalid),
 .S_AXI_AWREADY			(axi_awready),

  // Timestamp
 .tstamp 			(stamp_counter)

);



// axi master module that instantiates single transaction

axi_lite_master_1t 
#(
  .C_TRANSACTIONS_NUM		()
) dut_axi_master (
  .WCOMPLETE			(wcomplete),
  .RCOMPLETE 			(rcomplete),
  .M_AXI_ACLK			(aclk),
  .M_AXI_ARESETN		(aresetn),
  .M_AXI_AWADDR			(axi_awaddr),
  .M_AXI_AWPROT			(),
  .M_AXI_AWVALID		(axi_awvalid),
  .M_AXI_AWREADY		(axi_awready),
  .M_AXI_WDATA			(axi_wdata),
  .M_AXI_WSTRB			(axi_wstrb),
  .M_AXI_WVALID			(axi_wvalid),
  .M_AXI_WREADY			(axi_wready),
  .M_AXI_BRESP			(axi_bresp),
  .M_AXI_BVALID			(axi_bvalid),
  .M_AXI_BREADY			(axi_bready),
  .M_AXI_ARADDR			(axi_araddr),
  .M_AXI_ARPROT			(),
  .M_AXI_ARVALID		(axi_arvalid),
  .M_AXI_ARREADY		(axi_arready),
  .M_AXI_RDATA			(axi_rdata),
  .M_AXI_RRESP			(axi_rresp),
  .M_AXI_RVALID			(axi_rvalid),
  .M_AXI_RREADY			(axi_rready)
);

/////////////////////////////////////////////////////////////////////////


initial begin
        aclk = 1'b0;
        aresetn = 1'b0;
        repeat(4) #10 aclk = ~aclk;
        aresetn = 1'b1;
        forever #10 aclk = ~aclk; // generate a clock        
    end

endmodule 




