// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "fir.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic fir::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic fir::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> fir::ap_ST_fsm_state1 = "1";
const sc_lv<8> fir::ap_ST_fsm_state2 = "10";
const sc_lv<8> fir::ap_ST_fsm_state3 = "100";
const sc_lv<8> fir::ap_ST_fsm_state4 = "1000";
const sc_lv<8> fir::ap_ST_fsm_state5 = "10000";
const sc_lv<8> fir::ap_ST_fsm_state6 = "100000";
const sc_lv<8> fir::ap_ST_fsm_state7 = "1000000";
const sc_lv<8> fir::ap_ST_fsm_state8 = "10000000";
const sc_lv<32> fir::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> fir::ap_const_lv32_1 = "1";
const sc_lv<1> fir::ap_const_lv1_0 = "0";
const sc_lv<32> fir::ap_const_lv32_3 = "11";
const sc_lv<32> fir::ap_const_lv32_4 = "100";
const sc_lv<32> fir::ap_const_lv32_5 = "101";
const sc_lv<1> fir::ap_const_lv1_1 = "1";
const sc_lv<32> fir::ap_const_lv32_6 = "110";
const sc_lv<32> fir::ap_const_lv32_7 = "111";
const sc_lv<5> fir::ap_const_lv5_0 = "00000";
const sc_lv<32> fir::ap_const_lv32_2 = "10";
const sc_lv<17> fir::ap_const_lv17_1F = "11111";
const sc_lv<5> fir::ap_const_lv5_1F = "11111";
const sc_lv<5> fir::ap_const_lv5_1 = "1";
const sc_lv<17> fir::ap_const_lv17_186A0 = "11000011010100000";
const sc_lv<5> fir::ap_const_lv5_1E = "11110";
const sc_lv<17> fir::ap_const_lv17_1 = "1";
const sc_lv<16> fir::ap_const_lv16_0 = "0000000000000000";
const sc_lv<32> fir::ap_const_lv32_10 = "10000";
const sc_lv<32> fir::ap_const_lv32_2F = "101111";
const bool fir::ap_const_boolean_1 = true;

