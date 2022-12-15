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
reg [0:15] data [0:size-1];

always @(posedge clock)
begin
	if(din_enable)
	begin
    	for (i = 0; i < size-1; i = i+1)
    	begin
    	    data[i+1] <= data[i]; //shift
    	end
	
    	data[0] <= datain; //receive input
	end
end

//Shift register
//	Stores the filters' coefficients
reg [17:0] Hcoeff [0:7] [0:size-1];

always @(posedge clock)
begin
	if (din_enable)
	begin
		for (j = 0; j < 8 ; j = j+1)
		begin
			for (i = 0; i < size-2; i = i+2)
			begin
				Hcoeff[j][i+2] <= Hcoeff[j][i]; 
				Hcoeff[j][i+3] <= Hcoeff[j][i+1]; 
			end
		end
	
		//receive input
    	Hcoeff[0][0] <= coeff0[17:0]; 
		Hcoeff[0][1] <= coeff0[35:18];

		Hcoeff[1][0] <= coeff1[17:0];
		Hcoeff[1][1] <= coeff1[35:18];
		
		Hcoeff[2][0] <= coeff2[17:0];
		Hcoeff[2][1] <= coeff2[35:18];
		
		Hcoeff[3][0] <= coeff3[17:0];
		Hcoeff[3][1] <= coeff3[35:18];
		
		Hcoeff[4][0] <= coeff4[17:0];
		Hcoeff[4][1] <= coeff4[35:18];
		
		Hcoeff[5][0] <= coeff5[17:0];
		Hcoeff[5][1] <= coeff5[35:18];
		
		Hcoeff[6][0] <= coeff6[17:0];
		Hcoeff[6][1] <= coeff6[35:18];
		
		Hcoeff[7][0] <= coeff7[17:0];
		Hcoeff[7][1] <= coeff7[35:18];
	end

end


//Calculate output

reg [0:41] accum [0:7];


always @(posedge clock)
begin
	if (din_enable)
	begin
		for (j = 0; j < 8 ; j = j+1)
		begin
			for (i = 0; i < size; i = i+1)
			begin
				accum [j] <= $signed(accum[j]) + $signed(data[i])*$signed(Hcoeff[j][i]);
			end
		end
	end
end


// Example of generator of the addresses to read the coefficients memories:
reg [5:0] countaddress = 0;

always @(posedge clock)
begin
	if ( din_enable )
		countaddress <= 0;
	else
		countaddress <= countaddress + 1;
end


// Reset all output to zeros
always @(posedge clock)
begin
	if (reset)
	begin
		countaddress <= 5'd0;

		for (i = 0 ; i < size ; i = i+1)
		begin
			data[i] <= 16'd0;
		end

		for (j = 0 ; j < 8 ; j = j+1)
		begin
			accum[j] <= 42'd0;
			for (i = 0 ; i < size ; i = i+1)
			begin
				Hcoeff[0][1] <= 18'd0;
			end
		end
	end
end


//Assing outputs
assign coeffaddress = countaddress;

assign dataout0 = $signed(accum[0]>>16);
assign dataout1 = $signed(accum[1]>>16);
assign dataout2 = $signed(accum[2]>>16);
assign dataout3 = $signed(accum[3]>>16);
assign dataout4 = $signed(accum[4]>>16);
assign dataout5 = $signed(accum[5]>>16);
assign dataout6 = $signed(accum[6]>>16);
assign dataout7 = $signed(accum[7]>>16);


endmodule
