//扫描频率在seg_scan文件
module seg_test(
                input      clk,
                input      rst_n,
					 input      rx,
                // output[7:0]seg_sel,
                // output[7:0]seg_data
                output [6:0]seg_data_0,
                output [6:0]seg_data_1,
                output [6:0]seg_data_2,
                output [6:0]seg_data_3,
                output [6:0]seg_data_4,
                output [6:0]seg_data_5,
                output [6:0]seg_data_6,
                output [6:0]seg_data_7
                );
//assign seg_data_0 = 7'b111_0110;
reg[31:0] timer_cnt;
reg en_2000hz;                          //1 second , 1 counter enable
reg flag;
//wire ens;
wire [27:0] data_out_1;
//wire [23:0] data_out_2;
wire data_valid;
wire [3:0] set0;
wire [3:0] set1;
wire [3:0] set2;
wire [3:0] set3;
wire [3:0] set4;
wire [3:0] set5;
wire [3:0] set6;
wire [3:0] set7;

//reg [31:0] alter_num;

always@(posedge clk or negedge rst_n)
	if(rst_n == 1'b0)
		flag <= 1'b0;
	else
		flag <= data_valid;
/*
always@(posedge clk or negedge rst_n)
	begin
		if(rst_n == 1'b0)
			alter_num <= 32'd49999;
		else if(data_valid)
			alter_num <= (50_000/data_out_2) - 1; 
		else
			alter_num <= alter_num;
	end
*/
always@(posedge clk or negedge rst_n)
begin
    if(rst_n == 1'b0)
    begin
        en_2000hz <= 1'b0;
        timer_cnt <= 32'd0;
    end
    else if(timer_cnt >= 24999)//24999——计数频率2k=50M/(24999+1)
    begin
        en_2000hz <= 1'b1;
        timer_cnt <= 32'd0;
    end
    else
    begin
        en_2000hz <= 1'b0;
        timer_cnt <= timer_cnt + 32'd1; 
    end
end

uart_seg uart_seg_inst(
		.clk           (clk),        
		.reset         (rst_n),       
		.rx            (rx),           
		.data_out_1    (data_out_1),
//        .data_out_2    (data_out_2),  
		.data_valid    (data_valid) 
);
seg_test_time seg_test_time_inst(
        .clk            (clk),
        .rst_n          (rst_n),
        .data_in        (data_out_1),
        .seg0           (set0),
        .seg1           (set1),  // 对应第一个数码管
        .seg2           (set2),  // 对应第二个数码管
        .seg3           (set3),  // 对应第三个数码管
        .seg4           (set4),  // 对应第四个数码管
        .seg5           (set5),  // 对应第五个数码管
        .seg6           (set6),  // 对应第六个数码管
        .seg7           (set7)   // 对应第七个数码管
);
//seg_test_time seg_test_time_inst(
//    .clk(clk),               // 时钟信号
//   .rst_n(rst_n),             // 复位信号，低有效
//    .data_in(data_out_1),    // 串口模块接收到的28位数据
//    .seg({seg_data_7,seg_data_6,seg_data_5,seg_data_4,seg_data_3,seg_data_2,seg_data_1})    // 7位段选控制信号数组，控制每个数码管的显示
//);





wire[3:0] count0;
wire t0;
count_m10 count10_m0(
    .clk    (clk),
    .rst_n  (rst_n),
    .en     (en_2000hz),
    .clr    (1'b0),
    .set    (set0),
	.flag   (flag),
    .data   (count0),
    .t      (t0)
 );

assign en1=en_2000hz&&count0==9;
wire[3:0] count1;
wire t1;
count_m10 count10_m1(
     .clk    (clk),
     .rst_n  (rst_n),
     .en     (en1),
     .clr    (1'b0),
	  .set    (set1),
	  .flag   (flag),
     .data   (count1),
     .t      (t1)
 );


assign en2=en1&&count1==9;
wire[3:0] count2;
wire t2;
count_m10 count10_m2(
    .clk   (clk),
    .rst_n (rst_n),
    .en    (en2),
    .clr   (1'b0),
	 .set    (set2),
	 .flag   (flag),
    .data  (count2),
    .t     (t2)
);

assign en3=en2&&count2==9;
wire[3:0] count3;
wire t3;
count_m2 count10_m3(
    .clk   (clk),
    .rst_n (rst_n),
    .en    (en3),
    .clr   (1'b0),
	 .set    (set3),
	 .flag   (flag),
    .data  (count3),
    .t     (t3)
);

assign en4=en3&&count3==1;
wire[3:0] count4;
wire t4;
count_m10 count10_m4(
    .clk   (clk),
    .rst_n (rst_n),
    .en    (en4),
    .clr   (1'b0),
	 .set    (set4),
	 .flag   (flag),
    .data  (count4),
    .t     (t4)
);

assign en5=en4&&count4==9;
wire[3:0] count5;
wire t5;
count_m6 count10_m5(
    .clk   (clk),
    .rst_n (rst_n),
    .en    (en5),
    .clr   (1'b0),
	 .set    (set5),
	 .flag   (flag),
    .data  (count5),
    .t     (t5)
);

assign en6=en5&&count5==5;
wire[3:0] count6;
wire t6;
count_m10 count10_m6(
    .clk   (clk),
    .rst_n (rst_n),
    .en    (en6),
    .clr   (1'b0),
	 .set    (set6),
	 .flag   (flag),
    .data  (count6),
    .t     (t6)
);

assign en7=en6&&count6==9;
wire[3:0] count7;
wire t7;
count_m6 count10_m7(
    .clk   (clk),
    .rst_n (rst_n),
    .en    (en7),
    .clr   (1'b0),
	 .set    (set7),
	 .flag   (flag),
    .data  (count7),
    .t     (t7)
);

// wire[6:0] seg_data_0;

seg_decoder seg_decoder_m0(
    .bin_data  (count0),
    .seg_data  (seg_data_0)
);

// wire[6:0] seg_data_1;
seg_decoder seg_decoder_m1(
    .bin_data  (count1),
    .seg_data  (seg_data_1)
);
// wire[6:0] seg_data_2;
seg_decoder seg_decoder_m2(
    .bin_data  (count2),
    .seg_data  (seg_data_2)
);
// wire[6:0] seg_data_3;
seg_decoder seg_decoder_m3(
    .bin_data  (count3),
    .seg_data  (seg_data_3)
);
// wire[6:0] seg_data_4;
seg_decoder seg_decoder_m4(
    .bin_data  (count4),
    .seg_data  (seg_data_4)
);

// wire[6:0] seg_data_5;
seg_decoder seg_decoder_m5(
    .bin_data  (count5),
    .seg_data  (seg_data_5)
);

// wire[6:0] seg_data_6;
seg_decoder seg_decoder_m6(
    .bin_data  (count6),
    .seg_data  (seg_data_6)
);

// wire[6:0] seg_data_7;
seg_decoder seg_decoder_m7(
    .bin_data  (count7),
    .seg_data  (seg_data_7)
);

// seg_scan seg_scan_m0(
//     .clk        (clk),
//     .rst_n      (rst_n),
//     .seg_sel    (seg_sel),
//     .seg_data   (seg_data),
//     .seg_data_0 ({1'b1,seg_data_0}),      //The  decimal point at the highest bit,and low level effecitve
//     .seg_data_1 ({1'b1,seg_data_1}), 
//     .seg_data_2 ({1'b1,seg_data_2}),
//     .seg_data_3 ({1'b1,seg_data_3}),
//     .seg_data_4 ({1'b1,seg_data_4}),
//     .seg_data_5 ({1'b1,seg_data_5}),
//     .seg_data_6 ({1'b1,seg_data_6}),
//     .seg_data_7 ({1'b1,seg_data_7})
// );

endmodule 