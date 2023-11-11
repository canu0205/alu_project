module SixBitShifter(
    input direction,
    input [2:0] shamt,
    input [5:0] xVal,
    output reg [5:0] shiftedVal
);

    integer i;

    always @ (*) begin
			shiftedVal = xVal;
			
			if (direction) begin
				for (i = 0; i < shamt; i = i + 1) begin
					shiftedVal = {shiftedVal[4:0], shiftedVal[5]};
				end
			end
			else begin
				for (i=0; i<shamt; i = i + 1) begin
					shiftedVal = {shiftedVal[0], shiftedVal[5:1]};
				end
			end
    end

endmodule