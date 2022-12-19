clear all;

% Coefficients hex filename:
coefficients0 = '../simdata/coefficients0.hex';
coefficients1 = '../simdata/coefficients1.hex';
coefficients2 = '../simdata/coefficients2.hex';
coefficients3 = '../simdata/coefficients3.hex';
coefficients4 = '../simdata/coefficients4.hex';
coefficients5 = '../simdata/coefficients5.hex';
coefficients6 = '../simdata/coefficients6.hex';
coefficients7 = '../simdata/coefficients7.hex';

% Number of fraccional bits to quantize the coefficients:
Nfracbits = 16;

% Number of bits to generate to the output HEX file (DO NOT CHANGE):
Nbits     = 18;

% Sampling frequency (Hz):
Fs = 250000000 / 128;

%--------------
%-- Filter 0 --
%--------------

f0 = designfilt('lowpassfir', 'FilterOrder', 127, ...
                'CutoffFrequency', 200000, ...
                'SampleRate', Fs );

Ncoefs = length( f0.Coefficients );

% zero padding the missing coefficients to fill the 128 coefficients:         
filter0 = zeros(1, 128);
filter0(1:length(f0.Coefficients) ) = f0.Coefficients;
Nf0 = length( filter0 );

% converto to signed integers, fized point with Nfracbit fraccional bits:
filter0i = int32( round( filter0 * 2^Nfracbits ) );

% Create the hex file for Verilog simulation:
fprintf('Creating hex file %s...\n', coefficients0 );
fp = fopen(coefficients0,'w+');
for i=1:2:Nf0
    % least significant coefficient:
    if ( filter0i(i) >=0 )
      cf0 = int64( filter0i(i) );
    else
      cf0 = int64( 2^Nbits + filter0i(i) );    
    end
    % most significant coefficient:
    if ( filter0i(i+1) >=0 )
      cf1 = int64( filter0i(i+1) );
    else
      cf1 = int64( 2^Nbits + filter0i(i+1) );    
    end
    % pack two coefficients into 18+18 bits:
    fprintf(fp, '%09X\n', int64( int64(cf1 * 2^18) + cf0 ) );    
end
fclose( fp );

%--------------
%-- Filter 1 --
%--------------

f1 = designfilt('highpassfir', 'FilterOrder', 126, ...
                'CutoffFrequency', 400000, ...
                'StopbandAttenuation', 80, ...
                'SampleRate', Fs );

Ncoefs = length( f1.Coefficients );

% zero padding the missing coefficients to fill the 128 coefficients:         
filter1 = zeros(1, 128);
filter1(1:length(f1.Coefficients) ) = f1.Coefficients;
Nf1 = length( filter1 );

% converto to signed integers, fized point with Nfracbit fraccional bits:
filter1i = int32( round( filter1 * 2^Nfracbits ) );

% Create the hex file for Verilog simulation:
fprintf('Creating hex file %s...\n', coefficients1 );
fp = fopen(coefficients1,'w+');
for i=1:2:Nf1
    % least significant coefficient:
    if ( filter1i(i) >=0 )
      cf0 = int64( filter1i(i) );
    else
      cf0 = int64( 2^Nbits + filter1i(i) );    
    end
    % most significant coefficient:
    if ( filter1i(i+1) >=0 )
      cf1 = int64( filter1i(i+1) );
    else
      cf1 = int64( 2^Nbits + filter1i(i+1) );    
    end
    % pack two coefficients into 18+18 bits:
    fprintf(fp, '%09X\n', int64( int64(cf1 * 2^18) + cf0 ) );    
end
fclose( fp );


%--------------
%-- Filter 2 --
%--------------

f2 = designfilt('bandpassfir', 'FilterOrder', 127, ...
                'CutoffFrequency1', 100000, 'CutoffFrequency2', 300000,...
                'SampleRate', Fs );

Ncoefs = length( f2.Coefficients );

% zero padding the missing coefficients to fill the 128 coefficients:         
filter2 = zeros(1, 128);
filter2(1:length(f2.Coefficients) ) = f2.Coefficients;
Nf2 = length( filter2 );

% converto to signed integers, fized point with Nfracbit fraccional bits:
filter2i = int32( round( filter2 * 2^Nfracbits ) );

