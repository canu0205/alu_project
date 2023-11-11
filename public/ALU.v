module ALU(
    input [9:0] operand,
    input [5:0] opcode,
    output [6:0] d1,
    output [6:0] d2,
    output [6:0] d3,
    output [6:0] d4,
    output [6:0] d5,
    output [6:0] d6
);

    wire sumSign;
	 wire [3:0] sumTerm1;
	 wire [3:0] sumTerm2;
	 wire [3:0] sumTerm3;
    wire sign;
    wire [3:0] term1;
    wire [3:0] term2;
    wire [3:0] term3;
	 wire [7:0] position;
    wire [5:0] shiftedVal;
    wire [5:0] filteredVal;
    wire [2:0] operation;

    OpcodeSelector opcodeSelector(
        .opcode(opcode),
        .operation(operation)
    );
    SignedFiveBitAdder signedFiveBitAdder(
        .operandX(operand[9:5]),
        .operandY(operand[4:0]),
        .sumSign(sumSign),
		  .sumTerm1(sumTerm1),
        .sumTerm2(sumTerm2),
        .sumTerm3(sumTerm3)
    );
    SignedFiveBitMultiplier signedFiveBitMultiplier(
        .operandX(operand[9:5]),
        .operandY(operand[4:0]),
        .sign(sign),
        .term1(term1),
        .term2(term2),
        .term3(term3)
    );
	 FirstSetBit firstSetBit(
		.operand(operand[7:0]),
		.position(position)
	 );
    SixBitShifter sixBitShifter(
        .direction(operand[9]),
        .shamt(operand[2:0]),
        .xVal(operand[8:3]),
        .shiftedVal(shiftedVal)
    );
    ThreeBitMedianFilter threeBitMedianFilter(
        .operandX(operand[5:0]),
        .filteredVal(filteredVal)
    );
    DisplayController displayController(
        .operand(operand),
		  .sumSign(sumSign),
		  .sumTerm1(sumTerm1),
		  .sumTerm2(sumTerm2),
		  .sumTerm3(sumTerm3),
        .sign(sign),
        .term1(term1),
        .term2(term2),
        .term3(term3),
		  .firstSetBit(position),
        .shiftedVal(shiftedVal),
        .filteredVal(filteredVal),
        .curent_operation(operation),
        .Seg1_output(d1),
        .Seg2_output(d2),
        .Seg3_output(d3),
        .Seg4_output(d4),
        .Seg5_output(d5),
        .Seg6_output(d6)
    );


endmodule