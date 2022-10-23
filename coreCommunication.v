`timescale 1ns / 1ps

module coreCommunication(fastClk, medClk, pData, cHlt, portBus, dataBus, arag, cycle);
input wire medClk, fastClk;
inout wire [22:0] pData;
inout wire [1:0] arag;
output reg cHlt = 0;
inout wire portBus, dataBus;

input wire [15:0] cycle;

reg [7:0] dout = 0;

reg [7:0] myPort = 0;

reg [7:0] targetPort = 0;
reg [7:0] targetData = 0;

wire [7:0] rxPort;
wire [7:0] rxData;

reg portTxEn = 0;
reg dataTxEn = 0;

reg portRxEn = 0;
reg dataRxEn = 0;

wire portTxDone;
wire portRxDone;

wire dataTxDone;
wire dataRxDone;

reg ar = 0;

reg [1:0] mode = 0; // 0 stb // 1 sending // 2 receiveing //

assign pData[7:0] = mode==2 ? dout : 8'bz;
assign arag[1] = mode==2 ? ar : 0;


reg [1:0] rStep = 0;

always @(posedge medClk) begin
	case(mode)
		0 : begin
			if(pData[21:16] == 9 && pData[22] == 1) myPort <= pData[7:0]; // setting up my port
			if(pData[21:16] == 10 && pData[22] == 1) targetPort <= pData[7:0]; // setting up target port
			if(pData[21:16] == 11 && pData[22] == 1) begin targetData <= pData[7:0]; mode <= 1; end // setting up target data and start sending
			if(pData[21:16] == 9 && pData[22] == 0) begin mode <= 2; cHlt <= 1; end // starting receiveing
			end
		1 : begin
			if(!ar) ar <= 1;
			if(arag[0] && !(portTxDone && dataTxDone)) begin
				portTxEn <= 1;
				dataTxEn <= 1;
			end
			if(portTxDone && dataTxDone) begin
				portTxEn <= 0;
				dataTxEn <= 0;
				ar <= 0;
				mode <= 0;
			end
		end
		2 : begin
			case(rStep)
				0 : begin
					portRxEn <= 1;
					dataRxEn <= 1;
					rStep <= 1;
				end
				1 : begin
					portRxEn <= 0;
					dataRxEn <= 0;
					if(portRxDone && dataRxDone) begin
						if(rxPort == myPort) begin
							dout <= rxData;
							cHlt <= 0;
							rStep <= 2;
						end
						else rStep <= 0;
					end
				end
				2 : begin
					rStep <= 0;
					mode <= 0;
				end
			endcase
		end
	endcase
end	

fastSerialBus fSB_port(.clk(medClk), .RxTx(portBus), .tDP(targetPort), .tEN(portTxEn), .tDONE(portTxDone), .rDP(rxPort), .rEN(portRxEn), .rDONE(portRxDone), .cycle(cycle));
fastSerialBus fSB_data(.clk(medClk), .RxTx(dataBus), .tDP(targetData), .tEN(dataTxEn), .tDONE(dataTxDone), .rDP(rxData), .rEN(dataRxEn), .rDONE(dataRxDone), .cycle(cycle));

endmodule