fir::fir(sc_module_name name) : sc_module(name), mVcdFile(0) {
    coef_U = new fir_coef("coef_U");
    coef_U->clk(ap_clk);
    coef_U->reset(ap_rst);
    coef_U->address0(coef_address0);
    coef_U->ce0(coef_ce0);
    coef_U->q0(coef_q0);
    hwin_V_U = new fir_hwin_V("hwin_V_U");
    hwin_V_U->clk(ap_clk);
    hwin_V_U->reset(ap_rst);
    hwin_V_U->address0(hwin_V_address0);
    hwin_V_U->ce0(hwin_V_ce0);
    hwin_V_U->we0(hwin_V_we0);
    hwin_V_U->d0(hwin_V_d0);
    hwin_V_U->q0(hwin_V_q0);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln44_fu_197_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln44_fu_197_p2 );

    SC_METHOD(thread_coef_address0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( zext_ln49_fu_220_p1 );

    SC_METHOD(thread_coef_ce0);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_hwin_V_address0);
    sensitive << ( zext_ln41_reg_297 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( zext_ln49_reg_334 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln49_1_fu_231_p1 );

    SC_METHOD(thread_hwin_V_ce0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_hwin_V_d0);
    sensitive << ( x_V_q0 );
    sensitive << ( select_ln49_fu_242_p3 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_hwin_V_we0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_i_fu_214_p2);
    sensitive << ( i_0_reg_169 );

    SC_METHOD(thread_icmp_ln39_fu_180_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( j_0_reg_133 );

    SC_METHOD(thread_icmp_ln44_fu_197_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( l_0_reg_144 );

    SC_METHOD(thread_icmp_ln48_fu_208_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( i_0_reg_169 );

    SC_METHOD(thread_icmp_ln49_fu_225_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln48_fu_208_p2 );
    sensitive << ( i_0_reg_169 );

    SC_METHOD(thread_j_fu_186_p2);
    sensitive << ( j_0_reg_133 );

    SC_METHOD(thread_l_fu_236_p2);
    sensitive << ( l_0_reg_144 );

    SC_METHOD(thread_lhs_V_fu_261_p3);
    sensitive << ( p_Val2_s_reg_156 );

    SC_METHOD(thread_r_V_fu_255_p0);
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( r_V_fu_255_p00 );

    SC_METHOD(thread_r_V_fu_255_p00);
    sensitive << ( coef_load_reg_364 );

    SC_METHOD(thread_r_V_fu_255_p1);
    sensitive << ( select_ln49_reg_359 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_r_V_fu_255_p2);
    sensitive << ( r_V_fu_255_p0 );
    sensitive << ( r_V_fu_255_p1 );

    SC_METHOD(thread_ret_V_fu_273_p2);
    sensitive << ( sext_ln1192_fu_269_p1 );
    sensitive << ( lhs_V_fu_261_p3 );

    SC_METHOD(thread_select_ln49_fu_242_p3);
    sensitive << ( in_val_V_reg_321 );
    sensitive << ( icmp_ln49_reg_339 );
    sensitive << ( hwin_V_q0 );

    SC_METHOD(thread_sext_ln1192_fu_269_p1);
    sensitive << ( r_V_fu_255_p2 );

    SC_METHOD(thread_x_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln41_fu_192_p1 );
    sensitive << ( zext_ln46_fu_203_p1 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_x_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_y_V_address0);
    sensitive << ( zext_ln41_reg_297 );
    sensitive << ( zext_ln46_reg_311 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_y_V_ce0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_y_V_d0);
    sensitive << ( x_V_q0 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( p_Val2_s_reg_156 );

    SC_METHOD(thread_y_V_we0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln48_fu_208_p2 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_zext_ln41_fu_192_p1);
    sensitive << ( j_0_reg_133 );

    SC_METHOD(thread_zext_ln46_fu_203_p1);
    sensitive << ( l_0_reg_144 );

    SC_METHOD(thread_zext_ln49_1_fu_231_p1);
    sensitive << ( i_fu_214_p2 );

    SC_METHOD(thread_zext_ln49_fu_220_p1);
    sensitive << ( i_0_reg_169 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln39_fu_180_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln44_fu_197_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln48_fu_208_p2 );

    ap_CS_fsm = "00000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "fir_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, x_V_address0, "(port)x_V_address0");
    sc_trace(mVcdFile, x_V_ce0, "(port)x_V_ce0");
    sc_trace(mVcdFile, x_V_q0, "(port)x_V_q0");
    sc_trace(mVcdFile, y_V_address0, "(port)y_V_address0");
    sc_trace(mVcdFile, y_V_ce0, "(port)y_V_ce0");
    sc_trace(mVcdFile, y_V_we0, "(port)y_V_we0");
    sc_trace(mVcdFile, y_V_d0, "(port)y_V_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, coef_address0, "coef_address0");
    sc_trace(mVcdFile, coef_ce0, "coef_ce0");
    sc_trace(mVcdFile, coef_q0, "coef_q0");
    sc_trace(mVcdFile, j_fu_186_p2, "j_fu_186_p2");
    sc_trace(mVcdFile, j_reg_292, "j_reg_292");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, zext_ln41_fu_192_p1, "zext_ln41_fu_192_p1");
    sc_trace(mVcdFile, zext_ln41_reg_297, "zext_ln41_reg_297");
    sc_trace(mVcdFile, icmp_ln39_fu_180_p2, "icmp_ln39_fu_180_p2");
    sc_trace(mVcdFile, zext_ln46_fu_203_p1, "zext_ln46_fu_203_p1");
    sc_trace(mVcdFile, zext_ln46_reg_311, "zext_ln46_reg_311");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, icmp_ln44_fu_197_p2, "icmp_ln44_fu_197_p2");
    sc_trace(mVcdFile, in_val_V_reg_321, "in_val_V_reg_321");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, i_fu_214_p2, "i_fu_214_p2");
    sc_trace(mVcdFile, i_reg_329, "i_reg_329");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, zext_ln49_fu_220_p1, "zext_ln49_fu_220_p1");
    sc_trace(mVcdFile, zext_ln49_reg_334, "zext_ln49_reg_334");
    sc_trace(mVcdFile, icmp_ln48_fu_208_p2, "icmp_ln48_fu_208_p2");
    sc_trace(mVcdFile, icmp_ln49_fu_225_p2, "icmp_ln49_fu_225_p2");
    sc_trace(mVcdFile, icmp_ln49_reg_339, "icmp_ln49_reg_339");
    sc_trace(mVcdFile, l_fu_236_p2, "l_fu_236_p2");
    sc_trace(mVcdFile, select_ln49_fu_242_p3, "select_ln49_fu_242_p3");
    sc_trace(mVcdFile, select_ln49_reg_359, "select_ln49_reg_359");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, coef_load_reg_364, "coef_load_reg_364");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, hwin_V_address0, "hwin_V_address0");
    sc_trace(mVcdFile, hwin_V_ce0, "hwin_V_ce0");
    sc_trace(mVcdFile, hwin_V_we0, "hwin_V_we0");
    sc_trace(mVcdFile, hwin_V_d0, "hwin_V_d0");
    sc_trace(mVcdFile, hwin_V_q0, "hwin_V_q0");
    sc_trace(mVcdFile, j_0_reg_133, "j_0_reg_133");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, l_0_reg_144, "l_0_reg_144");
    sc_trace(mVcdFile, p_Val2_s_reg_156, "p_Val2_s_reg_156");
    sc_trace(mVcdFile, i_0_reg_169, "i_0_reg_169");
    sc_trace(mVcdFile, zext_ln49_1_fu_231_p1, "zext_ln49_1_fu_231_p1");
    sc_trace(mVcdFile, r_V_fu_255_p0, "r_V_fu_255_p0");
    sc_trace(mVcdFile, r_V_fu_255_p1, "r_V_fu_255_p1");
    sc_trace(mVcdFile, r_V_fu_255_p2, "r_V_fu_255_p2");
    sc_trace(mVcdFile, sext_ln1192_fu_269_p1, "sext_ln1192_fu_269_p1");
    sc_trace(mVcdFile, lhs_V_fu_261_p3, "lhs_V_fu_261_p3");
    sc_trace(mVcdFile, ret_V_fu_273_p2, "ret_V_fu_273_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, r_V_fu_255_p00, "r_V_fu_255_p00");
#endif

    }
}

