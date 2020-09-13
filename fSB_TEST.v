`timescale 1ns / 1ps


module fSB_TEST;

	// Inputs
	reg clk;
	reg [7:0] tDP;
	reg tEN;
	reg rEN;
	reg [15:0] cycle;

	// Outputs
	wire [7:0] rDP;

	// Bidirs
	wire RxTx;

	// Instantiate the Unit Under Test (UUT)
	fastSerialBus uut_0 (
		.clk(clk), 
		.RxTx(RxTx), 
		.tDP(tDP), 
		.tEN(tEN), 
		.rDP(rDP), 
		.rEN(rEN), 
		.cycle(cycle)
	);
	
	// Inputs
	reg [7:0] tDP1;
	reg tEN1;
	reg rEN1;
	reg [15:0] cycle1;

	// Outputs
	wire [7:0] rDP1;

	// Instantiate the Unit Under Test (UUT)
	fastSerialBus uut_1 (
		.clk(clk), 
		.RxTx(RxTx), 
		.tDP(tDP1), 
		.tEN(tEN1), 
		.rDP(rDP1), 
		.rEN(rEN1), 
		.cycle(cycle1)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		tDP = 0;
		tEN = 0;
		rEN = 0;
		cycle = 16;
		tDP1 = 0;
		tEN1 = 0;
		rEN1 = 0;
		cycle1 = 16;


		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		tDP <= 8'b10011001;
		rEN1 <= 1;
		#2;
		tEN <= 1;
		#2;
		tEN <= 0;
		rEN1 <= 0;
		#2;
		
		#700;
		
		tDP1 <= 8'b01100110;
		rEN <= 1;
		#2;
		#2;
		rEN <= 0;
		#4;
		tEN1 <= 1;
		#2;
		tEN1 <= 0;
		

	end
      
	always begin
		#1;
		clk <= 1;
		#1;
		clk <= 0;
	end
endmodule

