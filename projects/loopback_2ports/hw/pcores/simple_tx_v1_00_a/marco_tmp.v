 ////////////////////////////////////////////////////////////////
 ////////////////////////// RX PART /////////////////////////////
 ////////////////////////////////////////////////////////////////

  // Slave Stream Ports (interface to data path upstream)
 assign S_AXIS_TREADY = 1'b1;
 	
 // simple rx part that compares the encapsulated sequence number 
 // with the rx_counter. if match than simple RTT measurements, else 
 // recovery time measurements. Extract the info from the second word.

 assign frame_arr 	= S_AXIS_TVALID & S_AXIS_TREADY;
 // assign frame_arr_pulse = (frame_arr ^ frame_arr_q) & frame_arr;
 wire frame_done	= S_AXIS_TVALID & S_AXIS_TREADY & S_AXIS_TLAST;	

 localparam RX_FSM_WIDTH = 2; 
 localparam WAIT_ARRIVAL    = 2'd0,
	    HEAD_DETECT     = 2'd1,
	    SECOND_DETECT   = 2'd2;		

 reg [RX_FSM_WIDTH-1 :0 ]  rx_fsm_state;	     	

 always @ (posedge S_AXI_ACLK) begin : rx_frame_l
	if (rst_sync_ip) begin
		rx_fsm_state 		<= WAIT_ARRIVAL;	
		// frame stats	
		tstamp_start		<= 'b0;
		tstamp_stop		<= 'b0;
		rx_count 		<= 'b0;
		arr_pck_seq_num		<= 'b0;
		exp_pck_seq_num 	<= 'b0;

	end else begin
		arr_pck_seq_num	 	<= arr_pck_seq_num;
		exp_pck_seq_num 	<= exp_pck_seq_num;
		tstamp_start		<= tstamp_start;
		tstamp_stop		<= tstamp_stop;	
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
					tstamp_start 		<= S_AXIS_TDATA[111:48];
					tstamp_stop  		<= free_count;
	
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
