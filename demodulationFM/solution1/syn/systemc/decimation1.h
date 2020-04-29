// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _decimation1_HH_
#define _decimation1_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct decimation1 : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<17> > ary_V_address0;
    sc_out< sc_logic > ary_V_ce0;
    sc_in< sc_lv<32> > ary_V_q0;
    sc_out< sc_lv<14> > new_ary_V_address0;
    sc_out< sc_logic > new_ary_V_ce0;
    sc_out< sc_logic > new_ary_V_we0;
    sc_out< sc_lv<32> > new_ary_V_d0;


    // Module declarations
    decimation1(sc_module_name name);
    SC_HAS_PROCESS(decimation1);

    ~decimation1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<17> > n_fu_73_p2;
    sc_signal< sc_lv<17> > n_reg_108;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln216_fu_67_p2;
    sc_signal< sc_lv<1> > icmp_ln219_fu_84_p2;
    sc_signal< sc_lv<1> > icmp_ln219_reg_118;
    sc_signal< sc_lv<17> > n_0_reg_51;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<64> > zext_ln218_fu_79_p1;
    sc_signal< sc_lv<64> > zext_ln222_fu_100_p1;
    sc_signal< sc_lv<3> > trunc_ln216_fu_63_p1;
    sc_signal< sc_lv<14> > trunc_ln2_fu_90_p4;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<17> ap_const_lv17_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<17> ap_const_lv17_186A0;
    static const sc_lv<17> ap_const_lv17_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_10;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ary_V_address0();
    void thread_ary_V_ce0();
    void thread_icmp_ln216_fu_67_p2();
    void thread_icmp_ln219_fu_84_p2();
    void thread_n_fu_73_p2();
    void thread_new_ary_V_address0();
    void thread_new_ary_V_ce0();
    void thread_new_ary_V_d0();
    void thread_new_ary_V_we0();
    void thread_trunc_ln216_fu_63_p1();
    void thread_trunc_ln2_fu_90_p4();
    void thread_zext_ln218_fu_79_p1();
    void thread_zext_ln222_fu_100_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
