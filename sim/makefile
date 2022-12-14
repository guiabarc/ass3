default: comp

comp: ../src/verilog-tb/profir_tb.v ../src/verilog-rtl/memory8bank.v ../src/verilog-rtl/filterbank.v
	iverilog -Wall -o ass3 ../src/verilog-tb/profir_tb.v ../src/verilog-rtl/memory8bank.v ../src/verilog-rtl/filterbank.v

run:
	vvp ass3

wave:
	gtkwave mysimdata.vcd

clean:
	rm ass3
	rm mysimdata.vcd
