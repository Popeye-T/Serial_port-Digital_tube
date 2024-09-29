transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -vlog01compat -work work +incdir+C:/Verilog/quartus/uart_seg_f/seg_test_f\ _t/src {C:/Verilog/quartus/uart_seg_f/seg_test_f _t/src/seg_test.v}
vlog -vlog01compat -work work +incdir+C:/Verilog/quartus/uart_seg_f/seg_test_f\ _t/src {C:/Verilog/quartus/uart_seg_f/seg_test_f _t/src/seg_decoder.v}
vlog -vlog01compat -work work +incdir+C:/Verilog/quartus/uart_seg_f/seg_test_f\ _t/src {C:/Verilog/quartus/uart_seg_f/seg_test_f _t/src/count_m10.v}
vlog -vlog01compat -work work +incdir+C:/Verilog/quartus/uart_seg_f/seg_test_f\ _t/src {C:/Verilog/quartus/uart_seg_f/seg_test_f _t/src/uart_rx.v}
vlog -vlog01compat -work work +incdir+C:/Verilog/quartus/uart_seg_f/seg_test_f\ _t/src {C:/Verilog/quartus/uart_seg_f/seg_test_f _t/src/uart_seg.v}
vlog -vlog01compat -work work +incdir+C:/Verilog/quartus/uart_seg_f/seg_test_f\ _t {C:/Verilog/quartus/uart_seg_f/seg_test_f _t/gen_clk.v}
vlog -vlog01compat -work work +incdir+C:/Verilog/quartus/uart_seg_f/seg_test_f\ _t/db {C:/Verilog/quartus/uart_seg_f/seg_test_f _t/db/gen_clk_altpll.v}

vlog -vlog01compat -work work +incdir+C:/Verilog/quartus/uart_seg_f/seg_test_f\ _t/src {C:/Verilog/quartus/uart_seg_f/seg_test_f _t/src/tb_seg_test.v}

vsim -t 1ps -L altera_ver -L lpm_ver -L sgate_ver -L altera_mf_ver -L altera_lnsim_ver -L cycloneive_ver -L rtl_work -L work -voptargs="+acc"  tb_seg_test

add wave *
view structure
view signals
run -all
