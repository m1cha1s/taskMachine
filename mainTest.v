`timescale 1ns / 1ps


module mainTest;

	// Inputs
	reg clk;

	// Outputs
	wire [2:0] en;
	wire [7:0] seg;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.en(en), 
		.seg(seg)
	);
	always #5 clk = !clk;
	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#1000000;
        
		// Add stimulus here
		
	end
      
endmodule

