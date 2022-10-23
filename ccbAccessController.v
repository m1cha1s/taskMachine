`timescale 1ns / 1ps

module ccbAccessController(fastClk, arag_1, arag_2);
input wire fastClk;
inout wire [1:0] arag_1;
inout wire [1:0] arag_2;

reg [1:0] fifo [3:0];
reg [1:0] rPointer = 0;
reg [1:0] wPointer = 0;

reg ag_1 = 0;
reg ag_2 = 0;

reg busy = 0;

always @(posedge arag_1[1])  begin
	fifo[wPointer] <= 1;
	wPointer <= wPointer + 1;
end
always @(posedge arag_2[1]) begin
	fifo[wPointer] <= 2;
	wPointer <= wPointer + 1;
end

reg [1:0] curr = 0;

always @(posedge fastClk) begin
	if(!busy) begin
		curr <= fifo[rPointer];
		rPointer <= rPointer + 1;
		busy <= 1;
	end
	if(busy) begin
		if(curr == 1) begin
			ag_1 <= 1;
		end
		else ag_1 <= 0;
		if(curr == 2) begin
			ag_2 <= 1;
		end
		else ag_2 <= 0;
		if(!arag_1[1]||!arag_2[1]) busy <= 0;
	end
end

endmodule