fir::~fir() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete coef_U;
    delete hwin_V_U;
}

void fir::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        i_0_reg_169 = i_reg_329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_0_reg_169 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_0_reg_133 = j_reg_292.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        j_0_reg_133 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln39_fu_180_p2.read(), ap_const_lv1_1))) {
        l_0_reg_144 = ap_const_lv17_1F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(icmp_ln48_fu_208_p2.read(), ap_const_lv1_1))) {
        l_0_reg_144 = l_fu_236_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        p_Val2_s_reg_156 = ret_V_fu_273_p2.read().range(47, 16);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        p_Val2_s_reg_156 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        coef_load_reg_364 = coef_q0.read();
        select_ln49_reg_359 = select_ln49_fu_242_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_reg_329 = i_fu_214_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln48_fu_208_p2.read()))) {
        icmp_ln49_reg_339 = icmp_ln49_fu_225_p2.read();
        zext_ln49_reg_334 = zext_ln49_fu_220_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        in_val_V_reg_321 = x_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        j_reg_292 = j_fu_186_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln39_fu_180_p2.read(), ap_const_lv1_0))) {
        zext_ln41_reg_297 = zext_ln41_fu_192_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_fu_197_p2.read()))) {
        zext_ln46_reg_311 = zext_ln46_fu_203_p1.read();
    }
}

void fir::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void fir::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void fir::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void fir::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void fir::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void fir::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void fir::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void fir::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void fir::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(icmp_ln44_fu_197_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void fir::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void fir::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln44_fu_197_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void fir::thread_coef_address0() {
    coef_address0 =  (sc_lv<5>) (zext_ln49_fu_220_p1.read());
}

void fir::thread_coef_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        coef_ce0 = ap_const_logic_1;
    } else {
        coef_ce0 = ap_const_logic_0;
    }
}

void fir::thread_hwin_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        hwin_V_address0 =  (sc_lv<5>) (zext_ln49_reg_334.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        hwin_V_address0 =  (sc_lv<5>) (zext_ln49_1_fu_231_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        hwin_V_address0 =  (sc_lv<5>) (zext_ln41_reg_297.read());
    } else {
        hwin_V_address0 = "XXXXX";
    }
}

void fir::thread_hwin_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        hwin_V_ce0 = ap_const_logic_1;
    } else {
        hwin_V_ce0 = ap_const_logic_0;
    }
}

void fir::thread_hwin_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        hwin_V_d0 = select_ln49_fu_242_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        hwin_V_d0 = x_V_q0.read();
    } else {
        hwin_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void fir::thread_hwin_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        hwin_V_we0 = ap_const_logic_1;
    } else {
        hwin_V_we0 = ap_const_logic_0;
    }
}

