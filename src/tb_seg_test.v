`timescale 1ns/ 1ns
module tb_seg_test();
//reg define
	reg clk;
	reg reset;
	reg rx;

//wire define
//	wire [31:0] data_out;
//	wire data_valid;
	
initial begin
	clk <= 1'b1;
	reset <= 1'b0;
	rx <= 1'b0;
	#20 
	reset <= 1'b1;
	#1000000 $stop;
end

 initial begin
	 #200
	 rx_bit(8'hFF); //任务的调用，任务名+括号中要传递进任务的参数
	 rx_bit(8'hFF);
	 rx_bit(8'h25);
	 rx_bit(8'h23);
	 rx_bit(8'h51);
	 rx_bit(8'h2F);
 end
 

always #10 clk = ~clk;
	
task rx_bit(
	input [7:0] data 
);

	integer i;
for(i=0; i<10; i=i+1) begin
 case(i)
	 0: rx <= 1'b0;
	 1: rx <= data[0];
	 2: rx <= data[1];
	 3: rx <= data[2];
	 4: rx <= data[3];
	 5: rx <= data[4];
	 6: rx <= data[5];
	 7: rx <= data[6];
	 8: rx <= data[7];
	 9: rx <= 1'b1;
 endcase
 #(434*20); //每发送1位数据延时5208个时钟周期
 end
 endtask
 
seg_test  uart_sge_inst(
	.clk (clk),     
	.rst_n (reset),     
	.rx (rx)  
);
endmodule