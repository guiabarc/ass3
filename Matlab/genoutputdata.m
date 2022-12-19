inputdatafile = '../simdata/datain.hex';

inputcoefficients0 = '../simdata/coefficients0.hex';
inputcoefficients1 = '../simdata/coefficients1.hex';
inputcoefficients2 = '../simdata/coefficients2.hex';
inputcoefficients3 = '../simdata/coefficients3.hex';
inputcoefficients4 = '../simdata/coefficients4.hex';
inputcoefficients5 = '../simdata/coefficients5.hex';
inputcoefficients6 = '../simdata/coefficients6.hex';
inputcoefficients7 = '../simdata/coefficients7.hex';


outputgoldenfile0 = '../simdata/dataout0.hex';
outputgoldenfile1 = '../simdata/dataout1.hex';
outputgoldenfile2 = '../simdata/dataout2.hex';
outputgoldenfile3 = '../simdata/dataout3.hex';
outputgoldenfile4 = '../simdata/dataout4.hex';
outputgoldenfile5 = '../simdata/dataout5.hex';
outputgoldenfile6 = '../simdata/dataout6.hex';
outputgoldenfile7 = '../simdata/dataout7.hex';

Nfracbits = 16;

Fs = 250000000 / 128;

%% Read input hex datafile
fp = fopen(inputdatafile,'r');
[datain, N] = fscanf(fp, '%x');
fclose( fp );

%% convert to signed integers, 16 bits
datains = zeros(1,N);
for i=1:N
  if ( bitand( datain(i), int32( 0x8000 ) ) ~= 0 )
      datains(i) = datain(i) - int32(2^16);
  else
      datains(i) = datain(i);
  end    
end

%-----------
%---  0  ---
%-----------
%% Read coefficients file (ONLY for RAM 0)
fp = fopen(inputcoefficients0,'r');
[coeffs2] = fscanf(fp, '%lx');
fclose( fp );

%% Split to extract the even and odd coefficients:
coeffs  = int32( zeros(1, 128) );
coeffss = int32( zeros(1, 128) );
coeffs(1:2:127) = bitand( int64(coeffs2), int64(0x3FFFF) );
coeffs(2:2:128) = bitand( bitshift(int64(coeffs2),-18), int64(0x3FFFF) );

%% Convert to signed 18-bit integers
for i=1:128
  if ( bitand( coeffs(i), int32( 0x20000 ) ) ~= 0 )
      coeffss(i) = coeffs(i) - int32(2^18);
  else
      coeffss(i) = coeffs(i);
  end
      
end

%% Divide by 2^16 = convert to fixed-point numbers with 16 fractional bits
coeffsf = double(coeffss) / 2^Nfracbits;


%% Convolution
Yout = conv( datains, coeffsf );
Youti = int32( floor(Yout(1:length(datains)) ) );

%% Generate the output hex file:
fp = fopen(outputgoldenfile0,'w+');
for i=1:length(Youti)
    if ( Youti(i)>=0 )
      fprintf(fp, '%04X\n', Youti(i) );    
    else
      fprintf(fp, '%04X\n', 2^16 + Youti(i) );    
    end
end
fclose( fp );

%-----------
%---  1  ---
%-----------
%% Read coefficients file (ONLY for RAM 1)
fp = fopen(inputcoefficients1,'r');
[coeffs2] = fscanf(fp, '%lx');
fclose( fp );

%% Split to extract the even and odd coefficients:
coeffs  = int32( zeros(1, 128) );
coeffss = int32( zeros(1, 128) );
coeffs(1:2:127) = bitand( int64(coeffs2), int64(0x3FFFF) );
coeffs(2:2:128) = bitand( bitshift(int64(coeffs2),-18), int64(0x3FFFF) );

%% Convert to signed 18-bit integers
for i=1:128
  if ( bitand( coeffs(i), int32( 0x20000 ) ) ~= 0 )
      coeffss(i) = coeffs(i) - int32(2^18);
  else
      coeffss(i) = coeffs(i);
  end
      
end

%% Divide by 2^16 = convert to fixed-point numbers with 16 fractional bits
coeffsf = double(coeffss) / 2^Nfracbits;


%% Convolution
Yout = conv( datains, coeffsf );
Youti = int32( floor(Yout(1:length(datains)) ) );

%% Generate the output hex file:
fp = fopen(outputgoldenfile1,'w+');
for i=1:length(Youti)
    if ( Youti(i)>=0 )
      fprintf(fp, '%04X\n', Youti(i) );    
    else
      fprintf(fp, '%04X\n', 2^16 + Youti(i) );    
    end
end
fclose( fp );

%-----------
%---  2  ---
%-----------
%% Read coefficients file (ONLY for RAM 2)
fp = fopen(inputcoefficients2,'r');
[coeffs2] = fscanf(fp, '%lx');
fclose( fp );