% Create the hex file for Verilog simulation:
fprintf('Creating hex file %s...\n', coefficients2 );
fp = fopen(coefficients2,'w+');
for i=1:2:Nf2
    % least significant coefficient:
    if ( filter2i(i) >=0 )
      cf0 = int64( filter2i(i) );
    else
      cf0 = int64( 2^Nbits + filter2i(i) );    
    end
    % most significant coefficient:
    if ( filter2i(i+1) >=0 )
      cf1 = int64( filter2i(i+1) );
    else
      cf1 = int64( 2^Nbits + filter2i(i+1) );    
    end
    % pack two coefficients into 18+18 bits:
    fprintf(fp, '%09X\n', int64( int64(cf1 * 2^18) + cf0 ) );    
end
fclose( fp );


%--------------
%-- Filter 3 --
%--------------

f3 = designfilt('lowpassfir', 'FilterOrder', 127, ...
                'CutoffFrequency', 230000, ...
                'SampleRate', Fs );

Ncoefs = length( f3.Coefficients );

% zero padding the missing coefficients to fill the 128 coefficients:         
filter3 = zeros(1, 128);
filter3(1:length(f3.Coefficients) ) = f3.Coefficients;
Nf3 = length( filter3 );

% converto to signed integers, fized point with Nfracbit fraccional bits:
filter3i = int32( round( filter3 * 2^Nfracbits ) );

% Create the hex file for Verilog simulation:
fprintf('Creating hex file %s...\n', coefficients3 );
fp = fopen(coefficients3,'w+');
for i=1:2:Nf3
    % least significant coefficient:
    if ( filter3i(i) >=0 )
      cf0 = int64( filter3i(i) );
    else
      cf0 = int64( 2^Nbits + filter3i(i) );    
    end
    % most significant coefficient:
    if ( filter3i(i+1) >=0 )
      cf1 = int64( filter3i(i+1) );
    else
      cf1 = int64( 2^Nbits + filter3i(i+1) );    
    end
    % pack two coefficients into 18+18 bits:
    fprintf(fp, '%09X\n', int64( int64(cf1 * 2^18) + cf0 ) );    
end
fclose( fp );


%--------------
%-- Filter 4 --
%--------------

f4 = designfilt('highpassfir', 'FilterOrder', 126, ...
'CutoffFrequency', 440000, ...
'StopbandAttenuation', 80, ...
'SampleRate', Fs );

Ncoefs = length( f4.Coefficients );

% zero padding the missing coefficients to fill the 128 coefficients:         
filter4 = zeros(1, 128);
filter4(1:length(f4.Coefficients) ) = f4.Coefficients;
Nf4 = length( filter4 );

% converto to signed integers, fized point with Nfracbit fraccional bits:
filter4i = int32( round( filter4 * 2^Nfracbits ) );

% Create the hex file for Verilog simulation:
fprintf('Creating hex file %s...\n', coefficients4 );
fp = fopen(coefficients4,'w+');
for i=1:2:Nf4
    % least significant coefficient:
    if ( filter4i(i) >=0 )
      cf0 = int64( filter4i(i) );
    else
      cf0 = int64( 2^Nbits + filter4i(i) );    
    end
    % most significant coefficient:
    if ( filter4i(i+1) >=0 )
      cf1 = int64( filter4i(i+1) );
    else
      cf1 = int64( 2^Nbits + filter4i(i+1) );    
    end
    % pack two coefficients into 18+18 bits:
    fprintf(fp, '%09X\n', int64( int64(cf1 * 2^18) + cf0 ) );    
end
fclose( fp );


%--------------
%-- Filter 5 --
%--------------

f5 =  designfilt('bandpassfir', 'FilterOrder', 127, ...
'CutoffFrequency1', 150000, 'CutoffFrequency2', 350000,...
'SampleRate', Fs );

Ncoefs = length( f5.Coefficients );

% zero padding the missing coefficients to fill the 128 coefficients:         
filter5 = zeros(1, 128);
filter5(1:length(f5.Coefficients) ) = f5.Coefficients;
Nf5 = length( filter5 );

% converto to signed integers, fized point with Nfracbit fraccional bits:
filter5i = int32( round( filter5 * 2^Nfracbits ) );

