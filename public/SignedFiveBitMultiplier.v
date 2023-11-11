module SignedFiveBitMultiplier(
    input [4:0] operandX,
    input [4:0] operandY,
    output reg sign,
    output reg [3:0] term1,
    output reg [3:0] term2,
    output reg [3:0] term3
);

    wire [9:0] product;

    assign product = operandX[3:0] * operandY[3:0];

    always @ (*) begin
        sign = operandX[4] ^ operandY[4];
        term1 = product[3:0];
        term2 = product[7:4];
        term3 = product[9:8];
    end

endmodule