/*
 Filter bank toplevel module
 
jca@fe.up.pt, Nov 2022

	This Verilog code is property of University of Porto
	Its utilization beyond the scope of the course Digital Systems Design
	(Projeto de Sistemas Digitais) of the Master in Electrical 
	and Computer Engineering requires explicit authorization from the author.
 
*/
`timescale 1ns/1ps

module profir(
	input 			clock,		// Master 250 MHz clock, active in the rising edge
	input 			reset,		// Master reset, synchronous, active high
	input signed  [15:0] 	datain,		// Input signal sample
	input			din_enable,	// When 1, a new sample is present at datain input (lasts 1 clock)
	output         [5:0] 	coeffaddress,	// Address to read all the coefficient memories
	input signed  [35:0]	coeff0,		// Coefficient read data for filter 0
	input signed  [35:0]	coeff1,		// Coefficient read data for filter 1
	input signed  [35:0]	coeff2,		// Coefficient read data for filter 2
	input signed  [35:0]	coeff3,		// Coefficient read data for filter 3
	input signed  [35:0]	coeff4,		// Coefficient read data for filter 4
	input signed  [35:0]	coeff5,		// Coefficient read data for filter 5
	input signed  [35:0]	coeff6,		// Coefficient read data for filter 6
	input signed  [35:0]	coeff7,		// Coefficient read data for filter 7
	output signed [15:0]  dataout0,	// Output data of filter 0
	output signed [15:0]  dataout1,	// Output data of filter 1
	output signed [15:0]  dataout2,	// Output data of filter 2
	output signed [15:0]  dataout3,	// Output data of filter 3
	output signed [15:0]  dataout4,	// Output data of filter 4
	output signed [15:0]  dataout5,	// Output data of filter 5
	output signed [15:0]  dataout6,	// Output data of filter 6
	output signed [15:0]  dataout7	// Output data of filter 7
);

//Registers
reg [5:0] countaddress = 0;

reg [6:0] counter = 0;

reg [1:0] STATE;
reg [1:0] NEXTSTATE;

reg signed [15:0] data [0:127];

reg signed [17:0] Hcoeff0_0;
reg signed [17:0] Hcoeff0_1;

reg signed [17:0] Hcoeff1_0;
reg signed [17:0] Hcoeff1_1;

reg signed [17:0] Hcoeff2_0;
reg signed [17:0] Hcoeff2_1;

reg signed [17:0] Hcoeff3_0;
reg signed [17:0] Hcoeff3_1;

reg signed [17:0] Hcoeff4_0;
reg signed [17:0] Hcoeff4_1;

reg signed [17:0] Hcoeff5_0;
reg signed [17:0] Hcoeff5_1;

reg signed [17:0] Hcoeff6_0;
reg signed [17:0] Hcoeff6_1;

reg signed [17:0] Hcoeff7_0;
reg signed [17:0] Hcoeff7_1;

reg signed [41:0] accum0;
reg signed [41:0] accum1;
reg signed [41:0] accum2;
reg signed [41:0] accum3;
reg signed [41:0] accum4;
reg signed [41:0] accum5;
reg signed [41:0] accum6;
reg signed [41:0] accum7;

integer i;

always @(posedge clock)
begin
	if(reset)
	begin
		for (i = 0 ; i < 128 ; i = i + 1)
			data[i] <= 0;

		Hcoeff0_0 <= 0;
		Hcoeff0_1 <= 0;

		Hcoeff1_0 <= 0;
		Hcoeff1_1 <= 0;

		Hcoeff2_0 <= 0;
		Hcoeff2_1 <= 0;

		Hcoeff3_0 <= 0;
		Hcoeff3_1 <= 0;

		Hcoeff4_0 <= 0;
		Hcoeff4_1 <= 0;

		Hcoeff5_0 <= 0;
		Hcoeff5_1 <= 0;

		Hcoeff6_0 <= 0;
		Hcoeff6_1 <= 0;

		Hcoeff7_0 <= 0;
		Hcoeff7_1 <= 0;

		accum0 <= 0;
		accum1 <= 0;
		accum2 <= 0;
		accum3 <= 0;
		accum4 <= 0;
		accum5 <= 0;
		accum6 <= 0;
		accum7 <= 0;

		countaddress <= 0;

		counter <= 0;	

		STATE <= 0;
		NEXTSTATE <= 0;

	end

	else
	begin
		
		if(din_enable)
		begin
			for (i = 127 ; i > 0 ; i = i-1)
				data[i] <= data[i-1];
			
			data[0] <= datain;

			countaddress <= 0;
			counter <= 0;

			accum0 <= 0;
			accum1 <= 0;
			accum2 <= 0;
			accum3 <= 0;
			accum4 <= 0;
			accum5 <= 0;
			accum6 <= 0;
			accum7 <= 0;

			STATE <= 0;
			NEXTSTATE <= 0;
		end

		//receive input
    	Hcoeff0_0 <= $signed(coeff0[17:0] ); 
		Hcoeff0_1 <= $signed(coeff0[35:18]);
		Hcoeff1_0 <= $signed(coeff1[17:0] );
		Hcoeff1_1 <= $signed(coeff1[35:18]);
		Hcoeff2_0 <= $signed(coeff2[17:0] );
		Hcoeff2_1 <= $signed(coeff2[35:18]);
		Hcoeff3_0 <= $signed(coeff3[17:0] );
		Hcoeff3_1 <= $signed(coeff3[35:18]);
		Hcoeff4_0 <= $signed(coeff4[17:0] );
		Hcoeff4_1 <= $signed(coeff4[35:18]);
		Hcoeff5_0 <= $signed(coeff5[17:0] );
		Hcoeff5_1 <= $signed(coeff5[35:18]);
		Hcoeff6_0 <= $signed(coeff6[17:0] );
		Hcoeff6_1 <= $signed(coeff6[35:18]);
		Hcoeff7_0 <= $signed(coeff7[17:0] );
		Hcoeff7_1 <= $signed(coeff7[35:18]);

		STATE <= NEXTSTATE;
	end

	case (STATE) 
		2'b01 : 	countaddress <= countaddress + 1;
		2'b10 : 	countaddress <= countaddress + 1;
		2'b11 : 	begin
					accum0 <= accum0 + $signed(data[counter*2]) * Hcoeff0_0 + $signed(data[counter*2+1]) * Hcoeff0_1;
					accum1 <= accum1 + $signed(data[counter*2]) * Hcoeff1_0 + $signed(data[counter*2+1]) * Hcoeff1_1;
					accum2 <= accum2 + $signed(data[counter*2]) * Hcoeff2_0 + $signed(data[counter*2+1]) * Hcoeff2_1;
					accum3 <= accum3 + $signed(data[counter*2]) * Hcoeff3_0 + $signed(data[counter*2+1]) * Hcoeff3_1;
					accum4 <= accum4 + $signed(data[counter*2]) * Hcoeff4_0 + $signed(data[counter*2+1]) * Hcoeff4_1;
					accum5 <= accum5 + $signed(data[counter*2]) * Hcoeff5_0 + $signed(data[counter*2+1]) * Hcoeff5_1;
					accum6 <= accum6 + $signed(data[counter*2]) * Hcoeff6_0 + $signed(data[counter*2+1]) * Hcoeff6_1;
					accum7 <= accum7 + $signed(data[counter*2]) * Hcoeff7_0 + $signed(data[counter*2+1]) * Hcoeff7_1;

					countaddress <= countaddress + 1;
					counter <= counter + 1;
					end

		default : 	countaddress <= 6'd0;
	endcase

end

always @*
	case (STATE)
		2'b00 : if(din_enable)			  NEXTSTATE <= 2'b01;
		2'b01 : 						  NEXTSTATE <= 2'b10;
		2'b10 : 						  NEXTSTATE <= 2'b11;
		2'b11 : if(counter == 7'd63)	  NEXTSTATE <= 2'b00; 
		default: 						  NEXTSTATE <= 2'b00;
	endcase
	
//Assing outputs
assign coeffaddress = countaddress;

assign dataout0 = accum0 [31:16];
assign dataout1 = accum1 [31:16];
assign dataout2 = accum2 [31:16];
assign dataout3 = accum3 [31:16];
assign dataout4 = accum4 [31:16];
assign dataout5 = accum5 [31:16];
assign dataout6 = accum6 [31:16];
assign dataout7 = accum7 [31:16];


endmodule
