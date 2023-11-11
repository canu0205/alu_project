module SignedFiveBitAdder(
    input [4:0] operandX,
    input [4:0] operandY,
    output reg sumSign,
    output reg [3:0] sumTerm1,
    output reg [3:0] sumTerm2,
    output reg [3:0] sumTerm3
);

    reg [5:0] sum;

    always @ (*) begin
        if (operandX[4] == operandY[4]) begin
            sumSign = operandX[4];
            sum = operandX[3:0] + operandY[3:0];
            sumTerm1 = sum[3:0];
            sumTerm2 = sum[5:4];
            sumTerm3 = 4'b0000;
        end
        else begin
            if (operandX[3:0] > operandY[3:0]) begin
                sumSign = operandX[4];
                sum = operandX[3:0] - operandY[3:0];
                sumTerm1 = sum[3:0];
                sumTerm2 = sum[5:4];
                sumTerm3 = 4'b0000;
            end
            else begin
                sumSign = operandY[4];
                sum = operandY[3:0] - operandX[3:0];
                sumTerm1 = sum[3:0];
                sumTerm2 = sum[5:4];
                sumTerm3 = 4'b0000;
            end
        end
    end

endmodule