% Create the hex file for Verilog simulation:
fprintf('Creating hex file %s...\n', coefficients5 );
fp = fopen(coefficients5,'w+');
for i=1:2:Nf5
    % least significant coefficient:
    if ( filter5i(i) >=0 )
      cf0 = int64( filter5i(i) );
    else
      cf0 = int64( 2^Nbits + filter5i(i) );    
    end
    % most significant coefficient:
    if ( filter5i(i+1) >=0 )
      cf1 = int64( filter5i(i+1) );
    else
      cf1 = int64( 2^Nbits + filter5i(i+1) );    
    end
    % pack two coefficients into 18+18 bits:
    fprintf(fp, '%09X\n', int64( int64(cf1 * 2^18) + cf0 ) );    
end
fclose( fp );


%--------------
%-- Filter 6 --
%--------------

f6 = designfilt('lowpassfir', 'FilterOrder', 127, ...
'CutoffFrequency', 260000, ...
'SampleRate', Fs );

Ncoefs = length( f6.Coefficients );

% zero padding the missing coefficients to fill the 128 coefficients:         
filter6 = zeros(1, 128);
filter6(1:length(f6.Coefficients) ) = f6.Coefficients;
Nf6 = length( filter6 );

% converto to signed integers, fized point with Nfracbit fraccional bits:
filter6i = int32( round( filter6 * 2^Nfracbits ) );

% Create the hex file for Verilog simulation:
fprintf('Creating hex file %s...\n', coefficients6 );
fp = fopen(coefficients6,'w+');
for i=1:2:Nf6
    % least significant coefficient:
    if ( filter6i(i) >=0 )
      cf0 = int64( filter6i(i) );
    else
      cf0 = int64( 2^Nbits + filter6i(i) );    
    end
    % most significant coefficient:
    if ( filter6i(i+1) >=0 )
      cf1 = int64( filter6i(i+1) );
    else
      cf1 = int64( 2^Nbits + filter6i(i+1) );    
    end
    % pack two coefficients into 18+18 bits:
    fprintf(fp, '%09X\n', int64( int64(cf1 * 2^18) + cf0 ) );    
end
fclose( fp );


%--------------
%-- Filter 7 --
%--------------

f7 = designfilt('highpassfir', 'FilterOrder', 126, ...
'CutoffFrequency', 470000, ...
'StopbandAttenuation', 80, ...
'SampleRate', Fs );

Ncoefs = length( f7.Coefficients );

% zero padding the missing coefficients to fill the 128 coefficients:         
filter7 = zeros(1, 128);
filter7(1:length(f7.Coefficients) ) = f7.Coefficients;
Nf7 = length( filter7 );

% converto to signed integers, fized point with Nfracbit fraccional bits:
filter7i = int32( round( filter7 * 2^Nfracbits ) );

% Create the hex file for Verilog simulation:
fprintf('Creating hex file %s...\n', coefficients7 );
fp = fopen(coefficients7,'w+');
for i=1:2:Nf7
    % least significant coefficient:
    if ( filter7i(i) >=0 )
      cf0 = int64( filter7i(i) );
    else
      cf0 = int64( 2^Nbits + filter7i(i) );    
    end
    % most significant coefficient:
    if ( filter7i(i+1) >=0 )
      cf1 = int64( filter7i(i+1) );
    else
      cf1 = int64( 2^Nbits + filter7i(i+1) );    
    end
    % pack two coefficients into 18+18 bits:
    fprintf(fp, '%09X\n', int64( int64(cf1 * 2^18) + cf0 ) );    
end
fclose( fp );

% Plot the frequency response and the filter impulse response:

% Frequency in MHz
freqs = (1:Ncoefs) / Ncoefs * Fs / 1e3;

figure(1);
subplot(2,1,1);
plot( freqs, 20*log10( abs( fft( filter0(1:Ncoefs) ) ) ) ,'.-' );
hold on;
plot( freqs, 20*log10( abs( fft( double(filter0i(1:Ncoefs)) / 2^Nfracbits ) ) ), '.-'  );
grid on;
axis([0 Fs/2 / 1e3, -100, 10]);
ylabel('Gain (dB)');
xlabel('Frequency (kHz)');
title('Frequency response (abs gain)');
legend( 'original' ,'quantized');
hold off;

subplot(2,1,2);
plot( filter0(1:Ncoefs), '.-');
hold on;
plot( double(filter0i(1:Ncoefs)) / 2^Nfracbits, '.-' );
grid on;
ylabel('Coefficient');
xlabel('Coefficient order');
title('Impulse response');
legend( 'original' ,'quantized');
hold off;