void fir::thread_i_fu_214_p2() {
    i_fu_214_p2 = (!i_0_reg_169.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_reg_169.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void fir::thread_icmp_ln39_fu_180_p2() {
    icmp_ln39_fu_180_p2 = (!j_0_reg_133.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_133.read() == ap_const_lv5_1F);
}

void fir::thread_icmp_ln44_fu_197_p2() {
    icmp_ln44_fu_197_p2 = (!l_0_reg_144.read().is_01() || !ap_const_lv17_186A0.is_01())? sc_lv<1>(): sc_lv<1>(l_0_reg_144.read() == ap_const_lv17_186A0);
}

void fir::thread_icmp_ln48_fu_208_p2() {
    icmp_ln48_fu_208_p2 = (!i_0_reg_169.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_169.read() == ap_const_lv5_1F);
}

void fir::thread_icmp_ln49_fu_225_p2() {
    icmp_ln49_fu_225_p2 = (!i_0_reg_169.read().is_01() || !ap_const_lv5_1E.is_01())? sc_lv<1>(): (sc_biguint<5>(i_0_reg_169.read()) < sc_biguint<5>(ap_const_lv5_1E));
}

void fir::thread_j_fu_186_p2() {
    j_fu_186_p2 = (!j_0_reg_133.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_reg_133.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void fir::thread_l_fu_236_p2() {
    l_fu_236_p2 = (!l_0_reg_144.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(l_0_reg_144.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void fir::thread_lhs_V_fu_261_p3() {
    lhs_V_fu_261_p3 = esl_concat<32,16>(p_Val2_s_reg_156.read(), ap_const_lv16_0);
}

void fir::thread_r_V_fu_255_p0() {
    r_V_fu_255_p0 =  (sc_lv<12>) (r_V_fu_255_p00.read());
}

void fir::thread_r_V_fu_255_p00() {
    r_V_fu_255_p00 = esl_zext<44,12>(coef_load_reg_364.read());
}

void fir::thread_r_V_fu_255_p1() {
    r_V_fu_255_p1 = select_ln49_reg_359.read();
}

void fir::thread_r_V_fu_255_p2() {
    r_V_fu_255_p2 = (!r_V_fu_255_p0.read().is_01() || !r_V_fu_255_p1.read().is_01())? sc_lv<44>(): sc_biguint<12>(r_V_fu_255_p0.read()) * sc_bigint<32>(r_V_fu_255_p1.read());
}

void fir::thread_ret_V_fu_273_p2() {
    ret_V_fu_273_p2 = (!sext_ln1192_fu_269_p1.read().is_01() || !lhs_V_fu_261_p3.read().is_01())? sc_lv<48>(): (sc_bigint<48>(sext_ln1192_fu_269_p1.read()) + sc_biguint<48>(lhs_V_fu_261_p3.read()));
}

void fir::thread_select_ln49_fu_242_p3() {
    select_ln49_fu_242_p3 = (!icmp_ln49_reg_339.read()[0].is_01())? sc_lv<32>(): ((icmp_ln49_reg_339.read()[0].to_bool())? hwin_V_q0.read(): in_val_V_reg_321.read());
}

void fir::thread_sext_ln1192_fu_269_p1() {
    sext_ln1192_fu_269_p1 = esl_sext<48,44>(r_V_fu_255_p2.read());
}

void fir::thread_x_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        x_V_address0 =  (sc_lv<17>) (zext_ln46_fu_203_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        x_V_address0 =  (sc_lv<17>) (zext_ln41_fu_192_p1.read());
    } else {
        x_V_address0 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void fir::thread_x_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        x_V_ce0 = ap_const_logic_1;
    } else {
        x_V_ce0 = ap_const_logic_0;
    }
}

void fir::thread_y_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        y_V_address0 =  (sc_lv<17>) (zext_ln46_reg_311.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        y_V_address0 =  (sc_lv<17>) (zext_ln41_reg_297.read());
    } else {
        y_V_address0 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void fir::thread_y_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        y_V_ce0 = ap_const_logic_1;
    } else {
        y_V_ce0 = ap_const_logic_0;
    }
}

void fir::thread_y_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        y_V_d0 = p_Val2_s_reg_156.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        y_V_d0 = x_V_q0.read();
    } else {
        y_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void fir::thread_y_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(icmp_ln48_fu_208_p2.read(), ap_const_lv1_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        y_V_we0 = ap_const_logic_1;
    } else {
        y_V_we0 = ap_const_logic_0;
    }
}

void fir::thread_zext_ln41_fu_192_p1() {
    zext_ln41_fu_192_p1 = esl_zext<64,5>(j_0_reg_133.read());
}

void fir::thread_zext_ln46_fu_203_p1() {
    zext_ln46_fu_203_p1 = esl_zext<64,17>(l_0_reg_144.read());
}

void fir::thread_zext_ln49_1_fu_231_p1() {
    zext_ln49_1_fu_231_p1 = esl_zext<64,5>(i_fu_214_p2.read());
}

void fir::thread_zext_ln49_fu_220_p1() {
    zext_ln49_fu_220_p1 = esl_zext<64,5>(i_0_reg_169.read());
}

void fir::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln39_fu_180_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln44_fu_197_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(icmp_ln48_fu_208_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

}

