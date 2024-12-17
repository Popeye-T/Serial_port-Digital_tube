module seg_test_time (
    input wire clk,
    input wire rst_n,
    input wire [27:0] data_in,
    output reg [3:0] seg0,  // 对应第一个数码管
    output reg [3:0] seg1,  // 对应第二个数码管
    output reg [3:0] seg2,  // 对应第三个数码管
    output reg [3:0] seg3,  // 对应第四个数码管
    output reg [3:0] seg4,  // 对应第五个数码管
    output reg [3:0] seg5,  // 对应第六个数码管
    output reg [3:0] seg6,  // 对应第七个数码管
    output reg [3:0] seg7   // 对应第八个数码管
);
    reg [11:0] data_in_12bit;
	 reg [12:0] data_in_12bit_times_2;
    // 显示逻辑
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            seg0 <= 4'b0;
            seg1 <= 4'b0;
            seg2 <= 4'b0;
            seg3 <= 4'b0;
            seg4 <= 4'b0;
            seg5 <= 4'b0;
            seg6 <= 4'b0;
            seg7 <= 4'b0;
        end else begin
            data_in_12bit <= data_in[3:0]+data_in[7:4]*10+data_in[11:8]*100;
            data_in_12bit_times_2 <= data_in_12bit * 2;
	
            seg0 <= (data_in_12bit_times_2 % 10);
            seg1 <= (data_in_12bit_times_2 / 10) % 10;
            seg2 <= (data_in_12bit_times_2 / 100) % 10;
            seg3 <= (data_in_12bit_times_2 / 1000) ;
            seg4 <= data_in[15:12];
            seg5 <= data_in[19:16];
            seg6 <= data_in[23:20];
            seg7 <= data_in[27:24];
        end
    end
endmodule
