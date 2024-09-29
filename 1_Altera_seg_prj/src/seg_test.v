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
//assign seg_data_0 = 7'b111_0000;
wire clk_100MHz;
wire locked;
wire rst1_n ;
wire ens;
wire [31:0] data_out;
wire data_valid;
reg [31:0] alter_num;
reg[31:0] timer_cnt;
reg en_2000hz;                          //1 second , 1 counter enable

assign rst1_n = (rst_n & locked);

always@(posedge clk_100MHz or negedge rst1_n)
	begin
		if(rst1_n == 1'b0)
			alter_num <= 32'd0;
		else
			alter_num <= (100_000_000/data_out) - 1; 
	end

always@(posedge clk_100MHz or negedge rst1_n)
begin
    if(rst1_n == 1'b0)
    begin
        en_2000hz <= 1'b0;
        timer_cnt <= 32'd0;
    end
    else if(timer_cnt >= alter_num)//24999——计数频率2k=50M/(24999+1)
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

gen_clk	gen_clk_inst (
	.areset ( ~rst_n ),
	.inclk0 ( clk ),
	.c0 ( clk_100MHz ),
	.locked ( locked )
	);

uart_seg uart_seg_inst(
		.clk         (clk_100MHz),        
		.reset       (rst1_n),       
		.rx          (rx),           
		.data_out    (data_out),  
		.data_valid  (data_valid) 
);


//wire[3:0] count00;
//wire t00;
//count_m10 count10_m00(
//    .clk    (clk),
//    .rst_n  (rst_n),
//    .en     (en0),
//    .clr    (1'b0),
//    .data   (count00),
//    .t      (t00)
// );

//assign en_2000hz=en0&&count00==9;
wire[3:0] count0;
wire t0;
count_m10 count10_m0(
    .clk    (clk_100MHz),
    .rst_n  (rst1_n),
    .en     (en_2000hz),
    .clr    (1'b0),
    .data   (count0),
    .t      (t0)
 );

assign en1=en_2000hz&&count0==9;
wire[3:0] count1;
wire t1;
count_m10 count10_m1(
     .clk    (clk_100MHz),
     .rst_n  (rst1_n),
     .en     (en1),
     .clr    (1'b0),
     .data   (count1),
     .t      (t1)
 );


assign en2=en1&&count1==9;
wire[3:0] count2;
wire t2;
count_m10 count10_m2(
    .clk   (clk_100MHz),
    .rst_n (rst1_n),
    .en    (en2),
    .clr   (1'b0),
    .data  (count2),
    .t     (t2)
);

assign en3=en2&&count2==9;
wire[3:0] count3;
wire t3;
count_m10 count10_m3(
    .clk   (clk_100MHz),
    .rst_n (rst1_n),
    .en    (en3),
    .clr   (1'b0),
    .data  (count3),
    .t     (t3)
);

assign en4=en3&&count3==9;
wire[3:0] count4;
wire t4;
count_m10 count10_m4(
    .clk   (clk_100MHz),
    .rst_n (rst1_n),
    .en    (en4),
    .clr   (1'b0),
    .data  (count4),
    .t     (t4)
);

assign en5=en4&&count4==9;
wire[3:0] count5;
wire t5;
count_m10 count10_m5(
    .clk   (clk_100MHz),
    .rst_n (rst1_n),
    .en    (en5),
    .clr   (1'b0),
    .data  (count5),
    .t     (t5)
);

assign en6=en5&&count5==9;
wire[3:0] count6;
wire t6;
count_m10 count10_m6(
    .clk   (clk_100MHz),
    .rst_n (rst1_n),
    .en    (en6),
    .clr   (1'b0),
    .data  (count6),
    .t     (t6)
);

assign en7=en6&&count6==9;
wire[3:0] count7;
wire t7;
count_m10 count10_m7(
    .clk   (clk_100MHz),
    .rst_n (rst1_n),
    .en    (en7),
    .clr   (1'b0),
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