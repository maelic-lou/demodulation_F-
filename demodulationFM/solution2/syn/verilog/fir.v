// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fir (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        x_V_address0,
        x_V_ce0,
        x_V_q0,
        y_V_address0,
        y_V_ce0,
        y_V_we0,
        y_V_d0
);

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_state7 = 8'd64;
parameter    ap_ST_fsm_state8 = 8'd128;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [16:0] x_V_address0;
output   x_V_ce0;
input  [31:0] x_V_q0;
output  [16:0] y_V_address0;
output   y_V_ce0;
output   y_V_we0;
output  [31:0] y_V_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[16:0] x_V_address0;
reg x_V_ce0;
reg[16:0] y_V_address0;
reg y_V_ce0;
reg y_V_we0;
reg[31:0] y_V_d0;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [4:0] coef_address0;
reg    coef_ce0;
wire   [11:0] coef_q0;
wire   [4:0] j_fu_186_p2;
reg   [4:0] j_reg_292;
wire    ap_CS_fsm_state2;
wire   [63:0] zext_ln41_fu_192_p1;
reg   [63:0] zext_ln41_reg_297;
wire   [0:0] icmp_ln39_fu_180_p2;
wire   [63:0] zext_ln46_fu_203_p1;
reg   [63:0] zext_ln46_reg_311;
wire    ap_CS_fsm_state4;
wire   [0:0] icmp_ln44_fu_197_p2;
reg   [31:0] in_val_V_reg_321;
wire    ap_CS_fsm_state5;
wire   [4:0] i_fu_214_p2;
reg   [4:0] i_reg_329;
wire    ap_CS_fsm_state6;
wire   [63:0] zext_ln49_fu_220_p1;
reg   [63:0] zext_ln49_reg_334;
wire   [0:0] icmp_ln48_fu_208_p2;
wire   [0:0] icmp_ln49_fu_225_p2;
reg   [0:0] icmp_ln49_reg_339;
wire   [16:0] l_fu_236_p2;
wire  signed [31:0] select_ln49_fu_242_p3;
reg  signed [31:0] select_ln49_reg_359;
wire    ap_CS_fsm_state7;
reg   [11:0] coef_load_reg_364;
wire    ap_CS_fsm_state8;
reg   [4:0] hwin_V_address0;
reg    hwin_V_ce0;
reg    hwin_V_we0;
reg   [31:0] hwin_V_d0;
wire   [31:0] hwin_V_q0;
reg   [4:0] j_0_reg_133;
wire    ap_CS_fsm_state3;
reg   [16:0] l_0_reg_144;
reg   [31:0] p_Val2_s_reg_156;
reg   [4:0] i_0_reg_169;
wire   [63:0] zext_ln49_1_fu_231_p1;
wire   [11:0] r_V_fu_255_p0;
wire  signed [31:0] r_V_fu_255_p1;
wire   [43:0] r_V_fu_255_p2;
wire  signed [47:0] sext_ln1192_fu_269_p1;
wire   [47:0] lhs_V_fu_261_p3;
wire   [47:0] ret_V_fu_273_p2;
reg   [7:0] ap_NS_fsm;
wire   [43:0] r_V_fu_255_p00;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
end

fir_coef #(
    .DataWidth( 12 ),
    .AddressRange( 31 ),
    .AddressWidth( 5 ))
coef_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(coef_address0),
    .ce0(coef_ce0),
    .q0(coef_q0)
);

fir_hwin_V #(
    .DataWidth( 32 ),
    .AddressRange( 31 ),
    .AddressWidth( 5 ))
