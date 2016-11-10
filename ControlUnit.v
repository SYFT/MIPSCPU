`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:50 11/09/2016 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
    input [5:0] op,
    input zero,
    output reg [1:0] aluOp,
    output reg regDst,
    output reg jump,
    output reg branch,
    output reg memRead,
	output reg memWrite,
    output reg memToReg,
    output reg aluSrc,
    output reg regWrite,
	output reg extSel,
	output reg PCWre
    );
	
	/*reg [1:0] aluOp, regDst, jump, branch, memRead, memWrite, memToReg, aluSrc, regWrite, extSel, PCWre;
	assign 	waluOp = aluOp,
			wregDst = regDst,
			wbranch = branch,
			wmemRead = memRead,
			wmemWrite = memWrite,*/
			
	
	always @(*) begin
		// R-format
		aluOp[1:0] = 2'b10;
		aluSrc = 1'b0;
		branch = 1'b0;
		memRead = 1'b0;
		memWrite = 1'b0;
		memToReg = 1'b1;
		regDst = 1'b1;
		regWrite = 1'b1;
		extSel = 1'b0;
		jump = 1'b0;
		PCWre = 1'b1;
		
		case (op)
			6'b100011: begin // lw
				aluOp[1] = 1'b0;
				aluSrc = 1'b1;
				memToReg = 1'b0;
				memRead = 1'b1;
				regDst = 1'b0;
			end
			
			6'b101011: begin // sw
				aluOp[1] = 1'b0;
				aluSrc = 1'b1;
				memWrite = 1'b1;
				regWrite = 1'b0;
			end
			
			6'b000100: begin // beq
				aluOp[1:0] = 2'b01;
				branch = 1'b1;
				regWrite = 1'b0;
			end
			
			6'b001101: begin // ori
				aluOp[0] = 1'b1;
				aluSrc = 1'b1;
				extSel = 1'b1;
				regDst = 1'b0;
			end
			
			6'b001100: begin // andi
				aluOp[0] = 1'b1;
				aluSrc = 1'b1;
				extSel = 1'b1;
				regDst = 1'b0;
			end
			
			6'b001000: begin // addi
				aluOp[0] = 1'b1;
				aluSrc = 1'b1;
				regDst = 1'b0;
			end
			
			6'b000010: begin // jump
				jump = 1'b1;
				memToReg = 1'b0;
				memWrite = 1'b0;
				memRead = 1'b0;
				regWrite <= 1'b1;
			end
			
			6'b111111: begin // halt
				PCWre = 1'b0;
				regWrite = 1'b0;
			end
			
			6'b100000: begin
			end
		endcase
	end

endmodule
