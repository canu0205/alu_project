module OpcodeSelector(
    input [5:0] opcode,
    output reg [2:0] operation
);

    always @ (*) begin
        if (opcode == 6'b000000) operation = 3'b000;
        else if (opcode == 6'b100000) operation = 3'b001;
        else if (opcode == 6'b010000) operation = 3'b010;
        else if (opcode == 6'b001000) operation = 3'b011;
        else if (opcode == 6'b000100) operation = 3'b100;
        else if (opcode == 6'b000010) operation = 3'b101;
        else if (opcode == 6'b000001) operation = 3'b110;
        else operation = 3'b111;
    end

endmodule