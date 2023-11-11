module FirstSetBit(
    input [7:0] operand,
    output reg [7:0] position
);

    integer i;
    
    always @ (*) begin
        for (i = 0; i < 8; i = i + 1) begin
            if (operand[i] == 1'b1) begin
                position[3:0] = i;
                i = 8;
            end
            else begin
                position[3:0] = 4'b0000;
            end
        end

        for (i = 7; i >= 0; i = i - 1) begin
            if (operand[i] == 1'b1) begin
                position[7:4] = i;
                i = -1;
            end
            else begin
                position[7:4] = 4'b0000;
            end
        end
    end

endmodule