hwin_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(hwin_V_address0),
    .ce0(hwin_V_ce0),
    .we0(hwin_V_we0),
    .d0(hwin_V_d0),
    .q0(hwin_V_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        i_0_reg_169 <= i_reg_329;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        i_0_reg_169 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_0_reg_133 <= j_reg_292;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        j_0_reg_133 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln39_fu_180_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        l_0_reg_144 <= 17'd31;
    end else if (((icmp_ln48_fu_208_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        l_0_reg_144 <= l_fu_236_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        p_Val2_s_reg_156 <= {{ret_V_fu_273_p2[47:16]}};
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        p_Val2_s_reg_156 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        coef_load_reg_364 <= coef_q0;
        select_ln49_reg_359 <= select_ln49_fu_242_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_reg_329 <= i_fu_214_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln48_fu_208_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        icmp_ln49_reg_339 <= icmp_ln49_fu_225_p2;
        zext_ln49_reg_334[4 : 0] <= zext_ln49_fu_220_p1[4 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        in_val_V_reg_321 <= x_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        j_reg_292 <= j_fu_186_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln39_fu_180_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        zext_ln41_reg_297[4 : 0] <= zext_ln41_fu_192_p1[4 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln44_fu_197_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        zext_ln46_reg_311[16 : 0] <= zext_ln46_fu_203_p1[16 : 0];
    end
end

always @ (*) begin
    if ((((icmp_ln44_fu_197_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln44_fu_197_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        coef_ce0 = 1'b1;
    end else begin
        coef_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        hwin_V_address0 = zext_ln49_reg_334;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        hwin_V_address0 = zext_ln49_1_fu_231_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        hwin_V_address0 = zext_ln41_reg_297;
    end else begin
        hwin_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state7))) begin
        hwin_V_ce0 = 1'b1;
    end else begin
        hwin_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        hwin_V_d0 = select_ln49_fu_242_p3;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        hwin_V_d0 = x_V_q0;
    end else begin
        hwin_V_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state7))) begin
        hwin_V_we0 = 1'b1;
    end else begin
        hwin_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        x_V_address0 = zext_ln46_fu_203_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        x_V_address0 = zext_ln41_fu_192_p1;
    end else begin
        x_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state2))) begin
        x_V_ce0 = 1'b1;
    end else begin
        x_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        y_V_address0 = zext_ln46_reg_311;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        y_V_address0 = zext_ln41_reg_297;
    end else begin
        y_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state3))) begin
        y_V_ce0 = 1'b1;
    end else begin
        y_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        y_V_d0 = p_Val2_s_reg_156;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        y_V_d0 = x_V_q0;
    end else begin
        y_V_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | ((icmp_ln48_fu_208_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6)))) begin
        y_V_we0 = 1'b1;
    end else begin
        y_V_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln39_fu_180_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state4 : begin
            if (((icmp_ln44_fu_197_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            if (((icmp_ln48_fu_208_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign coef_address0 = zext_ln49_fu_220_p1;

assign i_fu_214_p2 = (i_0_reg_169 + 5'd1);

assign icmp_ln39_fu_180_p2 = ((j_0_reg_133 == 5'd31) ? 1'b1 : 1'b0);

assign icmp_ln44_fu_197_p2 = ((l_0_reg_144 == 17'd100000) ? 1'b1 : 1'b0);

assign icmp_ln48_fu_208_p2 = ((i_0_reg_169 == 5'd31) ? 1'b1 : 1'b0);

assign icmp_ln49_fu_225_p2 = ((i_0_reg_169 < 5'd30) ? 1'b1 : 1'b0);

assign j_fu_186_p2 = (j_0_reg_133 + 5'd1);

assign l_fu_236_p2 = (l_0_reg_144 + 17'd1);

assign lhs_V_fu_261_p3 = {{p_Val2_s_reg_156}, {16'd0}};

assign r_V_fu_255_p0 = r_V_fu_255_p00;

assign r_V_fu_255_p00 = coef_load_reg_364;

assign r_V_fu_255_p1 = select_ln49_reg_359;

assign r_V_fu_255_p2 = ($signed({{1'b0}, {r_V_fu_255_p0}}) * $signed(r_V_fu_255_p1));

assign ret_V_fu_273_p2 = ($signed(sext_ln1192_fu_269_p1) + $signed(lhs_V_fu_261_p3));

assign select_ln49_fu_242_p3 = ((icmp_ln49_reg_339[0:0] === 1'b1) ? hwin_V_q0 : in_val_V_reg_321);

assign sext_ln1192_fu_269_p1 = $signed(r_V_fu_255_p2);

assign zext_ln41_fu_192_p1 = j_0_reg_133;

assign zext_ln46_fu_203_p1 = l_0_reg_144;

assign zext_ln49_1_fu_231_p1 = i_fu_214_p2;

assign zext_ln49_fu_220_p1 = i_0_reg_169;

always @ (posedge ap_clk) begin
    zext_ln41_reg_297[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    zext_ln46_reg_311[63:17] <= 47'b00000000000000000000000000000000000000000000000;
    zext_ln49_reg_334[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
end

endmodule //fir
