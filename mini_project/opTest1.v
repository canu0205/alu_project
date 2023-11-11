`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:34:30 11/11/2023
// Design Name:   ALU
// Module Name:   /home/ubuntu/dev/mini_project/opTest1.v
// Project Name:  mini_project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module opTest1;

	// Inputs
	reg [9:0] operand;
	reg [5:0] opcode;

	// Outputs
	wire [6:0] d1;
	wire [6:0] d2;
	wire [6:0] d3;
	wire [6:0] d4;
	wire [6:0] d5;
	wire [6:0] d6;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.operand(operand), 
		.opcode(opcode), 
		.d1(d1), 
		.d2(d2), 
		.d3(d3), 
		.d4(d4), 
		.d5(d5), 
		.d6(d6)
	);

	initial begin
		operand = 0;
		opcode = 0;
		#20;
		operand = 10'b10111_10000;
		opcode = 6'b000000;
		#20;
		operand = 10'b00000_10111;
		opcode = 6'b100000;
		#20;
		operand = 10'b01011_10011;
		opcode = 6'b010000;
		#20;
		operand = 10'b01011_10011;
		opcode = 6'b001000;
		#20;
		operand = 10'b00001_10110;
		opcode = 6'b000100;
		#20;
		operand = 10'b01101_01010;
		opcode = 6'b000010;
		#20;
		operand = 10'b00000_10100;
		opcode = 6'b000001;
		#20;

	end
      
endmodule

