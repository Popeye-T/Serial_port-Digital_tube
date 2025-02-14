module uart_seg(
    input wire clk,          // 时钟信号
    input wire reset,        // 重置信号
    input wire rx,           // 接收引脚
    output reg [27:0] data_out_1,  // 转换后的二进制时间数据输出
//    output reg [23:0] data_out_2,  // 转换后的二进制频率数据输出
    output reg data_valid   // 数据有效标志
);
    // 状态机状态定义
    localparam IDLE          = 2'b00;
    localparam RECEIVING_1   = 2'b01;
//    localparam RECEIVING_2   = 2'b10;
    localparam DONE        = 2'b11;
    localparam frame_head = 16'hFFFF;   // 帧头
//    localparam frame_tail = 16'h0000;   // 帧尾

    reg [1:0] state;             // 当前状态
    reg [27:0] data_sum_1;            // 累加接收到的时间二进制数据
//    reg [23:0] data_sum_2;            // 累加接收到的频率二进制数据

    wire [7:0] rx_data;
    wire rx_data_ready;

    reg [15:0] temp_frame_head = 16'h0000;   // 用于存储接收到的帧头
	 reg [2:0] rx_cnt_1 = 3'b000;               // 用于计数接收的时间有效值
 //   reg [2:0] rx_cnt_2 = 3'b000;               // 用于计数接收的频率有效值

//    reg [15:0] temp_frame_tail = 16'hFFFF;   // 用于存储接收到的帧尾

    // 实例化 UART 接收模块
    uart_rx uart_rx_inst (
        .sys_clk(clk),
        .sys_rst_n(reset),
        .rx(rx),
        .po_data(rx_data),
        .po_flag(rx_data_ready)
    );

    always @(posedge clk or negedge reset) begin
        if (!reset) begin
            state <= IDLE;
            data_sum_1 <= 0;
           // data_sum_2 <= 0;
            data_valid <= 0;
			data_out_1 <= 0;
           // data_out_2 <= 0;
			rx_cnt_1 <= 'd0;
            //rx_cnt_2 <= 'd0;
            temp_frame_head <= 16'h0000;
//          temp_frame_tail <= 16'hFFFF;
        end else begin
            case (state)
                IDLE: begin
                    data_valid <= 0;
                    if (rx_data_ready) begin
                        // 检测帧头（完整的 16 位）
                        temp_frame_head <= {temp_frame_head[7:0], rx_data}; // 逐字节拼接
                    end						  
						  if (temp_frame_head == frame_head) begin
							 // 帧头匹配成功
							 state <= RECEIVING_1;
							 data_sum_1 <= 0;
                            // data_sum_2 <= 0;
									  temp_frame_head <= 16'h0000;
							end
                end
               RECEIVING_1: begin
                    data_valid <= 0;
                    if (rx_data_ready) begin
                        if (rx_cnt_1 != 3) begin
                            data_sum_1 <= (data_sum_1 << 8) | rx_data; // 传输数据
                            rx_cnt_1 <= rx_cnt_1 + 1'b1;
                        end else if (rx_cnt_1 == 3) begin
                            data_sum_1 <= (data_sum_1 << 4) | rx_data[7:4];
                            rx_cnt_1 <= 'd0;
                            state <= DONE;
                        end
                    end
                end
/*
					RECEIVING_2: begin
                    data_valid <= 0;
                    if (rx_data_ready) begin
                        if (rx_cnt_2 != 2) begin
                            data_sum_2 <= (data_sum_2 << 8) | rx_data; // 传输数据
                            rx_cnt_2 <= rx_cnt_2 + 1'b1;
                        end else if (rx_cnt_2 == 2) begin
								    data_sum_2 <= (data_sum_2 << 8) | rx_data; 
                            rx_cnt_2 <= 'd0;
									 state <= DONE;
                        end
                    end
                end
*/
//                RECEIVING: begin
//							temp_frame_head <= 16'h0000;
//                    if (rx_data_ready&&(temp_frame_tail != frame_tail)) begin
//                        // 检测帧尾（完整的 16 位）
//                        temp_frame_tail <= {temp_frame_tail[7:0], rx_data}; // 逐字节拼接
//								data_sum <= (data_sum << 8) | rx_data;//传输数据
//                        state <= state;
//                    end
//						  
//						 else if (temp_frame_tail == frame_tail) begin
//									 // 帧尾匹配成功，接收完成
//									 state <= DONE;
//				
//								end
//						 else begin
//							 data_sum <= data_sum;
//							 state <= state;
//							 end
//						end

						 DONE: begin
//								temp_frame_tail <= 16'hFFFF;
							   data_out_1 <= data_sum_1;  // 输出最终的累积时间结果
//                               data_out_2 <= data_sum_2; //输出最终累计的频率计数结果
							   data_valid <= 1;
							   state <= IDLE;
						end
            endcase
        end
    end
endmodule