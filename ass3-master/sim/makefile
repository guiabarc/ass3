default: comp

comp: ../src/verilog-tb/profir_tb.v ../src/verilog-rtl/memory8bank.v ../src/verilog-rtl/filterbank.v
	rm ass3 | iverilog -Wall -o ass3 ../src/verilog-tb/profir_tb.v ../src/verilog-rtl/memory8bank.v ../src/verilog-rtl/filterbank.v
	vvp ass3

run:
	vvp ass3

wave:
	gtkwave mysimdata.vcd

clean:
	rm ass3
	rm mysimdata.vcd
