///////////////////////////////////////////////////////////
// Simple testbench that loopback M_AXIS and S_AXIS if's.
// Axi lite master generates single transaction for a gate signal
// 
///////////////////////////////////////////////////////////

`timescale 1ns/1ps

`define C_M_AXI_ADDR_WIDTH 32
`define C_M_AXI_DATA_WIDTH 32


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

//switch control
wire common_rst, common_gate;
wire switch_lane0_on, switch_lane1_on;
wire switch_lane0_done, switch_lane1_done;
wire osw_drive0, osw_drive1;
reg osw_status0;

reg [3:0] status0_pipe, status1_pipe;

/////////////////////////////////////////////////////////////////////////

// simple traffic generation module
simple_tx_reset
#(
.C_S_AXI_DATA_WIDTH		(`C_M_AXI_DATA_WIDTH),
.C_S_AXI_ADDR_WIDTH		(`C_M_AXI_ADDR_WIDTH),
.C_USE_WSTRB			(0),
.C_DPHASE_TIMEOUT		(0),
.C_BASEADDR			(32'hFFFFFFFF),
.C_HIGHADDR			(32'h00000000)
) dut (
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

// -> simple_tx module
.common_rst			(common_rst),
.common_gate			(common_gate),

.switch_lane0_on 		(switch_lane0_on),
.switch_lane1_on		(switch_lane1_on),
.switch_lane0_done		(switch_lane0_done), 
.switch_lane1_done		(switch_lane1_done),

// GPIO -> SWITCH DRIVERs
.osw_drive0			(osw_drive0), 
.osw_drive1			(osw_drive1), 
// SWITCH -> GPIO STATs
.osw_status0			(status0_pipe[3]),
.osw_status1			(status1_pipe[3])
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

always @(posedge aclk) begin
	if (~aresetn) begin
		status0_pipe = 'b0;
		status1_pipe = 'b0;
	end else begin
		status0_pipe = {status0_pipe[2:0], osw_drive0};
		status1_pipe = {status1_pipe[2:0], osw_drive1};
	end
end

endmodule 



