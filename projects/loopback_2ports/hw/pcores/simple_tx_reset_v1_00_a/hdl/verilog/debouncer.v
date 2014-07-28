//////////////////////////////////////////////////////////////////////////////////
// Debounce Logic Circuit, credit to Tony Storey.
// www.eewiki.net
// Modified by ya240, on 01/07/2014.
//
// Description: simple debouncing circuit that detects level change, but
// instead of replicating the ouput, waits & keeps the last output 
// for a certain amount of cycles before the level is changed.
// stat_pulse generates a single pulse when 0->1 trans. appear.
// Please carefully calculate the number of clks for glitch removal.
// This should be smaller in duration than signal duration itself. 
//////////////////////////////////////////////////////////////////////////////////
module debouncer #(
	parameter COUNT_WIDTH = 7
)
(
	input 		aclk,
	input 		aresetn,
	input 		osw_status,
	output 	reg	sw_stat_reg
);

//////////////////////////////////////////
// min 3 clks of delay
reg [COUNT_WIDTH-1 : 0] db_count, db_count_next;
reg [1:0] 		dff;


wire db_reset = dff[1]^dff[0];
wire db_add = ~(db_count[COUNT_WIDTH-1]);

// comb counter update
always @ (db_reset, db_add, db_count) begin : comb_count_l
	case ({db_reset, db_add})
		2'b00: 		db_count_next <= db_count;
		2'b01: 		db_count_next <= db_count + 1'b1;
		default: 	db_count_next <= 'b0;
	endcase
end

// seq counter 
always @ (posedge aclk) begin : seq_count_l
	if (~aresetn) begin
		db_count 	<= 'b0;
		dff		<= 'b0;			
	end else begin
		db_count 	<= db_count_next;
		dff		<= {dff[0], osw_status};			
	end	
end


// glitch free output
always @ (posedge aclk) begin : out_l
	if (db_count[COUNT_WIDTH-1]) sw_stat_reg <= dff[1];
	else			     sw_stat_reg <= sw_stat_reg;	
end

endmodule
