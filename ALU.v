`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:54:29 11/08/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [3:0] aluCtrl,
    input [31:0] inA,
    input [31:0] inB,
    output [31:0] out,
    output Zero
    );

	reg result;
	
	/*always @(aluCtrl, inA, inB)
		case (aluCtrl)
			4'b0000: result = inA & inB;
			4'b0001: result = inA | inB;
			4'b0010: result = inA + inB;
			4'b0110: result = inA - inB;
			4'b0111: result = inA < inB;
			4'b1100: result = ~(inA | inB);
			default: result = 0;
		endcase*/
	
	assign Zero = (out == 0);
	assign out = (aluCtrl == 4'b0000 ? (inA & inB) :
		(aluCtrl == 4'b0001 ? (inA | inB) :
		(aluCtrl == 4'b0010 ? (inA + inB) :
		(aluCtrl == 4'b0110 ? (inA - inB) :
		(aluCtrl == 4'b0111 ? (inA < inB) :
		(aluCtrl == 4'b1100 ? ~(inA | inB) : 0
		)
		)
		)
		)
		)
		);

endmodule
