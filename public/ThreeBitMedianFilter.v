module ThreeBitMedianFilter(
    input [5:0] operandX,
    output reg [5:0] filteredVal
);

    always @ (*) begin
        filteredVal[4] = operandX[4] & operandX[3];
        filteredVal[3] = operandX[4] & operandX[3] | operandX[4] & operandX[2] | operandX[3] & operandX[2] | operandX[4] & operandX[3] & operandX[2];
        filteredVal[2] = operandX[3] & operandX[2] | operandX[3] & operandX[1] | operandX[2] & operandX[1] | operandX[3] & operandX[2] & operandX[1];
        filteredVal[1] = operandX[2] & operandX[1] | operandX[2] & operandX[0] | operandX[1] & operandX[0] | operandX[2] & operandX[1] & operandX[0];
        filteredVal[0] = operandX[1] & operandX[0];
    end

endmodule