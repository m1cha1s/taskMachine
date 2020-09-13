`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:43:58 08/22/2020
// Design Name:   coreController
// Module Name:   D:/ISE/projects/sdCardTest/test_000.v
// Project Name:  sdCardTest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: coreController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_000;

	// Inputs
	reg cin;

	// Outputs
	wire [9:0] vgaData;
	wire [7:0] seg;
	wire [2:0] en;

	// Instantiate the Unit Under Test (UUT)
	coreController uut (
		.cin(cin), 
		.vgaData(vgaData), 
		.seg(seg), 
		.en(en)
	);

	initial begin
		// Initialize Inputs
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
	always begin
		#1;
		cin <= ~cin;
		#1;
		cin <= ~cin;
	end
	
endmodule

