`timescale 1ns / 1ps

module aluPer(fastClk, pData);
input fastClk;
inout [22:0] pData;

reg [7:0] A = 0;
reg [7:0] B = 0;


assign pData[15:8] = (pData[21:16]==20&&pData[22]==0) ? A + B : (pData[21:16]==21&&pData[22]==0) ? A - B : (pData[21:16]==22&&pData[22]==0) ? A * B : (pData[21:16]==23&&pData[22]==0) ? A | B : (pData[21:16]==24&&pData[22]==0) ? A && B : (pData[21:16]==25&&pData[22]==0) ? ~A : (pData[21:16]==26&&pData[22]==0) ? A << 1 : (pData[21:16]==27&&pData[22]==0) ? A >> 1 : (pData[21:16]==28&&pData[22]==0) ? ((A<B) ? 8'b11000000 : 0) : (pData[21:16]==29&&pData[22]==0) ? ((A-B == 0) ? 8'b11000000 : 0) : 8'bz;

always @(negedge fastClk) begin
	if(pData[21:16] == 20) if(pData[22]==1) begin
		A <= pData[7:0];
	end
	if(pData[21:16] == 21) if(pData[22]==1) begin
		B <= pData[7:0];
	end
end


endmodule