%% Split to extract the even and odd coefficients:
coeffs  = int32( zeros(1, 128) );
coeffss = int32( zeros(1, 128) );
coeffs(1:2:127) = bitand( int64(coeffs2), int64(0x3FFFF) );
coeffs(2:2:128) = bitand( bitshift(int64(coeffs2),-18), int64(0x3FFFF) );

%% Convert to signed 18-bit integers
for i=1:128
  if ( bitand( coeffs(i), int32( 0x20000 ) ) ~= 0 )
      coeffss(i) = coeffs(i) - int32(2^18);
  else
      coeffss(i) = coeffs(i);
  end
      
end

%% Divide by 2^16 = convert to fixed-point numbers with 16 fractional bits
coeffsf = double(coeffss) / 2^Nfracbits;


%% Convolution
Yout = conv( datains, coeffsf );
Youti = int32( floor(Yout(1:length(datains)) ) );

%% Generate the output hex file:
fp = fopen(outputgoldenfile2,'w+');
for i=1:length(Youti)
    if ( Youti(i)>=0 )
      fprintf(fp, '%04X\n', Youti(i) );    
    else
      fprintf(fp, '%04X\n', 2^16 + Youti(i) );    
    end
end
fclose( fp );

%-----------
%---  3  ---
%-----------
%% Read coefficients file (ONLY for RAM 3)
fp = fopen(inputcoefficients3,'r');
[coeffs2] = fscanf(fp, '%lx');
fclose( fp );

%% Split to extract the even and odd coefficients:
coeffs  = int32( zeros(1, 128) );
coeffss = int32( zeros(1, 128) );
coeffs(1:2:127) = bitand( int64(coeffs2), int64(0x3FFFF) );
coeffs(2:2:128) = bitand( bitshift(int64(coeffs2),-18), int64(0x3FFFF) );

%% Convert to signed 18-bit integers
for i=1:128
  if ( bitand( coeffs(i), int32( 0x20000 ) ) ~= 0 )
      coeffss(i) = coeffs(i) - int32(2^18);
  else
      coeffss(i) = coeffs(i);
  end
      
end

%% Divide by 2^16 = convert to fixed-point numbers with 16 fractional bits
coeffsf = double(coeffss) / 2^Nfracbits;


%% Convolution
Yout = conv( datains, coeffsf );
Youti = int32( floor(Yout(1:length(datains)) ) );

%% Generate the output hex file:
fp = fopen(outputgoldenfile3,'w+');
for i=1:length(Youti)
    if ( Youti(i)>=0 )
      fprintf(fp, '%04X\n', Youti(i) );    
    else
      fprintf(fp, '%04X\n', 2^16 + Youti(i) );    
    end
end
fclose( fp );

%-----------
%---  4  ---
%-----------
%% Read coefficients file (ONLY for RAM 4)
fp = fopen(inputcoefficients4,'r');
[coeffs2] = fscanf(fp, '%lx');
fclose( fp );

%% Split to extract the even and odd coefficients:
coeffs  = int32( zeros(1, 128) );
coeffss = int32( zeros(1, 128) );
coeffs(1:2:127) = bitand( int64(coeffs2), int64(0x3FFFF) );
coeffs(2:2:128) = bitand( bitshift(int64(coeffs2),-18), int64(0x3FFFF) );

%% Convert to signed 18-bit integers
for i=1:128
  if ( bitand( coeffs(i), int32( 0x20000 ) ) ~= 0 )
      coeffss(i) = coeffs(i) - int32(2^18);
  else
      coeffss(i) = coeffs(i);
  end
      
end

%% Divide by 2^16 = convert to fixed-point numbers with 16 fractional bits
coeffsf = double(coeffss) / 2^Nfracbits;


%% Convolution
Yout = conv( datains, coeffsf );
Youti = int32( floor(Yout(1:length(datains)) ) );

%% Generate the output hex file:
fp = fopen(outputgoldenfile4,'w+');
for i=1:length(Youti)
    if ( Youti(i)>=0 )
      fprintf(fp, '%04X\n', Youti(i) );    
    else
      fprintf(fp, '%04X\n', 2^16 + Youti(i) );    
    end
end
fclose( fp );

%-----------
%---  5  ---
%-----------
%% Read coefficients file (ONLY for RAM 5)
fp = fopen(inputcoefficients5,'r');
[coeffs2] = fscanf(fp, '%lx');
fclose( fp );

%% Split to extract the even and odd coefficients:
coeffs  = int32( zeros(1, 128) );
coeffss = int32( zeros(1, 128) );
coeffs(1:2:127) = bitand( int64(coeffs2), int64(0x3FFFF) );
coeffs(2:2:128) = bitand( bitshift(int64(coeffs2),-18), int64(0x3FFFF) );

%% Convert to signed 18-bit integers
for i=1:128
  if ( bitand( coeffs(i), int32( 0x20000 ) ) ~= 0 )
      coeffss(i) = coeffs(i) - int32(2^18);
  else
      coeffss(i) = coeffs(i);
  end
      
end

