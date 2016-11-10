`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:30:50 11/09/2016 
// Design Name: 
// Module Name:    CPU 
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
module CPU(
	input reset, 
	input GOE, 
	input [31:0] PCData
    );
	
	parameter INSTRUCTIONSTEP = 4;
	
	reg clk;
	wire [31:0] PC;
	wire PCWre;
	
	initial begin
		clk = 0;
	end
	
	always #500
		clk = ~clk;
	
	
	wire [31:0] instruction;
	wire [15:0] immediate;
	wire [31:0] address;
	wire memWrite, memToReg, memRead, extSel, regWrite, regDst, aluSrc, Zero, jump, branch;
	wire [3:0] aluOp;
	wire [1:0] aluCtrlOp;
	wire [31:0] memWriteData, regReadA, regReadB, extendedNum, aluResult;
	wire [31:0] nextPC, jumpPC, branchPC, branchPCBase, jumpPCBase, finalPC;
	wire branchSuccess;
	wire [31:0] tMemReadData, tRegWriteData, tAluSrcData, tPC, tAfterBranchPC;
	wire [4:0] rs, rt, rd, tRegDst;
	wire [5:0] opCode, funcCode;
	
	InstructionMemory im(PC, instruction);
	assign 	opCode = instruction[31:26],
			rs = instruction[25:21],
			rt = instruction[20:16],
			rd = instruction[15:11],
			immediate = instruction[15:0],
			address = {{6{1'b0}}, {instruction[25:0]}},
			funcCode = instruction[5:0];
	
	// Read, write and calculation modules.
	ControlUnit control(
		opCode, Zero, aluCtrlOp, regDst, jump, branch, 
		memRead, memWrite, memToReg, aluSrc, regWrite, extSel, PCWre
		);
	Mux5 regSrcSel(regDst, rt, rd, tRegDst);
	Register register(rs, rt, tRegDst, tRegWriteData, regWrite, regReadA, regReadB, clk);
	Extend extend(immediate, extSel, extendedNum);
	Mux32 aluSrcSel(aluSrc, regReadB, extendedNum, tAluSrcData);
	wire [5:0] realFuncCode = aluCtrlOp == 2'b11 ? opCode : funcCode;
	ALUControl aluControl(.aluOp(aluCtrlOp), .funcCode(realFuncCode), .aluCtrl(aluOp));
	// wire [31:0] wregReadA, wtAluSrcData, wAluResult, wZero;
	ALU cmpAndAdrCal(aluOp, regReadA, tAluSrcData, aluResult, Zero);
	DataMemory dm(aluResult, regReadB, memRead, memWrite, clk, tMemReadData);
	Mux32 memToRegSel(memToReg, tMemReadData, aluResult, tRegWriteData);
	
	// Calculate next PC
	Add calNextPC(PC, INSTRUCTIONSTEP, nextPC);
	ShiftLeft2 calBrankPCBase(extendedNum, branchPCBase);
	ShiftLeft2 caljumpPCBase(address, jumpPCBase);
	assign jumpPC = {nextPC[31:28], jumpPCBase[27:0]};
	Add calBranchPC(nextPC, branchPCBase, branchPC);
	And ander(branch, Zero, branchSuccess);
	Mux32 isBranch(branchSuccess, nextPC, branchPC, tAfterBranchPC);
	Mux32 isJump(jump, tAfterBranchPC, jumpPC, finalPC);
	ProgramCounter programCounter(reset, PCWre, GOE, PCData, finalPC, PC, clk);
	
endmodule
