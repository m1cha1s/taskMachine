`timescale 1ns / 1ps

module coreSet_001(fastClk, slowClk, rData, portBus, dataBus, arag, cycle);
input fastClk, slowClk;
wire [22:0] pData;
wire [17:0] cData;
inout wire [25:0] rData;

inout wire portBus, dataBus;
inout arag;
input wire [15:0] cycle;

reg medClk = 0;
reg cntr = 0;

always @(posedge fastClk) cntr <= cntr + 1;
always @(posedge cntr) medClk <= ~medClk;

ccPer controller(.fastClk(medClk), .pData(pData), .cData(cData), .rData(rData));
core core(.fastClk(fastClk), .medClk(medClk), .pData(pData), .cData(cData));
coreCommunication cCom(.fastClk(fastClk), .medClk(medClk), .pData(pData), .cHlt(cData[15]), .portBus(portBus), .dataBus(dataBus), .arag(arag), .cycle());
endmodule
