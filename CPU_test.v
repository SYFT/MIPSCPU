`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:00:48 11/10/2016 
// Design Name: 
// Module Name:    CPU_test 
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
module CPU_test(
	);
	
	reg reset, GOE;
	reg [31:0] PCData;
	
	initial begin
		reset = 1;
		PCData = 0;
		GOE = 1;
		
		# 200;
		
		reset = 0;
	end
	
	
	/*wire [31:0] memWriteData, regReadA, regReadB, extendedNum, aluResult,
		instruction, tMemReadData, tRegWriteData, tAluSrcData, tAfterBranchPC,
		nextPC, branchPC, branchPCBase, jumpPCBase, finalPC;
	wire [3:0] aluOp;
	wire [1:0] aluCtrlOp;
	wire memWrite, memToReg, memRead, extSel, regWrite, regDst, aluSrc, Zero, jump, branch, branchSuccess;*/
	CPU cpu(
		.reset(reset),
		.GOE(GOE),
		.PCData(PCData)
	);

endmodule
