`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:24:06 04/08/2020
// Design Name:   main
// Module Name:   D:/ISE/projects/sdCardTest/mainT.v
// Project Name:  sdCardTest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mainT;

	// Inputs
	reg clk;

	// Outputs
	wire [7:0] seg;
	wire [2:0] en;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.seg(seg), 
		.en(en)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always begin
		clk <= 1;
		#1;
		clk <= 0;
		#1;
	end
endmodule

