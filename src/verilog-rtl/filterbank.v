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
parameter size = 128;


//Auxiliary variables
integer j;
integer i;

//Shift register
//	Stores the last 128 samples of 16 bits each from datain
reg signed [15:0] data [0:size-1];

always @(posedge clock)
begin

	if(reset)
	begin
		for (i = 0 ; i < size ; i = i+1)
		begin
			data[i] <= 16'd0;
		end
	end

	else
	begin
		if(din_enable)
		begin
    		for (i = size-1; i > 0; i = i-1)
    		begin
    		    data[i] <= data[i-1]; //shift
    		end

    		data[0] <= datain; //receive input
		end
	end
end
// Example of generator of the addresses to read the coefficients memories:
reg [5:0] countaddress = 0;

always @(posedge clock)
begin
	if (reset || din_enable)
	begin
		countaddress <= 0;
	end

	else
	begin
		countaddress <= countaddress + 1;
	end
end

//Shift register
//	Stores the filters' coefficients
reg signed [17:0] Hcoeff0 [0:size-1];
reg signed [17:0] Hcoeff1 [0:size-1];
reg signed [17:0] Hcoeff2 [0:size-1];
reg signed [17:0] Hcoeff3 [0:size-1];
reg signed [17:0] Hcoeff4 [0:size-1];
reg signed [17:0] Hcoeff5 [0:size-1];
reg signed [17:0] Hcoeff6 [0:size-1];
reg signed [17:0] Hcoeff7 [0:size-1];

always @(posedge clock)
begin
	if(reset)
	begin
		for (i = 0 ; i < size ; i = i+1)
		begin
			Hcoeff0 [i] <= 18'd0;
			Hcoeff1 [i] <= 18'd0;
			Hcoeff2 [i] <= 18'd0;
			Hcoeff3 [i] <= 18'd0;
			Hcoeff4 [i] <= 18'd0;
			Hcoeff5 [i] <= 18'd0;
			Hcoeff6 [i] <= 18'd0;
			Hcoeff7 [i] <= 18'd0;
		end
	end

	else
	begin
		// if (din_enable)
		// begin

			for (i = size-1; i > 0; i = i-1)
			begin
				Hcoeff0[i] <= Hcoeff0[i-2];
				Hcoeff1[i] <= Hcoeff1[i-2];
				Hcoeff2[i] <= Hcoeff2[i-2];
				Hcoeff3[i] <= Hcoeff3[i-2];
				Hcoeff4[i] <= Hcoeff4[i-2];
				Hcoeff5[i] <= Hcoeff5[i-2];
				Hcoeff6[i] <= Hcoeff6[i-2];
				Hcoeff7[i] <= Hcoeff7[i-2]; 
			end

			//receive input
    		Hcoeff0[0] <= coeff0[17:0]; 
			Hcoeff0[1] <= coeff0[35:18];

			Hcoeff1[0] <= coeff1[17:0];
			Hcoeff1[1] <= coeff1[35:18];
			
			Hcoeff2[0] <= coeff2[17:0];
			Hcoeff2[1] <= coeff2[35:18];
			
			Hcoeff3[0] <= coeff3[17:0];
			Hcoeff3[1] <= coeff3[35:18];
			
			Hcoeff4[0] <= coeff4[17:0];
			Hcoeff4[1] <= coeff4[35:18];
			
			Hcoeff5[0] <= coeff5[17:0];
			Hcoeff5[1] <= coeff5[35:18];
			
			Hcoeff6[0] <= coeff6[17:0];
			Hcoeff6[1] <= coeff6[35:18];
			
			Hcoeff7[0] <= coeff7[17:0];
			Hcoeff7[1] <= coeff7[35:18];
		//end
	end

end


//Calculate output

reg signed [41:0] accum0;
reg signed [41:0] accum1;
reg signed [41:0] accum2;
reg signed [41:0] accum3;
reg signed [41:0] accum4;
reg signed [41:0] accum5;
reg signed [41:0] accum6;
reg signed [41:0] accum7;


always @(posedge clock)
begin
	if(reset)
	begin

		accum0 <= 42'd0;
		accum1 <= 42'd0;
		accum2 <= 42'd0;
		accum3 <= 42'd0;
		accum4 <= 42'd0;
		accum5 <= 42'd0;
		accum6 <= 42'd0;
		accum7 <= 42'd0;
	end

	else
	begin
		if (din_enable)
		begin
			for (i = 0; i < size ; i = i+1)
			begin
				accum0 <= accum0 + data[i] * (Hcoeff0[i]<<16);
				accum1 <= accum1 + data[i] * (Hcoeff1[i]<<16);
				accum2 <= accum2 + data[i] * (Hcoeff2[i]<<16);
				accum3 <= accum3 + data[i] * (Hcoeff3[i]<<16);
				accum4 <= accum4 + data[i] * (Hcoeff4[i]<<16);
				accum5 <= accum5 + data[i] * (Hcoeff5[i]<<16);
				accum6 <= accum6 + data[i] * (Hcoeff6[i]<<16);
				accum7 <= accum7 + data[i] * (Hcoeff7[i]<<16);
				//accum [j] <= $signed(accum[j]) + $signed(data[i]) * $signed(Hcoeff[j][i]*2^16);
			end
		end
	end
end


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
