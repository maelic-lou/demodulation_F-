// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "decimation1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic decimation1::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic decimation1::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> decimation1::ap_ST_fsm_state1 = "1";
const sc_lv<3> decimation1::ap_ST_fsm_state2 = "10";
const sc_lv<3> decimation1::ap_ST_fsm_state3 = "100";
const sc_lv<32> decimation1::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> decimation1::ap_const_lv32_1 = "1";
const sc_lv<1> decimation1::ap_const_lv1_0 = "0";
const sc_lv<17> decimation1::ap_const_lv17_0 = "00000000000000000";
const sc_lv<32> decimation1::ap_const_lv32_2 = "10";
const sc_lv<1> decimation1::ap_const_lv1_1 = "1";
const sc_lv<17> decimation1::ap_const_lv17_186A0 = "11000011010100000";
const sc_lv<17> decimation1::ap_const_lv17_1 = "1";
const sc_lv<3> decimation1::ap_const_lv3_0 = "000";
const sc_lv<32> decimation1::ap_const_lv32_3 = "11";
const sc_lv<32> decimation1::ap_const_lv32_10 = "10000";
const bool decimation1::ap_const_boolean_1 = true;

decimation1::decimation1(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln216_fu_67_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln216_fu_67_p2 );

    SC_METHOD(thread_ary_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln218_fu_79_p1 );

    SC_METHOD(thread_ary_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_icmp_ln216_fu_67_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( n_0_reg_51 );

    SC_METHOD(thread_icmp_ln219_fu_84_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln216_fu_67_p2 );
    sensitive << ( trunc_ln216_fu_63_p1 );

    SC_METHOD(thread_n_fu_73_p2);
    sensitive << ( n_0_reg_51 );

    SC_METHOD(thread_new_ary_V_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln222_fu_100_p1 );

    SC_METHOD(thread_new_ary_V_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_new_ary_V_d0);
    sensitive << ( ary_V_q0 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_new_ary_V_we0);
    sensitive << ( icmp_ln219_reg_118 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_trunc_ln1_fu_90_p4);
    sensitive << ( n_0_reg_51 );

    SC_METHOD(thread_trunc_ln216_fu_63_p1);
    sensitive << ( n_0_reg_51 );

    SC_METHOD(thread_zext_ln218_fu_79_p1);
    sensitive << ( n_0_reg_51 );

    SC_METHOD(thread_zext_ln222_fu_100_p1);
    sensitive << ( trunc_ln1_fu_90_p4 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln216_fu_67_p2 );

    ap_CS_fsm = "001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "decimation1_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, ary_V_address0, "(port)ary_V_address0");
    sc_trace(mVcdFile, ary_V_ce0, "(port)ary_V_ce0");
    sc_trace(mVcdFile, ary_V_q0, "(port)ary_V_q0");
    sc_trace(mVcdFile, new_ary_V_address0, "(port)new_ary_V_address0");
    sc_trace(mVcdFile, new_ary_V_ce0, "(port)new_ary_V_ce0");
    sc_trace(mVcdFile, new_ary_V_we0, "(port)new_ary_V_we0");
    sc_trace(mVcdFile, new_ary_V_d0, "(port)new_ary_V_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, n_fu_73_p2, "n_fu_73_p2");
    sc_trace(mVcdFile, n_reg_108, "n_reg_108");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln216_fu_67_p2, "icmp_ln216_fu_67_p2");
    sc_trace(mVcdFile, icmp_ln219_fu_84_p2, "icmp_ln219_fu_84_p2");
    sc_trace(mVcdFile, icmp_ln219_reg_118, "icmp_ln219_reg_118");
    sc_trace(mVcdFile, n_0_reg_51, "n_0_reg_51");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, zext_ln218_fu_79_p1, "zext_ln218_fu_79_p1");
    sc_trace(mVcdFile, zext_ln222_fu_100_p1, "zext_ln222_fu_100_p1");
    sc_trace(mVcdFile, trunc_ln216_fu_63_p1, "trunc_ln216_fu_63_p1");
    sc_trace(mVcdFile, trunc_ln1_fu_90_p4, "trunc_ln1_fu_90_p4");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

decimation1::~decimation1() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void decimation1::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        n_0_reg_51 = n_reg_108.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        n_0_reg_51 = ap_const_lv17_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln216_fu_67_p2.read(), ap_const_lv1_0))) {
        icmp_ln219_reg_118 = icmp_ln219_fu_84_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        n_reg_108 = n_fu_73_p2.read();
    }
}

void decimation1::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void decimation1::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void decimation1::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void decimation1::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln216_fu_67_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void decimation1::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void decimation1::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln216_fu_67_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void decimation1::thread_ary_V_address0() {
    ary_V_address0 =  (sc_lv<17>) (zext_ln218_fu_79_p1.read());
}

void decimation1::thread_ary_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ary_V_ce0 = ap_const_logic_1;
    } else {
        ary_V_ce0 = ap_const_logic_0;
    }
}

void decimation1::thread_icmp_ln216_fu_67_p2() {
    icmp_ln216_fu_67_p2 = (!n_0_reg_51.read().is_01() || !ap_const_lv17_186A0.is_01())? sc_lv<1>(): sc_lv<1>(n_0_reg_51.read() == ap_const_lv17_186A0);
}

void decimation1::thread_icmp_ln219_fu_84_p2() {
    icmp_ln219_fu_84_p2 = (!trunc_ln216_fu_63_p1.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln216_fu_63_p1.read() == ap_const_lv3_0);
}

void decimation1::thread_n_fu_73_p2() {
    n_fu_73_p2 = (!ap_const_lv17_1.is_01() || !n_0_reg_51.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_1) + sc_biguint<17>(n_0_reg_51.read()));
}

void decimation1::thread_new_ary_V_address0() {
    new_ary_V_address0 =  (sc_lv<14>) (zext_ln222_fu_100_p1.read());
}

void decimation1::thread_new_ary_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        new_ary_V_ce0 = ap_const_logic_1;
    } else {
        new_ary_V_ce0 = ap_const_logic_0;
    }
}

void decimation1::thread_new_ary_V_d0() {
    new_ary_V_d0 = ary_V_q0.read();
}

void decimation1::thread_new_ary_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln219_reg_118.read(), ap_const_lv1_1))) {
        new_ary_V_we0 = ap_const_logic_1;
    } else {
        new_ary_V_we0 = ap_const_logic_0;
    }
}

void decimation1::thread_trunc_ln1_fu_90_p4() {
    trunc_ln1_fu_90_p4 = n_0_reg_51.read().range(16, 3);
}

void decimation1::thread_trunc_ln216_fu_63_p1() {
    trunc_ln216_fu_63_p1 = n_0_reg_51.read().range(3-1, 0);
}

void decimation1::thread_zext_ln218_fu_79_p1() {
    zext_ln218_fu_79_p1 = esl_zext<64,17>(n_0_reg_51.read());
}

void decimation1::thread_zext_ln222_fu_100_p1() {
    zext_ln222_fu_100_p1 = esl_zext<64,14>(trunc_ln1_fu_90_p4.read());
}

void decimation1::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln216_fu_67_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

