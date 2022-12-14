onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /profir_tb/clock
add wave -noupdate /profir_tb/reset
add wave -noupdate /profir_tb/Csamples
add wave -noupdate -radix decimal /profir_tb/datain
add wave -noupdate -format Analog-Step -height 120 -max 32800.0 -min -32800.0 -radix decimal /profir_tb/datain
add wave -noupdate /profir_tb/datain_en
add wave -noupdate -radix decimal /profir_tb/goldendataout
add wave -noupdate -format Analog-Step -height 120 -max 32800.0 -min -32800.0 -radix decimal /profir_tb/goldendataout
add wave -noupdate -radix decimal /profir_tb/dataout0
add wave -noupdate -radix decimal /profir_tb/dataout1
add wave -noupdate -radix decimal /profir_tb/dataout2
add wave -noupdate -radix decimal /profir_tb/dataout3
add wave -noupdate -radix decimal /profir_tb/dataout4
add wave -noupdate -radix decimal /profir_tb/dataout5
add wave -noupdate -radix decimal /profir_tb/dataout6
add wave -noupdate -radix decimal /profir_tb/dataout7
add wave -noupdate -radix unsigned -radixshowbase 0 /profir_tb/read_address
add wave -noupdate /profir_tb/data0
add wave -noupdate /profir_tb/data1
add wave -noupdate /profir_tb/data2
add wave -noupdate /profir_tb/data3
add wave -noupdate /profir_tb/data4
add wave -noupdate /profir_tb/data5
add wave -noupdate /profir_tb/data6
add wave -noupdate /profir_tb/data7
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {100004279253 ps} 0} {{Cursor 2} {99358188 ps} 0}
quietly wave cursor active 2
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ps
update
WaveRestoreZoom {0 ps} {1054697700 ps}
