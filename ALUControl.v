`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:23:46 11/08/2016 
// Design Name: 
// Module Name:    ALUControl 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALUControl(
    input [1:0] aluOp,
    input [5:0] funcCode,
    output reg [3:0] aluCtrl
    );

	always @(aluOp, funcCode)
		case (aluOp)
			2'b00: aluCtrl[3:0] <= 4'b0010; // lw, sw add
			2'b01: aluCtrl[3:0] <= 4'b0110; // beq sub
			2'b10: begin // R-format
				case (funcCode)
					6'b100000: aluCtrl[3:0] <= 4'b0010; // add
					6'b100010: aluCtrl[3:0] <= 4'b0110; // sub
					6'b100100: aluCtrl[3:0] <= 4'b0000; // and
					6'b100101: aluCtrl[3:0] <= 4'b0001; // or
					6'b101010: aluCtrl[3:0] <= 4'b0111; // slt
					default: aluCtrl[3:0] <= 0;
				endcase
			end
			default: begin // I-format
				case (funcCode)
					6'b001000: aluCtrl[3:0] <= 4'b0010; // addi
					6'b001101: aluCtrl[3:0] <= 4'b0001; // ori
					6'b001100: aluCtrl[3:0] <= 4'b0000; // andi
				endcase
			end
		endcase


endmodule
