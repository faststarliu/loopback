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

// axi stream interface
wire [`C_M_AXIS_DATA_WIDTH - 1:0] 		tdata, tdata0;  
wire [((`C_M_AXIS_DATA_WIDTH / 8)) - 1:0] 	tstrb, tstrb0;
wire [`C_M_AXIS_TUSER_WIDTH-1:0] 		tuser, tuser0; 
wire  						tvalid, tvalid0;  
wire  						tready;
reg 						tready0;  
wire  						tlast, tlast0;   



// pipeline -- debug only
reg [`C_M_AXIS_DATA_WIDTH - 1:0] 		tdata_s1, tdata_s2;  
reg [((`C_M_AXIS_DATA_WIDTH / 8)) - 1:0] 	tstrb_s1, tstrb_s2;
reg [`C_M_AXIS_TUSER_WIDTH-1:0] 		tuser_s1, tuser_s2; 
reg  						tvalid_s1, tvalid_s2;  
reg  						tready_s1, tready_s2;  
reg  						tlast_s1, tlast_s2;   


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

// external controls
reg ext_rst_count;
reg ext_gate_ctrl;
//
reg ext_switch_lane0_on;
reg ext_switch_lane1_on;
reg ext_switch_lane0_done;
reg ext_switch_lane1_done;

reg [63:0] stamp_counter;

/////////////////////////////////////////////////////////////////////////

// simple traffic generation module
simple_tx_stats
#(
.C_M_AXIS_DATA_WIDTH		(`C_M_AXIS_DATA_WIDTH),
.C_S_AXIS_DATA_WIDTH		(`C_S_AXIS_DATA_WIDTH),
.C_M_AXIS_TUSER_WIDTH		(`C_M_AXIS_TUSER_WIDTH),
.C_S_AXIS_TUSER_WIDTH		(`C_M_AXIS_TUSER_WIDTH),
.C_S_AXI_DATA_WIDTH		(`C_M_AXI_DATA_WIDTH),
.C_S_AXI_ADDR_WIDTH		(`C_M_AXI_ADDR_WIDTH),
.C_USE_WSTRB			(0),
.C_DPHASE_TIMEOUT		(0),
.C_BASEADDR			(32'hFFFFFFFF),
.C_HIGHADDR			(32'h00000000),
.C_S_AXI_ACLK_FREQ_HZ		(100),
.IFNO				(20),	
.TIMESTAMP_WIDTH		(64)
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

.M_AXIS_TDATA			(tdata),
.M_AXIS_TSTRB			(tstrb),
.M_AXIS_TUSER			(tuser),
.M_AXIS_TVALID			(tvalid),
.M_AXIS_TREADY			(tready_s2),
.M_AXIS_TLAST			(tlast),

.S_AXIS_TDATA			(tdata_s2),
.S_AXIS_TSTRB			(tstrb_s2),
.S_AXIS_TUSER			(tuser_s2),
.S_AXIS_TVALID			(tvalid_s2),
.S_AXIS_TREADY			(tready),
.S_AXIS_TLAST			(tlast_s2),

.M_AXIS0_TDATA			(tdata0),
.M_AXIS0_TSTRB			(tstrb0),
.M_AXIS0_TUSER			(tuser0),
.M_AXIS0_TVALID			(tvalid0),
.M_AXIS0_TREADY			(tready0),
.M_AXIS0_TLAST			(tlast0),

// user def
.ext_rst_count			(ext_rst_count),
.ext_gate_ctrl			(ext_gate_ctrl),

.ext_switch_lane0_on 		(ext_switch_lane0_on),
.ext_switch_lane1_on		(ext_switch_lane1_on),
.ext_switch_lane0_done		(ext_switch_lane0_done), 
.ext_switch_lane1_done		(ext_switch_lane1_done),
.stamp_counter			(stamp_counter)
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

initial begin

	// check whether switch tstamping is working fine 	
	ext_rst_count = 1'b0;
	ext_gate_ctrl = 1'b0;
	ext_switch_lane0_on   = 1'b0;
	ext_switch_lane1_on   = 1'b0;
	ext_switch_lane0_done = 1'b0;	
	ext_switch_lane1_done = 1'b0;	
	tready0 = 1'b0;
	
	// rst  pulse
	#4000
	ext_rst_count = 1'b1;
	#20 	
	ext_rst_count = 1'b0;
	#20
	ext_rst_count = 1'b1;
	#20 	
	ext_rst_count = 1'b0;

	// switch lane0 on pulse
	#200
	ext_switch_lane0_on   = 1'b1;
	#20
	ext_switch_lane0_on   = 1'b0;

	// switching lane0 done pulse
	#60
	ext_switch_lane0_done = 1'b1;
	#20
	ext_switch_lane0_done = 1'b0;			

	// switch lane1 on pulse	
	#200
	ext_switch_lane1_on   = 1'b1;
	#20
	ext_switch_lane1_on   = 1'b0;

	// switching lane0 done pulse
	#60
	ext_switch_lane1_done = 1'b1;
	#20
	ext_switch_lane1_done = 1'b0;			

        #40
	tready0 = 1'b1;	

	// gate pulse
	ext_gate_ctrl = 1'b1;

	#20
	ext_gate_ctrl = 1'b0;
end

//// artificial delay 

  always @(posedge aclk) begin
      if(~aresetn) begin
	{tdata_s1, tdata_s2} 	<= 'b0;
	{tstrb_s1, tstrb_s2} 	<= 'b0;
	{tuser_s1, tuser_s2} 	<= 'b0;
	{tvalid_s1, tvalid_s2} 	<= 'b0;
	{tready_s1, tready_s2} 	<= 'b0;
	{tlast_s1, tlast_s2}	<= 'b0; 	
      end else begin
	{tdata_s1, tdata_s2} 	<= {tdata, tdata_s1};
	{tstrb_s1, tstrb_s2} 	<= {tstrb, tstrb_s1};
	{tuser_s1, tuser_s2} 	<= {tuser, tuser_s1};
	{tvalid_s1, tvalid_s2} 	<= {tvalid, tvalid_s1};
	{tready_s1, tready_s2} 	<= {tready, tready_s1};
	{tlast_s1, tlast_s2}	<= {tlast, tlast_s1}; 
      end
  end	

  always @(posedge aclk) begin
      if(~aresetn) stamp_counter <= 'b0;
      else stamp_counter <= stamp_counter + 1'b1;		 	
  end

endmodule 




