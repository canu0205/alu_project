module DisplayController(
    input [9:0] operand,
    input sumSign,
    input [3:0] sumTerm1,
    input [3:0] sumTerm2,
    input [3:0] sumTerm3,
    input sign,
    input [3:0] term1,
    input [3:0] term2,
    input [3:0] term3,
    input [7:0] firstSetBit,
    input [5:0] shiftedVal,
    input [5:0] filteredVal,
    input [2:0] curent_operation,
    output reg [6:0] Seg1_output,
    output reg [6:0] Seg2_output,
    output reg [6:0] Seg3_output,
    output reg [6:0] Seg4_output,
    output reg [6:0] Seg5_output,
    output reg [6:0] Seg6_output
);

    always @ (*) begin
			Seg1_output = 7'b0000000;
			Seg2_output = 7'b0000000;
			Seg3_output = 7'b0000000;
			Seg4_output = 7'b0000000;
			Seg5_output = 7'b0000000;
			Seg6_output = 7'b0000000;
        if (curent_operation == 3'b000) begin
            Seg2_output = 7'b1111110;
            Seg5_output = 7'b1111110;
            case (operand[9])
                1'b0: Seg1_output = 7'b0000000;
                1'b1: Seg1_output = 7'b0000001;
                default: Seg1_output = 7'b0000000;
            endcase
            case (operand[8:5])
                4'd0: Seg3_output = 7'b1111110;
                4'd1: Seg3_output = 7'b0110000;
                4'd2: Seg3_output = 7'b1101101;
                4'd3: Seg3_output = 7'b1111001;
                4'd4: Seg3_output = 7'b0110011;
                4'd5: Seg3_output = 7'b1011011;
                4'd6: Seg3_output = 7'b1011111;
                4'd7: Seg3_output = 7'b1110000;
                4'd8: Seg3_output = 7'b1111111;
                4'd9: Seg3_output = 7'b1111011;
                4'd10: Seg3_output = 7'b1110111;
                4'd11: Seg3_output = 7'b0011111;
                4'd12: Seg3_output = 7'b1001110;
                4'd13: Seg3_output = 7'b0111101;
                4'd14: Seg3_output = 7'b1001111;
                4'd15: Seg3_output = 7'b1000111;
                default: Seg3_output = 7'b0000000;
            endcase
            case (operand[4])
                1'b0: Seg4_output = 7'b0000000;
                1'b1: Seg4_output = 7'b0000001;
                default: Seg4_output = 7'b0000000;
            endcase
            case (operand[3:0])
                4'd0: Seg6_output = 7'b1111110;
                4'd1: Seg6_output = 7'b0110000;
                4'd2: Seg6_output = 7'b1101101;
                4'd3: Seg6_output = 7'b1111001;
                4'd4: Seg6_output = 7'b0110011;
                4'd5: Seg6_output = 7'b1011011;
                4'd6: Seg6_output = 7'b1011111;
                4'd7: Seg6_output = 7'b1110000;
                4'd8: Seg6_output = 7'b1111111;
                4'd9: Seg6_output = 7'b1111011;
                4'd10: Seg6_output = 7'b1110111;
                4'd11: Seg6_output = 7'b0011111;
                4'd12: Seg6_output = 7'b1001110;
                4'd13: Seg6_output = 7'b0111101;
                4'd14: Seg6_output = 7'b1001111;
                4'd15: Seg6_output = 7'b1000111;
                default: Seg6_output = 7'b0000000;
            endcase

            if (Seg3_output == 7'b1111110) begin
                Seg1_output = 7'b0000000;
            end
            if (Seg6_output == 7'b1111110) begin
                Seg4_output = 7'b0000000;
            end
        end
        else if (curent_operation == 3'b001) begin
            case (operand[5])
					 1'b0: Seg1_output = 7'b1111110;
                1'b1: Seg1_output = 7'b0110000;
                default: Seg1_output = 7'b0000000;
            endcase
            case (operand[4])
                1'b0: Seg2_output = 7'b1111110;
                1'b1: Seg2_output = 7'b0110000;
                default: Seg2_output = 7'b0000000;
            endcase
            case (operand[3])
					 1'b0: Seg3_output = 7'b1111110;
                1'b1: Seg3_output = 7'b0110000;
                default: Seg3_output = 7'b0000000;
            endcase
            case (operand[2])
                1'b0: Seg4_output = 7'b1111110;
                1'b1: Seg4_output = 7'b0110000;
                default: Seg4_output = 7'b0000000;
            endcase
            case (operand[1])
                1'b0: Seg5_output = 7'b1111110;
                1'b1: Seg5_output = 7'b0110000;
                default: Seg5_output = 7'b0000000;
            endcase
            case (operand[0])
                1'b0: Seg6_output = 7'b1111110;
                1'b1: Seg6_output = 7'b0110000;
                default: Seg6_output = 7'b0000000;
            endcase
        end
        else if (curent_operation == 3'b010) begin
            Seg1_output = 7'b0000000;
            Seg2_output = 7'b0000000;
            if (sumSign == 1'b0) begin
                Seg3_output = 7'b0000000;
            end
            else begin
                Seg3_output = 7'b0000001;
            end
            case (sumTerm3)
                4'd0: Seg4_output = 7'b1111110;
                4'd1: Seg4_output = 7'b0110000;
                4'd2: Seg4_output = 7'b1101101;
                4'd3: Seg4_output = 7'b1111001;
                4'd4: Seg4_output = 7'b0110011;
                4'd5: Seg4_output = 7'b1011011;
                4'd6: Seg4_output = 7'b1011111;
                4'd7: Seg4_output = 7'b1110000;
                4'd8: Seg4_output = 7'b1111111;
                4'd9: Seg4_output = 7'b1111011;
                4'd10: Seg4_output = 7'b1110111;
                4'd11: Seg4_output = 7'b0011111;
                4'd12: Seg4_output = 7'b1001110;
                4'd13: Seg4_output = 7'b0111101;
                4'd14: Seg4_output = 7'b1001111;
                4'd15: Seg4_output = 7'b1000111;
                default: Seg4_output = 7'b0000000;
            endcase
            case (sumTerm2)
                4'd0: Seg5_output = 7'b1111110;
                4'd1: Seg5_output = 7'b0110000;
                4'd2: Seg5_output = 7'b1101101;
                4'd3: Seg5_output = 7'b1111001;
                4'd4: Seg5_output = 7'b0110011;
                4'd5: Seg5_output = 7'b1011011;
                4'd6: Seg5_output = 7'b1011111;
                4'd7: Seg5_output = 7'b1110000;
                4'd8: Seg5_output = 7'b1111111;
                4'd9: Seg5_output = 7'b1111011;
                4'd10: Seg5_output = 7'b1110111;
                4'd11: Seg5_output = 7'b0011111;
                4'd12: Seg5_output = 7'b1001110;
                4'd13: Seg5_output = 7'b0111101;
                4'd14: Seg5_output = 7'b1001111;
                4'd15: Seg5_output = 7'b1000111;
                default: Seg5_output = 7'b0000000;
            endcase
            case (sumTerm1)
                4'd0: Seg6_output = 7'b1111110;
                4'd1: Seg6_output = 7'b0110000;
                4'd2: Seg6_output = 7'b1101101;
                4'd3: Seg6_output = 7'b1111001;
                4'd4: Seg6_output = 7'b0110011;
                4'd5: Seg6_output = 7'b1011011;
                4'd6: Seg6_output = 7'b1011111;
                4'd7: Seg6_output = 7'b1110000;
                4'd8: Seg6_output = 7'b1111111;
                4'd9: Seg6_output = 7'b1111011;
                4'd10: Seg6_output = 7'b1110111;
                4'd11: Seg6_output = 7'b0011111;
                4'd12: Seg6_output = 7'b1001110;
                4'd13: Seg6_output = 7'b0111101;
                4'd14: Seg6_output = 7'b1001111;
                4'd15: Seg6_output = 7'b1000111;
                default: Seg6_output = 7'b0000000;
            endcase
        end
        else if (curent_operation == 3'b011) begin
            Seg1_output = 7'b0000000;
            Seg2_output = 7'b0000000;
            if (sign == 1'b0) begin
                Seg3_output = 7'b0000000;
            end
            else begin
                Seg3_output = 7'b0000001;
            end
            case (term3)
                4'd0: Seg4_output = 7'b1111110;
                4'd1: Seg4_output = 7'b0110000;
                4'd2: Seg4_output = 7'b1101101;
                4'd3: Seg4_output = 7'b1111001;
                4'd4: Seg4_output = 7'b0110011;
                4'd5: Seg4_output = 7'b1011011;
                4'd6: Seg4_output = 7'b1011111;
                4'd7: Seg4_output = 7'b1110000;
                4'd8: Seg4_output = 7'b1111111;
                4'd9: Seg4_output = 7'b1111011;
                4'd10: Seg4_output = 7'b1110111;
                4'd11: Seg4_output = 7'b0011111;
                4'd12: Seg4_output = 7'b1001110;
                4'd13: Seg4_output = 7'b0111101;
                4'd14: Seg4_output = 7'b1001111;
                4'd15: Seg4_output = 7'b1000111;
                default: Seg4_output = 7'b0000000;
            endcase
            case (term2)
                4'd0: Seg5_output = 7'b1111110;
                4'd1: Seg5_output = 7'b0110000;
                4'd2: Seg5_output = 7'b1101101;
                4'd3: Seg5_output = 7'b1111001;
                4'd4: Seg5_output = 7'b0110011;
                4'd5: Seg5_output = 7'b1011011;
                4'd6: Seg5_output = 7'b1011111;
                4'd7: Seg5_output = 7'b1110000;
                4'd8: Seg5_output = 7'b1111111;
                4'd9: Seg5_output = 7'b1111011;
                4'd10: Seg5_output = 7'b1110111;
                4'd11: Seg5_output = 7'b0011111;
                4'd12: Seg5_output = 7'b1001110;
                4'd13: Seg5_output = 7'b0111101;
                4'd14: Seg5_output = 7'b1001111;
                4'd15: Seg5_output = 7'b1000111;
                default: Seg5_output = 7'b0000000;
            endcase
            case (term1)
                4'd0: Seg6_output = 7'b1111110;
                4'd1: Seg6_output = 7'b0110000;
                4'd2: Seg6_output = 7'b1101101;
                4'd3: Seg6_output = 7'b1111001;
                4'd4: Seg6_output = 7'b0110011;
                4'd5: Seg6_output = 7'b1011011;
                4'd6: Seg6_output = 7'b1011111;
                4'd7: Seg6_output = 7'b1110000;
                4'd8: Seg6_output = 7'b1111111;
                4'd9: Seg6_output = 7'b1111011;
                4'd10: Seg6_output = 7'b1110111;
                4'd11: Seg6_output = 7'b0011111;
                4'd12: Seg6_output = 7'b1001110;
                4'd13: Seg6_output = 7'b0111101;
                4'd14: Seg6_output = 7'b1001111;
                4'd15: Seg6_output = 7'b1000111;
                default: Seg6_output = 7'b0000000;
            endcase
        end
        else if (curent_operation == 3'b100) begin
            Seg1_output = 7'b0000000;
            Seg2_output = 7'b0000000;
            Seg4_output = 7'b0000000;
            Seg5_output = 7'b0000000;
            case (firstSetBit[7:4])
                4'd0: Seg3_output = 7'b1111110;
                4'd1: Seg3_output = 7'b0110000;
                4'd2: Seg3_output = 7'b1101101;
                4'd3: Seg3_output = 7'b1111001;
                4'd4: Seg3_output = 7'b0110011;
                4'd5: Seg3_output = 7'b1011011;
                4'd6: Seg3_output = 7'b1011111;
                4'd7: Seg3_output = 7'b1110000;
                4'd8: Seg3_output = 7'b1111111;
                4'd9: Seg3_output = 7'b1111011;
                4'd10: Seg3_output = 7'b1110111;
                4'd11: Seg3_output = 7'b0011111;
                4'd12: Seg3_output = 7'b1001110;
                4'd13: Seg3_output = 7'b0111101;
                4'd14: Seg3_output = 7'b1001111;
                4'd15: Seg3_output = 7'b1000111;
                default: Seg3_output = 7'b0000000;
            endcase
            case (firstSetBit[3:0])
                4'd0: Seg6_output = 7'b1111110;
                4'd1: Seg6_output = 7'b0110000;
                4'd2: Seg6_output = 7'b1101101;
                4'd3: Seg6_output = 7'b1111001;
                4'd4: Seg6_output = 7'b0110011;
                4'd5: Seg6_output = 7'b1011011;
                4'd6: Seg6_output = 7'b1011111;
                4'd7: Seg6_output = 7'b1110000;
                4'd8: Seg6_output = 7'b1111111;
                4'd9: Seg6_output = 7'b1111011;
                4'd10: Seg6_output = 7'b1110111;
                4'd11: Seg6_output = 7'b0011111;
                4'd12: Seg6_output = 7'b1001110;
                4'd13: Seg6_output = 7'b0111101;
                4'd14: Seg6_output = 7'b1001111;
                4'd15: Seg6_output = 7'b1000111;
                default: Seg6_output = 7'b0000000;
            endcase
        end
        else if (curent_operation == 3'b101) begin
            case (shiftedVal[5])
                1'b0: Seg1_output = 7'b1111110;
                1'b1: Seg1_output = 7'b0110000;
                default: Seg1_output = 7'b0000000;
            endcase
            case (shiftedVal[4])
                1'b0: Seg2_output = 7'b1111110;
                1'b1: Seg2_output = 7'b0110000;
                default: Seg2_output = 7'b0000000;
            endcase
            case (shiftedVal[3])
                1'b0: Seg3_output = 7'b1111110;
                1'b1: Seg3_output = 7'b0110000;
                default: Seg3_output = 7'b0000000;
            endcase
            case (shiftedVal[2])
                1'b0: Seg4_output = 7'b1111110;
                1'b1: Seg4_output = 7'b0110000;
                default: Seg4_output = 7'b0000000;
            endcase
            case (shiftedVal[1])
                1'b0: Seg5_output = 7'b1111110;
                1'b1: Seg5_output = 7'b0110000;
                default: Seg5_output = 7'b0000000;
            endcase
            case (shiftedVal[0])
                1'b0: Seg6_output = 7'b1111110;
                1'b1: Seg6_output = 7'b0110000;
                default: Seg6_output = 7'b0000000;
            endcase
        end
        else if (curent_operation == 3'b110) begin
            Seg1_output = 7'b0000000;
            case (filteredVal[4])
                1'b0: Seg2_output = 7'b1111110;
                1'b1: Seg2_output = 7'b0110000;
                default: Seg2_output = 7'b0000000;
            endcase
            case (filteredVal[3])
                1'b0: Seg3_output = 7'b1111110;
                1'b1: Seg3_output = 7'b0110000;
                default: Seg3_output = 7'b0000000;
            endcase
            case (filteredVal[2])
                1'b0: Seg4_output = 7'b1111110;
                1'b1: Seg4_output = 7'b0110000;
                default: Seg4_output = 7'b0000000;
            endcase
            case (filteredVal[1])
                1'b0: Seg5_output = 7'b1111110;
                1'b1: Seg5_output = 7'b0110000;
                default: Seg5_output = 7'b0000000;
            endcase
            case (filteredVal[0])
                1'b0: Seg6_output = 7'b1111110;
                1'b1: Seg6_output = 7'b0110000;
                default: Seg6_output = 7'b0000000;
            endcase
        end
    end

endmodule