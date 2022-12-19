/*
 Basic testbenck for the Profir module
 
    jca@fe.up.pt, Nov 2022

	This Verilog code is property of University of Porto
	Its utilization beyond the scope of the course Digital Systems Design
	(Projeto de Sistemas Digitais) of the Master in Electrical 
	and Computer Engineering requires explicit authorization from the author.
 
*/
`timescale 1ns/1ps

module profir_tb;

parameter MAXSAMPLES            = 1_000_000,
          CLOCK_FREQUENCY       = 250_000_000,
          CLOCK_PERIOD          = 4,
          INPUT_DATAFILE        = "../simdata/datain.hex", // input data
		  OUTPUT_GOLDEN_DATAFILE_0= "../simdata/dataout0.hex",// expected output data of filter 0
		  OUTPUT_GOLDEN_DATAFILE_1= "../simdata/dataout1.hex",// expected output data of filter 1
		  OUTPUT_GOLDEN_DATAFILE_2= "../simdata/dataout2.hex",// expected output data of filter 2
		  OUTPUT_GOLDEN_DATAFILE_3= "../simdata/dataout3.hex",// expected output data of filter 3
		  OUTPUT_GOLDEN_DATAFILE_4= "../simdata/dataout4.hex",// expected output data of filter 4
		  OUTPUT_GOLDEN_DATAFILE_5= "../simdata/dataout5.hex",// expected output data of filter 5
		  OUTPUT_GOLDEN_DATAFILE_6= "../simdata/dataout6.hex",// expected output data of filter 6
		  OUTPUT_GOLDEN_DATAFILE_7= "../simdata/dataout7.hex";// expected output data of filter 7


reg clock, reset;
reg signed [15:0] datain;  // Input data to the for bank
wire datain_en;     // Input data enable, sets the sampling frequency to 250MHz / 128:

// Connect the coefficients read from RAM to the filter bank module:
wire [35:0] data0, data1, data2, data3, data4, data5, data6, data7;

// The read address from the filter bank to the coefficient RAM bank
wire [5:0] read_address;

// The main outputs from the filter bank
wire signed [15:0] dataout0, dataout1, dataout2, dataout3, dataout4, dataout5, dataout6, dataout7;

// Load input and output data from files INPUT_DATAFILE and OUTPUT_GOLDEN_DATAFILE:
// NOTE that the file with the expected output values is only generated
// for filter 0 (output dataouto[15:0])
reg [15:0] datainbuffer[0:MAXSAMPLES-1];

reg [15:0] dataoutbuffer0[0:MAXSAMPLES-1];
reg [15:0] dataoutbuffer1[0:MAXSAMPLES-1];
reg [15:0] dataoutbuffer2[0:MAXSAMPLES-1];
reg [15:0] dataoutbuffer3[0:MAXSAMPLES-1];
reg [15:0] dataoutbuffer4[0:MAXSAMPLES-1];
reg [15:0] dataoutbuffer5[0:MAXSAMPLES-1];
reg [15:0] dataoutbuffer6[0:MAXSAMPLES-1];
reg [15:0] dataoutbuffer7[0:MAXSAMPLES-1];

integer i, Nsamples;
integer Nsamplesout0, Nsamplesout1, Nsamplesout2, Nsamplesout3;
integer Nsamplesout4, Nsamplesout5, Nsamplesout6, Nsamplesout7;

initial
begin
  $readmemh( INPUT_DATAFILE, datainbuffer );

  for(i=0; i<MAXSAMPLES; i=i+1)
    if ( datainbuffer[i] !== 16'dx )
      Nsamples = i;
  $display("Read %d samples from input file %s", Nsamples, INPUT_DATAFILE );


  $readmemh( OUTPUT_GOLDEN_DATAFILE_0, dataoutbuffer0 );
  $readmemh( OUTPUT_GOLDEN_DATAFILE_1, dataoutbuffer1 );
  $readmemh( OUTPUT_GOLDEN_DATAFILE_2, dataoutbuffer2 );
  $readmemh( OUTPUT_GOLDEN_DATAFILE_3, dataoutbuffer3 );
  $readmemh( OUTPUT_GOLDEN_DATAFILE_4, dataoutbuffer4 );
  $readmemh( OUTPUT_GOLDEN_DATAFILE_5, dataoutbuffer5 );
  $readmemh( OUTPUT_GOLDEN_DATAFILE_6, dataoutbuffer6 );
  $readmemh( OUTPUT_GOLDEN_DATAFILE_7, dataoutbuffer7 );

  for(i=0; i<MAXSAMPLES; i=i+1)
  begin
    if ( dataoutbuffer0[i] !== 16'dx )
      	Nsamplesout0 = i;
	if ( dataoutbuffer1[i] !== 16'dx )
  		Nsamplesout1 = i;
	if ( dataoutbuffer2[i] !== 16'dx )
		Nsamplesout2 = i;
	if ( dataoutbuffer3[i] !== 16'dx )
		Nsamplesout3 = i;
	if ( dataoutbuffer4[i] !== 16'dx )
		Nsamplesout4 = i;
	if ( dataoutbuffer5[i] !== 16'dx )
		Nsamplesout5 = i;
	if ( dataoutbuffer6[i] !== 16'dx )
		Nsamplesout6 = i;
	if ( dataoutbuffer7[i] !== 16'dx )
	    Nsamplesout7 = i;
  end

  $display("Read %d samples from output file %s", Nsamplesout0, OUTPUT_GOLDEN_DATAFILE_0 );
  $display("Read %d samples from output file %s", Nsamplesout1, OUTPUT_GOLDEN_DATAFILE_1 );
  $display("Read %d samples from output file %s", Nsamplesout2, OUTPUT_GOLDEN_DATAFILE_2 );
  $display("Read %d samples from output file %s", Nsamplesout3, OUTPUT_GOLDEN_DATAFILE_3 );
  $display("Read %d samples from output file %s", Nsamplesout4, OUTPUT_GOLDEN_DATAFILE_4 );
  $display("Read %d samples from output file %s", Nsamplesout5, OUTPUT_GOLDEN_DATAFILE_5 );
  $display("Read %d samples from output file %s", Nsamplesout6, OUTPUT_GOLDEN_DATAFILE_6 );
  $display("Read %d samples from output file %s", Nsamplesout7, OUTPUT_GOLDEN_DATAFILE_7 );
end




// Initialize registers and variables, generate clock and reset:
initial
begin
  clock = 0;
  reset = 0;
  datain = 0;
  // Generate the master clock:
  forever #(CLOCK_PERIOD/2) clock = ~clock;
end		

// generate the reset signal (note this is active low)
// Activate reset_n for 10 clock cycles (100 ns)
// raise the reset after the first 5 clock periods, keep it high
// for 2 clock periods;
// align the reset edges to the negative edge of the clock
initial
begin
  # 1
  @(negedge clock);
  repeat (5)
    @(negedge clock);
  reset = 1;
  repeat (2)
    @(negedge clock);
  reset = 0;
end		

// generate the datain enable signal:
// delay the datain_en edges from the clock only to ease
// the waveform analysis
integer counter = 0;
always @(posedge clock)
begin
  if ( reset )
  begin
    counter <= 0;
  end
  else
  begin
    if ( counter == 127 )
	  counter <= 0;
	else
	  counter <= counter + 1;
  end
end

assign #1 datain_en = (counter == 127);


// Apply the input data samples:
integer Csamples = 0;     // Pointer to the array with the input samples 
                          // read from the input file
						  
integer Coutsamples = 0; // Adjust the start value for this index 
                          // to synchronize with the output data 
						  // generated by your circuit
						  
// register loaded with the expected output data						  
reg signed [15:0] goldendataout0;
reg signed [15:0] goldendataout1;
reg signed [15:0] goldendataout2;
reg signed [15:0] goldendataout3;
reg signed [15:0] goldendataout4;
reg signed [15:0] goldendataout5;
reg signed [15:0] goldendataout6;
reg signed [15:0] goldendataout7;

integer wrong_out = 0;


always @(posedge datain_en)
begin
  datain <= datainbuffer[Csamples];

  if ( Coutsamples >= 0 )
  begin
    goldendataout0 <= dataoutbuffer0[ Coutsamples ];
    goldendataout1 <= dataoutbuffer1[ Coutsamples ];
    goldendataout2 <= dataoutbuffer2[ Coutsamples ];
    goldendataout3 <= dataoutbuffer3[ Coutsamples ];
    goldendataout4 <= dataoutbuffer4[ Coutsamples ];
    goldendataout5 <= dataoutbuffer5[ Coutsamples ];
    goldendataout6 <= dataoutbuffer6[ Coutsamples ];
    goldendataout7 <= dataoutbuffer7[ Coutsamples ];
  end

  else
  begin
    goldendataout0 <= 16'dx;  // set to unknown value
    goldendataout1 <= 16'dx;  // set to unknown value
    goldendataout2 <= 16'dx;  // set to unknown value
    goldendataout3 <= 16'dx;  // set to unknown value
    goldendataout4 <= 16'dx;  // set to unknown value
    goldendataout5 <= 16'dx;  // set to unknown value
    goldendataout6 <= 16'dx;  // set to unknown value
    goldendataout7 <= 16'dx;  // set to unknown value
  end


  Coutsamples = Coutsamples + 1;
  
  if ( Csamples == Nsamples ) // end of the input sample vector
  begin
    repeat(1000)			// wait more 1000 clocks and stop simulation
	  @(posedge clock);
	  $display(wrong_out);
	$stop;
  end
  else
    Csamples <= Csamples + 1;
	
  // INSERT HERE YOUR VERIFICATION PROCESS TO COMPARE THE dataout<0-7> 
  // OUTPUTS WITH THE EXPECTED OUTPUT DATA 

	if(goldendataout0 !== dataout0)
	begin
		wrong_out = wrong_out + 1;
		// $display("Number of wrong samples: %d\n  dout: %b (%d)\ngolden: %b (%d)", wrong_out, dataout0, dataout0, goldendataout0, goldendataout0);
	end

	if(goldendataout1 !== dataout1)
	begin
		wrong_out = wrong_out + 1;
		// $display("-----------------");
		// $display("Number of wrong samples: %d\n  dout: %b (%d)\ngolden: %b (%d)", wrong_out, dataout1, dataout1, goldendataout1, goldendataout1);
	end

	if(goldendataout2 !== dataout2)
	begin
		wrong_out = wrong_out + 1;
		// $display("Number of wrong samples: %d\n  dout: %b (%d)\ngolden: %b (%d)", wrong_out, dataout2, dataout2, goldendataout2, goldendataout2);
	end

	if(goldendataout3 !== dataout3)
	begin
		wrong_out = wrong_out + 1;
		// $display("Number of wrong samples: %d\n  dout: %b (%d)\ngolden: %b (%d)", wrong_out, dataout3, dataout3, goldendataout3, goldendataout3);
	end

	if(goldendataout4 !== dataout4)
	begin
		wrong_out = wrong_out + 1;
		// $display("Number of wrong samples: %d\n  dout: %b (%d)\ngolden: %b (%d)", wrong_out, dataout4, dataout4, goldendataout4, goldendataout4);
	end

	if(goldendataout5 !== dataout5)
	begin
		wrong_out = wrong_out + 1;
		// $display("Number of wrong samples: %d\n  dout: %b (%d)\ngolden: %b (%d)", wrong_out, dataout5, dataout5, goldendataout5, goldendataout5);
	end

	if(goldendataout6 !== dataout6)
	begin
		wrong_out = wrong_out + 1;
		// $display("Number of wrong samples: %d\n  dout: %b (%d)\ngolden: %b (%d)", wrong_out, dataout6, dataout6, goldendataout6, goldendataout6);
	end

	if(goldendataout7 !== dataout7)
	begin
		wrong_out = wrong_out + 1;
		// $display("Number of wrong samples: %d\n  dout: %b (%d)\ngolden: %b (%d)", wrong_out, dataout7, dataout7, goldendataout7, goldendataout7);
	end
	
	
	
	
end

//--------------------------------------------------------------------------------
// Instantiate the memory bank:
memory8bank  memory8bank_1(
              .clock( clock ),		// Master clock, active in the posedge
			  .reset( reset ),		// Master reset, synch active high (clears output regs)
			  //-------------------------------------
			  // write port, to connect to the serial interface
			  // For now the write port is disabled
			  .addressW( 9'd0 ),	// Write address
			  .datain( 36'd0 ),		// Data to write
			  .we( 1'b0 ),			// Write enable
			  //-------------------------------------
			  // 8 read ports, common address, 2 coefficients por data port
			  // each coefficient is 18 bits, signed, 5 integer bits and 13 fraccional bits
			  .addressR( read_address ),	// Read address, from the filter bank
			  .data0( data0 ),	// Output data ports, to the filter bank
			  .data1( data1 ),
			  .data2( data2 ),
			  .data3( data3 ),
			  .data4( data4 ),
			  .data5( data5 ),
			  .data6( data6 ),
			  .data7( data7 )
			  );

//--------------------------------------------------------------------------------
// Instantiate the filter bank:
profir filter_bank_1(
	.clock( clock ),		// Master 250 MHz clock, active in the rising edge
	.reset( reset ),		// Master reset, synchronous, active high
	.datain( datain ),		// Input signal sample
	.din_enable( datain_en ),	// When 1, a new sample is present at datain input (lasts 1 clock)
	.coeffaddress( read_address ),	// Address to read all the coefficient memories
	.coeff0( data0 ),		// Coefficient read data for filter 0
	.coeff1( data1 ),		// Coefficient read data for filter 1
	.coeff2( data2 ),		// Coefficient read data for filter 2
	.coeff3( data3 ),		// Coefficient read data for filter 3
	.coeff4( data4 ),		// Coefficient read data for filter 4
	.coeff5( data5 ),		// Coefficient read data for filter 5
	.coeff6( data6 ),		// Coefficient read data for filter 6
	.coeff7( data7 ),		// Coefficient read data for filter 7
	.dataout0( dataout0 ),	// Output data of filter 0
	.dataout1( dataout1 ),	// Output data of filter 1
	.dataout2( dataout2 ),	// Output data of filter 2
	.dataout3( dataout3 ),	// Output data of filter 3
	.dataout4( dataout4 ),	// Output data of filter 4
	.dataout5( dataout5 ),	// Output data of filter 5
	.dataout6( dataout6 ),	// Output data of filter 6
	.dataout7( dataout7 )	// Output data of filter 7
	);

endmodule