%% Divide by 2^16 = convert to fixed-point numbers with 16 fractional bits
coeffsf = double(coeffss) / 2^Nfracbits;


%% Convolution
Yout = conv( datains, coeffsf );
Youti = int32( floor(Yout(1:length(datains)) ) );

%% Generate the output hex file:
fp = fopen(outputgoldenfile5,'w+');
for i=1:length(Youti)
    if ( Youti(i)>=0 )
      fprintf(fp, '%04X\n', Youti(i) );    
    else
      fprintf(fp, '%04X\n', 2^16 + Youti(i) );    
    end
end
fclose( fp );

%-----------
%---  6  ---
%-----------
%% Read coefficients file (ONLY for RAM 6)
fp = fopen(inputcoefficients6,'r');
[coeffs2] = fscanf(fp, '%lx');
fclose( fp );

%% Split to extract the even and odd coefficients:
coeffs  = int32( zeros(1, 128) );
coeffss = int32( zeros(1, 128) );
coeffs(1:2:127) = bitand( int64(coeffs2), int64(0x3FFFF) );
coeffs(2:2:128) = bitand( bitshift(int64(coeffs2),-18), int64(0x3FFFF) );

%% Convert to signed 18-bit integers
for i=1:128
  if ( bitand( coeffs(i), int32( 0x20000 ) ) ~= 0 )
      coeffss(i) = coeffs(i) - int32(2^18);
  else
      coeffss(i) = coeffs(i);
  end
      
end

%% Divide by 2^16 = convert to fixed-point numbers with 16 fractional bits
coeffsf = double(coeffss) / 2^Nfracbits;


%% Convolution
Yout = conv( datains, coeffsf );
Youti = int32( floor(Yout(1:length(datains)) ) );

%% Generate the output hex file:
fp = fopen(outputgoldenfile6,'w+');
for i=1:length(Youti)
    if ( Youti(i)>=0 )
      fprintf(fp, '%04X\n', Youti(i) );    
    else
      fprintf(fp, '%04X\n', 2^16 + Youti(i) );    
    end
end
fclose( fp );

%-----------
%---  7  ---
%-----------
%% Read coefficients file (ONLY for RAM 7)
fp = fopen(inputcoefficients7,'r');
[coeffs2] = fscanf(fp, '%lx');
fclose( fp );

%% Split to extract the even and odd coefficients:
coeffs  = int32( zeros(1, 128) );
coeffss = int32( zeros(1, 128) );
coeffs(1:2:127) = bitand( int64(coeffs2), int64(0x3FFFF) );
coeffs(2:2:128) = bitand( bitshift(int64(coeffs2),-18), int64(0x3FFFF) );

%% Convert to signed 18-bit integers
for i=1:128
  if ( bitand( coeffs(i), int32( 0x20000 ) ) ~= 0 )
      coeffss(i) = coeffs(i) - int32(2^18);
  else
      coeffss(i) = coeffs(i);
  end
      
end

%% Divide by 2^16 = convert to fixed-point numbers with 16 fractional bits
coeffsf = double(coeffss) / 2^Nfracbits;


%% Convolution
Yout = conv( datains, coeffsf );
Youti = int32( floor(Yout(1:length(datains)) ) );

%% Generate the output hex file:
fp = fopen(outputgoldenfile7,'w+');
for i=1:length(Youti)
    if ( Youti(i)>=0 )
      fprintf(fp, '%04X\n', Youti(i) );    
    else
      fprintf(fp, '%04X\n', 2^16 + Youti(i) );    
    end
end
fclose( fp );

%% Plot

figure(30);

subplot(6,1,1);
plot( datains );
title('Input signal');
xlabel( 'Samples');
ylabel([ 'Amplitude',newline,'(16 bits signed)']);
grid on;

subplot(6,1,2);
plot( Youti );
title('Output signal');
xlabel( 'Samples');
ylabel([ 'Amplitude',newline,'(16 bits signed)']);
grid on;


subplot(6,1,3);
freq = 1:length(datains);
freq = freq/length(datains) * Fs / 1000;
plot( freq, abs( fft( int32(datains) ) ) );
title('FFT of input signal');
xlabel( 'Frequency (kHz)');
ylabel('Amplitude');


subplot(6,1,4);
plot( coeffsf, '.-' );
grid on;
title('Filter impulse response');
ylabel('Amplitude');
xlabel('Coefficient order');

subplot(6,1,5)
% Frequency in kHz
freqs = (1:length(coeffsf)) / length(coeffsf) * Fs / 1e3;
plot( freqs, 20*log10( abs( fft( coeffsf ) ) ) ,'.-' );
grid on;
axis([0 2e6 / 1e3, -100, 10]);
ylabel('Gain (dB)');
xlabel('Frequency (kHz)');
title('Frequency response (abs gain)');

subplot(6,1,6);
plot( freq, abs( fft( Youti ) ) );
title('FFT of output signal');
xlabel( 'Frequency (kHz)');
ylabel('Amplitude');

