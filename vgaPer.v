`timescale 1ns / 1ps

module vgaPer(fastClk, medClk, pData, vgaData);

output [9:0] vgaData;
input fastClk, medClk;

inout [22:0] pData;

wire [7:0] pDout;

assign pData[15:8] = (pData[21:16]>=13 && pData[21:16]<=19) ? pDout : 8'bz;

vgaDriver vga(.clk(fastClk), .medClk(medClk), .color(vgaData[7:0]), .vSync(vgaData[8]), .hSync(vgaData[9]), .pAddr(pData[21:16]), .pDin(pData[7:0]),. pDout(pDout), .we(pData[22]));

endmodule
