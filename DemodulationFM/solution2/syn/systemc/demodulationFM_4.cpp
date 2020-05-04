#include "demodulationFM.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void demodulationFM::thread_add_ln1118_1_fu_2100_p2() {
    add_ln1118_1_fu_2100_p2 = (!sext_ln1118_10_fu_2084_p1.read().is_01() || !sext_ln1118_11_fu_2096_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln1118_10_fu_2084_p1.read()) + sc_bigint<23>(sext_ln1118_11_fu_2096_p1.read()));
}

void demodulationFM::thread_add_ln1118_2_fu_1365_p2() {
    add_ln1118_2_fu_1365_p2 = (!sext_ln1118_12_fu_1349_p1.read().is_01() || !sext_ln1118_13_fu_1361_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_12_fu_1349_p1.read()) + sc_bigint<24>(sext_ln1118_13_fu_1361_p1.read()));
}

void demodulationFM::thread_add_ln1118_3_fu_2152_p2() {
    add_ln1118_3_fu_2152_p2 = (!sext_ln1118_15_fu_2136_p1.read().is_01() || !sext_ln1118_16_fu_2148_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_15_fu_2136_p1.read()) + sc_bigint<24>(sext_ln1118_16_fu_2148_p1.read()));
}

void demodulationFM::thread_add_ln1118_4_fu_2941_p2() {
    add_ln1118_4_fu_2941_p2 = (!sext_ln1118_118_fu_2926_p1.read().is_01() || !sext_ln1118_119_fu_2937_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_118_fu_2926_p1.read()) + sc_bigint<24>(sext_ln1118_119_fu_2937_p1.read()));
}

void demodulationFM::thread_add_ln1118_5_fu_3275_p2() {
    add_ln1118_5_fu_3275_p2 = (!sext_ln1118_121_fu_3259_p1.read().is_01() || !sext_ln1118_122_fu_3271_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_121_fu_3259_p1.read()) + sc_bigint<24>(sext_ln1118_122_fu_3271_p1.read()));
}

void demodulationFM::thread_add_ln1118_6_fu_3039_p2() {
    add_ln1118_6_fu_3039_p2 = (!sext_ln1118_124_fu_3025_p1.read().is_01() || !sext_ln1118_125_fu_3035_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln1118_124_fu_3025_p1.read()) + sc_bigint<23>(sext_ln1118_125_fu_3035_p1.read()));
}

void demodulationFM::thread_add_ln1118_7_fu_3314_p2() {
    add_ln1118_7_fu_3314_p2 = (!sext_ln1118_127_fu_3298_p1.read().is_01() || !sext_ln1118_128_fu_3310_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln1118_127_fu_3298_p1.read()) + sc_bigint<23>(sext_ln1118_128_fu_3310_p1.read()));
}

void demodulationFM::thread_add_ln1118_fu_1313_p2() {
    add_ln1118_fu_1313_p2 = (!sext_ln1118_8_fu_1297_p1.read().is_01() || !sext_ln1118_9_fu_1309_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln1118_8_fu_1297_p1.read()) + sc_bigint<23>(sext_ln1118_9_fu_1309_p1.read()));
}

void demodulationFM::thread_add_ln1192_1_fu_2122_p2() {
    add_ln1192_1_fu_2122_p2 = (!sext_ln728_1_fu_2106_p1.read().is_01() || !sext_ln1192_1_fu_2118_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln728_1_fu_2106_p1.read()) + sc_bigint<24>(sext_ln1192_1_fu_2118_p1.read()));
}

void demodulationFM::thread_add_ln1192_2_fu_1397_p2() {
    add_ln1192_2_fu_1397_p2 = (!sext_ln1118_14_fu_1371_p1.read().is_01() || !sext_ln728_2_fu_1393_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln1118_14_fu_1371_p1.read()) + sc_bigint<32>(sext_ln728_2_fu_1393_p1.read()));
}

void demodulationFM::thread_add_ln1192_3_fu_2184_p2() {
    add_ln1192_3_fu_2184_p2 = (!sext_ln1118_17_fu_2158_p1.read().is_01() || !sext_ln728_3_fu_2180_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln1118_17_fu_2158_p1.read()) + sc_bigint<32>(sext_ln728_3_fu_2180_p1.read()));
}

void demodulationFM::thread_add_ln1192_54_fu_2968_p2() {
    add_ln1192_54_fu_2968_p2 = (!sext_ln1118_120_fu_2947_p1.read().is_01() || !shl_ln728_50_fu_2960_p3.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln1118_120_fu_2947_p1.read()) + sc_biguint<32>(shl_ln728_50_fu_2960_p3.read()));
}

void demodulationFM::thread_add_ln1192_55_fu_3292_p2() {
    add_ln1192_55_fu_3292_p2 = (!sext_ln1118_123_fu_3281_p1.read().is_01() || !shl_ln728_51_fu_3285_p3.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln1118_123_fu_3281_p1.read()) + sc_biguint<32>(shl_ln728_51_fu_3285_p3.read()));
}

void demodulationFM::thread_add_ln1192_56_fu_3056_p2() {
    add_ln1192_56_fu_3056_p2 = (!sext_ln1118_126_fu_3045_p1.read().is_01() || !shl_ln728_52_fu_3049_p3.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln1118_126_fu_3045_p1.read()) + sc_biguint<32>(shl_ln728_52_fu_3049_p3.read()));
}

void demodulationFM::thread_add_ln1192_57_fu_3342_p2() {
    add_ln1192_57_fu_3342_p2 = (!sext_ln1118_129_fu_3320_p1.read().is_01() || !shl_ln728_53_fu_3334_p3.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln1118_129_fu_3320_p1.read()) + sc_biguint<32>(shl_ln728_53_fu_3334_p3.read()));
}

void demodulationFM::thread_add_ln1192_58_fu_3112_p2() {
    add_ln1192_58_fu_3112_p2 = (!sext_ln1118_132_fu_3090_p1.read().is_01() || !shl_ln728_54_fu_3104_p3.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln1118_132_fu_3090_p1.read()) + sc_biguint<32>(shl_ln728_54_fu_3104_p3.read()));
}

void demodulationFM::thread_add_ln1192_59_fu_3398_p2() {
    add_ln1192_59_fu_3398_p2 = (!sext_ln1118_135_fu_3376_p1.read().is_01() || !shl_ln728_55_fu_3390_p3.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln1118_135_fu_3376_p1.read()) + sc_biguint<32>(shl_ln728_55_fu_3390_p3.read()));
}

void demodulationFM::thread_add_ln1192_fu_1335_p2() {
    add_ln1192_fu_1335_p2 = (!sext_ln728_fu_1319_p1.read().is_01() || !sext_ln1192_fu_1331_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln728_fu_1319_p1.read()) + sc_bigint<24>(sext_ln1192_fu_1331_p1.read()));
}

void demodulationFM::thread_add_ln176_fu_1470_p2() {
    add_ln176_fu_1470_p2 = (!value_V_4_fu_969_p3.read().is_01() || !ap_const_lv18_123A.is_01())? sc_lv<18>(): (sc_biguint<18>(value_V_4_fu_969_p3.read()) + sc_biguint<18>(ap_const_lv18_123A));
}

void demodulationFM::thread_add_ln233_fu_1450_p2() {
    add_ln233_fu_1450_p2 = (!phi_urem_reg_427.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(phi_urem_reg_427.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void demodulationFM::thread_and_ln11_fu_1167_p2() {
    and_ln11_fu_1167_p2 = (icmp_ln11_fu_1161_p2.read() & xor_ln11_fu_1155_p2.read());
}

void demodulationFM::thread_and_ln15_fu_1205_p2() {
    and_ln15_fu_1205_p2 = (icmp_ln15_fu_1183_p2.read() & icmp_ln15_1_fu_1199_p2.read());
}

void demodulationFM::thread_and_ln195_fu_2022_p2() {
    and_ln195_fu_2022_p2 = (icmp_ln195_fu_2011_p2.read() & xor_ln190_fu_2016_p2.read());
}

void demodulationFM::thread_and_ln19_fu_1233_p2() {
    and_ln19_fu_1233_p2 = (icmp_ln19_fu_1221_p2.read() & icmp_ln19_1_fu_1227_p2.read());
}

void demodulationFM::thread_and_ln46_fu_1057_p2() {
    and_ln46_fu_1057_p2 = (icmp_ln46_fu_1051_p2.read() & xor_ln46_fu_1045_p2.read());
}

void demodulationFM::thread_and_ln50_fu_1095_p2() {
    and_ln50_fu_1095_p2 = (icmp_ln50_fu_1073_p2.read() & icmp_ln50_1_fu_1089_p2.read());
}

void demodulationFM::thread_and_ln54_fu_1123_p2() {
    and_ln54_fu_1123_p2 = (icmp_ln54_fu_1111_p2.read() & icmp_ln54_1_fu_1117_p2.read());
}

void demodulationFM::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void demodulationFM::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void demodulationFM::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[2];
}

void demodulationFM::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  ((esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0) && 
    esl_seteq<1,1,1>(ap_const_logic_0, y_I_V_V_empty_n.read())) || 
   (esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0) && 
    esl_seteq<1,1,1>(ap_const_logic_0, y_Q_V_V_empty_n.read())))) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter82.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, y_demod_d_V_V_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op850_write_state84.read())));
}

void demodulationFM::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  ((esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0) && 
    esl_seteq<1,1,1>(ap_const_logic_0, y_I_V_V_empty_n.read())) || 
   (esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0) && 
    esl_seteq<1,1,1>(ap_const_logic_0, y_Q_V_V_empty_n.read())))) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter82.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, y_demod_d_V_V_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op850_write_state84.read())));
}

void demodulationFM::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  ((esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0) && 
    esl_seteq<1,1,1>(ap_const_logic_0, y_I_V_V_empty_n.read())) || 
   (esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0) && 
    esl_seteq<1,1,1>(ap_const_logic_0, y_Q_V_V_empty_n.read())))) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter82.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, y_demod_d_V_V_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op850_write_state84.read())));
}

void demodulationFM::thread_ap_block_state10_pp0_stage0_iter8() {
    ap_block_state10_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state11_pp0_stage0_iter9() {
    ap_block_state11_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state12_pp0_stage0_iter10() {
    ap_block_state12_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state13_pp0_stage0_iter11() {
    ap_block_state13_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state14_pp0_stage0_iter12() {
    ap_block_state14_pp0_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state15_pp0_stage0_iter13() {
    ap_block_state15_pp0_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state16_pp0_stage0_iter14() {
    ap_block_state16_pp0_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state17_pp0_stage0_iter15() {
    ap_block_state17_pp0_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state18_pp0_stage0_iter16() {
    ap_block_state18_pp0_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state19_pp0_stage0_iter17() {
    ap_block_state19_pp0_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state20_pp0_stage0_iter18() {
    ap_block_state20_pp0_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state21_pp0_stage0_iter19() {
    ap_block_state21_pp0_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state22_pp0_stage0_iter20() {
    ap_block_state22_pp0_stage0_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state23_pp0_stage0_iter21() {
    ap_block_state23_pp0_stage0_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state24_pp0_stage0_iter22() {
    ap_block_state24_pp0_stage0_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state25_pp0_stage0_iter23() {
    ap_block_state25_pp0_stage0_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state26_pp0_stage0_iter24() {
    ap_block_state26_pp0_stage0_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state27_pp0_stage0_iter25() {
    ap_block_state27_pp0_stage0_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state28_pp0_stage0_iter26() {
    ap_block_state28_pp0_stage0_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state29_pp0_stage0_iter27() {
    ap_block_state29_pp0_stage0_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state30_pp0_stage0_iter28() {
    ap_block_state30_pp0_stage0_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state31_pp0_stage0_iter29() {
    ap_block_state31_pp0_stage0_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state32_pp0_stage0_iter30() {
    ap_block_state32_pp0_stage0_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state33_pp0_stage0_iter31() {
    ap_block_state33_pp0_stage0_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state34_pp0_stage0_iter32() {
    ap_block_state34_pp0_stage0_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state35_pp0_stage0_iter33() {
    ap_block_state35_pp0_stage0_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state36_pp0_stage0_iter34() {
    ap_block_state36_pp0_stage0_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state37_pp0_stage0_iter35() {
    ap_block_state37_pp0_stage0_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state38_pp0_stage0_iter36() {
    ap_block_state38_pp0_stage0_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state39_pp0_stage0_iter37() {
    ap_block_state39_pp0_stage0_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state40_pp0_stage0_iter38() {
    ap_block_state40_pp0_stage0_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state41_pp0_stage0_iter39() {
    ap_block_state41_pp0_stage0_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state42_pp0_stage0_iter40() {
    ap_block_state42_pp0_stage0_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state43_pp0_stage0_iter41() {
    ap_block_state43_pp0_stage0_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state44_pp0_stage0_iter42() {
    ap_block_state44_pp0_stage0_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state45_pp0_stage0_iter43() {
    ap_block_state45_pp0_stage0_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state46_pp0_stage0_iter44() {
    ap_block_state46_pp0_stage0_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state47_pp0_stage0_iter45() {
    ap_block_state47_pp0_stage0_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state48_pp0_stage0_iter46() {
    ap_block_state48_pp0_stage0_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state49_pp0_stage0_iter47() {
    ap_block_state49_pp0_stage0_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state50_pp0_stage0_iter48() {
    ap_block_state50_pp0_stage0_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state51_pp0_stage0_iter49() {
    ap_block_state51_pp0_stage0_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state52_pp0_stage0_iter50() {
    ap_block_state52_pp0_stage0_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state53_pp0_stage0_iter51() {
    ap_block_state53_pp0_stage0_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state54_pp0_stage0_iter52() {
    ap_block_state54_pp0_stage0_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state55_pp0_stage0_iter53() {
    ap_block_state55_pp0_stage0_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state56_pp0_stage0_iter54() {
    ap_block_state56_pp0_stage0_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state57_pp0_stage0_iter55() {
    ap_block_state57_pp0_stage0_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state58_pp0_stage0_iter56() {
    ap_block_state58_pp0_stage0_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state59_pp0_stage0_iter57() {
    ap_block_state59_pp0_stage0_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = ((esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, y_I_V_V_empty_n.read())) || (esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, y_Q_V_V_empty_n.read())));
}

void demodulationFM::thread_ap_block_state60_pp0_stage0_iter58() {
    ap_block_state60_pp0_stage0_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state61_pp0_stage0_iter59() {
    ap_block_state61_pp0_stage0_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state62_pp0_stage0_iter60() {
    ap_block_state62_pp0_stage0_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state63_pp0_stage0_iter61() {
    ap_block_state63_pp0_stage0_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state64_pp0_stage0_iter62() {
    ap_block_state64_pp0_stage0_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state65_pp0_stage0_iter63() {
    ap_block_state65_pp0_stage0_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state66_pp0_stage0_iter64() {
    ap_block_state66_pp0_stage0_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state67_pp0_stage0_iter65() {
    ap_block_state67_pp0_stage0_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state68_pp0_stage0_iter66() {
    ap_block_state68_pp0_stage0_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state69_pp0_stage0_iter67() {
    ap_block_state69_pp0_stage0_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state70_pp0_stage0_iter68() {
    ap_block_state70_pp0_stage0_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state71_pp0_stage0_iter69() {
    ap_block_state71_pp0_stage0_iter69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state72_pp0_stage0_iter70() {
    ap_block_state72_pp0_stage0_iter70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state73_pp0_stage0_iter71() {
    ap_block_state73_pp0_stage0_iter71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state74_pp0_stage0_iter72() {
    ap_block_state74_pp0_stage0_iter72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state75_pp0_stage0_iter73() {
    ap_block_state75_pp0_stage0_iter73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state76_pp0_stage0_iter74() {
    ap_block_state76_pp0_stage0_iter74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state77_pp0_stage0_iter75() {
    ap_block_state77_pp0_stage0_iter75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state78_pp0_stage0_iter76() {
    ap_block_state78_pp0_stage0_iter76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state79_pp0_stage0_iter77() {
    ap_block_state79_pp0_stage0_iter77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state80_pp0_stage0_iter78() {
    ap_block_state80_pp0_stage0_iter78 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state81_pp0_stage0_iter79() {
    ap_block_state81_pp0_stage0_iter79 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state82_pp0_stage0_iter80() {
    ap_block_state82_pp0_stage0_iter80 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state83_pp0_stage0_iter81() {
    ap_block_state83_pp0_stage0_iter81 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state84_pp0_stage0_iter82() {
    ap_block_state84_pp0_stage0_iter82 = (esl_seteq<1,1,1>(ap_const_logic_0, y_demod_d_V_V_full_n.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op850_write_state84.read()));
}

void demodulationFM::thread_ap_block_state8_pp0_stage0_iter6() {
    ap_block_state8_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_block_state9_pp0_stage0_iter7() {
    ap_block_state9_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void demodulationFM::thread_ap_condition_1125() {
    ap_condition_1125 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_fu_926_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_fu_1031_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln11_fu_1167_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln15_fu_1205_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln19_fu_1233_p2.read()));
}

void demodulationFM::thread_ap_condition_1130() {
    ap_condition_1130 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_fu_926_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_fu_1031_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln11_fu_1167_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln15_fu_1205_p2.read()));
}

void demodulationFM::thread_ap_condition_1822() {
    ap_condition_1822 = (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
}

void demodulationFM::thread_ap_condition_1832() {
    ap_condition_1832 = (esl_seteq<1,1,1>(icmp_ln176_reg_4179.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_4206.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln46_reg_4210.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln50_reg_4214.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln54_reg_4218.read()));
}

void demodulationFM::thread_ap_condition_1839() {
    ap_condition_1839 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_fu_926_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_fu_1031_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln46_fu_1057_p2.read()));
}

void demodulationFM::thread_ap_condition_1852() {
    ap_condition_1852 = (esl_seteq<1,1,1>(icmp_ln176_reg_4179.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_4206.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln11_reg_4232.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln15_reg_4236.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln19_reg_4240.read()));
}

void demodulationFM::thread_ap_condition_1855() {
    ap_condition_1855 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_fu_926_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_fu_1031_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln11_fu_1167_p2.read()));
}

void demodulationFM::thread_ap_condition_498() {
    ap_condition_498 = (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void demodulationFM::thread_ap_condition_857() {
    ap_condition_857 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_fu_926_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_fu_1031_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln46_fu_1057_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln50_fu_1095_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln54_fu_1123_p2.read()));
}

void demodulationFM::thread_ap_condition_862() {
    ap_condition_862 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_fu_926_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_fu_1031_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln46_fu_1057_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln50_fu_1095_p2.read()));
}

void demodulationFM::thread_ap_condition_pp0_exit_iter4_state6() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0))) {
        ap_condition_pp0_exit_iter4_state6 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter4_state6 = ap_const_logic_0;
    }
}

void demodulationFM::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void demodulationFM::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void demodulationFM::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void demodulationFM::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter58.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter59.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter61.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter62.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter64.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter65.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter67.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter68.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter69.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter70.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter71.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter72.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter73.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter74.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter75.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter76.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter77.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter78.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter79.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter80.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter81.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter82.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void demodulationFM::thread_ap_phi_mux_hwin_Q_1_V_phi_fu_883_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_reg_4179_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        ap_phi_mux_hwin_Q_1_V_phi_fu_883_p4 = hwin_Q_2_V_reg_866.read();
    } else {
        ap_phi_mux_hwin_Q_1_V_phi_fu_883_p4 = hwin_Q_1_V_reg_879.read();
    }
}

void demodulationFM::thread_ap_phi_mux_hwin_Q_2_V_phi_fu_870_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_reg_4179_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        ap_phi_mux_hwin_Q_2_V_phi_fu_870_p4 = hwin_Q_3_V_reg_853.read();
    } else {
        ap_phi_mux_hwin_Q_2_V_phi_fu_870_p4 = hwin_Q_2_V_reg_866.read();
    }
}

void demodulationFM::thread_ap_phi_mux_hwin_Q_3_V_phi_fu_857_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_reg_4179_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        ap_phi_mux_hwin_Q_3_V_phi_fu_857_p4 = hwin_Q_4_V_reg_840.read();
    } else {
        ap_phi_mux_hwin_Q_3_V_phi_fu_857_p4 = hwin_Q_3_V_reg_853.read();
    }
}

void demodulationFM::thread_ap_phi_mux_hwin_Q_V_1_0_phi_fu_896_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_reg_4179_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        ap_phi_mux_hwin_Q_V_1_0_phi_fu_896_p4 = hwin_Q_1_V_reg_879.read();
    } else {
        ap_phi_mux_hwin_Q_V_1_0_phi_fu_896_p4 = hwin_Q_V_1_0_reg_892.read();
    }
}

void demodulationFM::thread_ap_phi_mux_idx_3_i9_phi_fu_459_p10() {
    if ((esl_seteq<1,1,1>(icmp_ln176_reg_4179.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_4206.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, and_ln11_reg_4232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, and_ln15_reg_4236.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, and_ln19_reg_4240.read()))) {
        ap_phi_mux_idx_3_i9_phi_fu_459_p10 = zext_ln24_fu_1604_p1.read();
    } else {
        ap_phi_mux_idx_3_i9_phi_fu_459_p10 = ap_phi_reg_pp0_iter1_idx_3_i9_reg_455.read();
    }
}

void demodulationFM::thread_ap_phi_mux_idx_3_i_phi_fu_442_p10() {
    if ((esl_seteq<1,1,1>(icmp_ln176_reg_4179.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_4206.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, and_ln46_reg_4210.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, and_ln50_reg_4214.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, and_ln54_reg_4218.read()))) {
        ap_phi_mux_idx_3_i_phi_fu_442_p10 = zext_ln59_fu_1543_p1.read();
    } else {
        ap_phi_mux_idx_3_i_phi_fu_442_p10 = ap_phi_reg_pp0_iter1_idx_3_i_reg_438.read();
    }
}

void demodulationFM::thread_ap_phi_reg_pp0_iter0_idx_3_i9_reg_455() {
    ap_phi_reg_pp0_iter0_idx_3_i9_reg_455 =  (sc_lv<10>) ("XXXXXXXXXX");
}

void demodulationFM::thread_ap_phi_reg_pp0_iter0_idx_3_i_reg_438() {
    ap_phi_reg_pp0_iter0_idx_3_i_reg_438 =  (sc_lv<10>) ("XXXXXXXXXX");
}

void demodulationFM::thread_ap_phi_reg_pp0_iter0_sign_3_i10_reg_494() {
    ap_phi_reg_pp0_iter0_sign_3_i10_reg_494 =  (sc_lv<1>) ("X");
}

void demodulationFM::thread_ap_phi_reg_pp0_iter0_sign_3_i_reg_472() {
    ap_phi_reg_pp0_iter0_sign_3_i_reg_472 =  (sc_lv<1>) ("X");
}

void demodulationFM::thread_ap_predicate_op850_write_state84() {
    ap_predicate_op850_write_state84 = (esl_seteq<1,1,1>(icmp_ln219_reg_4259_pp0_iter81_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln225_reg_4263_pp0_iter81_reg.read()));
}

void demodulationFM::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void demodulationFM::thread_ap_return() {
    ap_return = ap_const_lv32_0;
}

void demodulationFM::thread_ap_sig_allocacmp_hwin_I_29_V_load_1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln176_reg_4179_pp0_iter4_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        ap_sig_allocacmp_hwin_I_29_V_load_1 = tmp_r_V_5_fu_2276_p3.read();
    } else {
        ap_sig_allocacmp_hwin_I_29_V_load_1 = hwin_I_29_V_fu_348.read();
    }
}

void demodulationFM::thread_ap_sig_allocacmp_hwin_I_3_V_load() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ap_sig_allocacmp_hwin_I_3_V_load = hwin_I_4_V_fu_248.read();
    } else {
        ap_sig_allocacmp_hwin_I_3_V_load = hwin_I_3_V_fu_244.read();
    }
}

void demodulationFM::thread_ap_sig_allocacmp_hwin_I_5_V_load() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        ap_sig_allocacmp_hwin_I_5_V_load = hwin_I_6_V_fu_256.read();
    } else {
        ap_sig_allocacmp_hwin_I_5_V_load = hwin_I_5_V_fu_252.read();
    }
}

void demodulationFM::thread_ap_sig_allocacmp_hwin_I_7_V_load() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_sig_allocacmp_hwin_I_7_V_load = hwin_I_8_V_fu_264.read();
    } else {
        ap_sig_allocacmp_hwin_I_7_V_load = hwin_I_7_V_fu_260.read();
    }
}

void demodulationFM::thread_ap_sig_allocacmp_hwin_I_9_V_load() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        ap_sig_allocacmp_hwin_I_9_V_load = hwin_I_10_V_fu_272.read();
    } else {
        ap_sig_allocacmp_hwin_I_9_V_load = hwin_I_9_V_fu_268.read();
    }
}

void demodulationFM::thread_cos_table_address0() {
    cos_table_address0 =  (sc_lv<7>) (sext_ln1265_fu_1548_p1.read());
}

void demodulationFM::thread_cos_table_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        cos_table_ce0 = ap_const_logic_1;
    } else {
        cos_table_ce0 = ap_const_logic_0;
    }
}

void demodulationFM::thread_dii_V_fu_3420_p2() {
    dii_V_fu_3420_p2 = (!trunc_ln708_s_reg_4555_pp0_iter17_reg.read().is_01() || !p_Val2_s_fu_352.read().is_01())? sc_lv<18>(): (sc_bigint<18>(trunc_ln708_s_reg_4555_pp0_iter17_reg.read()) - sc_biguint<18>(p_Val2_s_fu_352.read()));
}

void demodulationFM::thread_dqq_V_fu_3425_p2() {
    dqq_V_fu_3425_p2 = (!trunc_ln708_2_reg_4577.read().is_01() || !p_Val2_1_fu_356.read().is_01())? sc_lv<18>(): (sc_bigint<18>(trunc_ln708_2_reg_4577.read()) - sc_biguint<18>(p_Val2_1_fu_356.read()));
}

void demodulationFM::thread_grp_fu_3464_ce() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_3464_ce = ap_const_logic_1;
    } else {
        grp_fu_3464_ce = ap_const_logic_0;
    }
}

void demodulationFM::thread_grp_fu_3464_p0() {
    grp_fu_3464_p0 = esl_concat<36,24>(grp_fu_3967_p3.read(), ap_const_lv24_0);
}

void demodulationFM::thread_grp_fu_3481_p1() {
    grp_fu_3481_p1 =  (sc_lv<7>) (ap_const_lv25_3B);
}

void demodulationFM::thread_grp_fu_3481_p2() {
    grp_fu_3481_p2 = esl_concat<18,14>(tmp_1_fu_1407_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3490_p1() {
    grp_fu_3490_p1 =  (sc_lv<8>) (ap_const_lv26_5D);
}

void demodulationFM::thread_grp_fu_3490_p2() {
    grp_fu_3490_p2 = esl_concat<18,14>(tmp_13_reg_4254.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3499_p1() {
    grp_fu_3499_p1 =  (sc_lv<9>) (ap_const_lv27_89);
}

void demodulationFM::thread_grp_fu_3499_p2() {
    grp_fu_3499_p2 = esl_concat<18,14>(tmp_15_fu_1629_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3508_p1() {
    grp_fu_3508_p1 =  (sc_lv<9>) (ap_const_lv27_BE);
}

void demodulationFM::thread_grp_fu_3508_p2() {
    grp_fu_3508_p2 = esl_concat<18,14>(tmp_17_reg_4287.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3517_p1() {
    grp_fu_3517_p1 =  (sc_lv<9>) (ap_const_lv27_FB);
}

void demodulationFM::thread_grp_fu_3517_p2() {
    grp_fu_3517_p2 = esl_concat<18,14>(tmp_19_fu_1686_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3544_p1() {
    grp_fu_3544_p1 =  (sc_lv<10>) (ap_const_lv28_13E);
}

void demodulationFM::thread_grp_fu_3544_p2() {
    grp_fu_3544_p2 = esl_concat<18,14>(tmp_21_reg_4304.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3553_p1() {
    grp_fu_3553_p1 =  (sc_lv<10>) (ap_const_lv28_184);
}

void demodulationFM::thread_grp_fu_3553_p2() {
    grp_fu_3553_p2 = esl_concat<18,14>(tmp_23_fu_1783_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3562_p0() {
    grp_fu_3562_p0 =  (sc_lv<9>) (r_V_2_reg_4314.read());
}

void demodulationFM::thread_grp_fu_3562_p1() {
    grp_fu_3562_p1 =  (sc_lv<18>) (sext_ln1118_1_reg_4319.read());
}

void demodulationFM::thread_grp_fu_3568_p1() {
    grp_fu_3568_p1 =  (sc_lv<7>) (ap_const_lv25_3B);
}

void demodulationFM::thread_grp_fu_3568_p2() {
    grp_fu_3568_p2 = esl_concat<18,14>(tmp_10_fu_2194_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3577_p1() {
    grp_fu_3577_p1 =  (sc_lv<10>) (ap_const_lv28_1C9);
}

void demodulationFM::thread_grp_fu_3577_p2() {
    grp_fu_3577_p2 = esl_concat<18,14>(tmp_25_reg_4334.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3586_p1() {
    grp_fu_3586_p1 =  (sc_lv<11>) (ap_const_lv29_209);
}

void demodulationFM::thread_grp_fu_3586_p2() {
    grp_fu_3586_p2 = esl_concat<18,14>(tmp_27_fu_2236_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3595_p1() {
    grp_fu_3595_p1 =  (sc_lv<8>) (ap_const_lv26_5D);
}

void demodulationFM::thread_grp_fu_3595_p2() {
    grp_fu_3595_p2 = esl_concat<18,14>(tmp_14_reg_4448.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3604_p1() {
    grp_fu_3604_p1 =  (sc_lv<9>) (ap_const_lv27_89);
}

void demodulationFM::thread_grp_fu_3604_p2() {
    grp_fu_3604_p2 = esl_concat<18,14>(tmp_16_fu_2298_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3613_p1() {
    grp_fu_3613_p1 =  (sc_lv<11>) (ap_const_lv29_241);
}

void demodulationFM::thread_grp_fu_3613_p2() {
    grp_fu_3613_p2 = esl_concat<18,14>(tmp_29_reg_4453.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3622_p1() {
    grp_fu_3622_p1 =  (sc_lv<11>) (ap_const_lv29_26B);
}

void demodulationFM::thread_grp_fu_3622_p2() {
    grp_fu_3622_p2 = esl_concat<18,14>(tmp_31_fu_2337_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3631_p1() {
    grp_fu_3631_p1 =  (sc_lv<9>) (ap_const_lv27_BE);
}

void demodulationFM::thread_grp_fu_3631_p2() {
    grp_fu_3631_p2 = esl_concat<18,14>(tmp_18_reg_4470.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3640_p1() {
    grp_fu_3640_p1 =  (sc_lv<9>) (ap_const_lv27_FB);
}

void demodulationFM::thread_grp_fu_3640_p2() {
    grp_fu_3640_p2 = esl_concat<18,14>(tmp_20_fu_2383_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3649_p1() {
    grp_fu_3649_p1 =  (sc_lv<11>) (ap_const_lv29_286);
}

void demodulationFM::thread_grp_fu_3649_p2() {
    grp_fu_3649_p2 = esl_concat<18,14>(tmp_33_reg_4475.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3658_p1() {
    grp_fu_3658_p1 =  (sc_lv<11>) (ap_const_lv29_28F);
}

void demodulationFM::thread_grp_fu_3658_p2() {
    grp_fu_3658_p2 = esl_concat<18,14>(tmp_35_fu_2422_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3667_p1() {
    grp_fu_3667_p1 =  (sc_lv<10>) (ap_const_lv28_13E);
}

void demodulationFM::thread_grp_fu_3667_p2() {
    grp_fu_3667_p2 = esl_concat<18,14>(tmp_22_reg_4480.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3676_p1() {
    grp_fu_3676_p1 =  (sc_lv<10>) (ap_const_lv28_184);
}

void demodulationFM::thread_grp_fu_3676_p2() {
    grp_fu_3676_p2 = esl_concat<18,14>(tmp_24_fu_2463_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3685_p1() {
    grp_fu_3685_p1 =  (sc_lv<11>) (ap_const_lv29_286);
}

void demodulationFM::thread_grp_fu_3685_p2() {
    grp_fu_3685_p2 = esl_concat<18,14>(tmp_37_reg_4485.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3694_p1() {
    grp_fu_3694_p1 =  (sc_lv<11>) (ap_const_lv29_26B);
}

void demodulationFM::thread_grp_fu_3694_p2() {
    grp_fu_3694_p2 = esl_concat<18,14>(tmp_39_fu_2502_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3703_p1() {
    grp_fu_3703_p1 =  (sc_lv<10>) (ap_const_lv28_1C9);
}

void demodulationFM::thread_grp_fu_3703_p2() {
    grp_fu_3703_p2 = esl_concat<18,14>(tmp_26_reg_4490.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3712_p1() {
    grp_fu_3712_p1 =  (sc_lv<11>) (ap_const_lv29_209);
}

void demodulationFM::thread_grp_fu_3712_p2() {
    grp_fu_3712_p2 = esl_concat<18,14>(tmp_28_fu_2543_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3721_p1() {
    grp_fu_3721_p1 =  (sc_lv<11>) (ap_const_lv29_241);
}

void demodulationFM::thread_grp_fu_3721_p2() {
    grp_fu_3721_p2 = esl_concat<18,14>(tmp_41_reg_4495.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3730_p1() {
    grp_fu_3730_p1 =  (sc_lv<11>) (ap_const_lv29_209);
}

void demodulationFM::thread_grp_fu_3730_p2() {
    grp_fu_3730_p2 = esl_concat<18,14>(tmp_43_fu_2582_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3739_p1() {
    grp_fu_3739_p1 =  (sc_lv<11>) (ap_const_lv29_241);
}

void demodulationFM::thread_grp_fu_3739_p2() {
    grp_fu_3739_p2 = esl_concat<18,14>(tmp_30_reg_4500.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3748_p1() {
    grp_fu_3748_p1 =  (sc_lv<11>) (ap_const_lv29_26B);
}

void demodulationFM::thread_grp_fu_3748_p2() {
    grp_fu_3748_p2 = esl_concat<18,14>(tmp_32_fu_2623_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3757_p1() {
    grp_fu_3757_p1 =  (sc_lv<10>) (ap_const_lv28_1C9);
}

void demodulationFM::thread_grp_fu_3757_p2() {
    grp_fu_3757_p2 = esl_concat<18,14>(tmp_45_reg_4505.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3766_p1() {
    grp_fu_3766_p1 =  (sc_lv<10>) (ap_const_lv28_184);
}

void demodulationFM::thread_grp_fu_3766_p2() {
    grp_fu_3766_p2 = esl_concat<18,14>(tmp_47_fu_2662_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3775_p1() {
    grp_fu_3775_p1 =  (sc_lv<11>) (ap_const_lv29_286);
}

void demodulationFM::thread_grp_fu_3775_p2() {
    grp_fu_3775_p2 = esl_concat<18,14>(tmp_34_reg_4510.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3784_p1() {
    grp_fu_3784_p1 =  (sc_lv<11>) (ap_const_lv29_28F);
}

void demodulationFM::thread_grp_fu_3784_p2() {
    grp_fu_3784_p2 = esl_concat<18,14>(tmp_36_fu_2703_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3793_p1() {
    grp_fu_3793_p1 =  (sc_lv<10>) (ap_const_lv28_13E);
}

void demodulationFM::thread_grp_fu_3793_p2() {
    grp_fu_3793_p2 = esl_concat<18,14>(tmp_49_reg_4515.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3802_p1() {
    grp_fu_3802_p1 =  (sc_lv<9>) (ap_const_lv27_FB);
}

void demodulationFM::thread_grp_fu_3802_p2() {
    grp_fu_3802_p2 = esl_concat<18,14>(tmp_51_fu_2742_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3811_p1() {
    grp_fu_3811_p1 =  (sc_lv<11>) (ap_const_lv29_286);
}

void demodulationFM::thread_grp_fu_3811_p2() {
    grp_fu_3811_p2 = esl_concat<18,14>(tmp_38_reg_4520.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3820_p1() {
    grp_fu_3820_p1 =  (sc_lv<11>) (ap_const_lv29_26B);
}

void demodulationFM::thread_grp_fu_3820_p2() {
    grp_fu_3820_p2 = esl_concat<18,14>(tmp_40_fu_2783_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3829_p1() {
    grp_fu_3829_p1 =  (sc_lv<9>) (ap_const_lv27_BE);
}

void demodulationFM::thread_grp_fu_3829_p2() {
    grp_fu_3829_p2 = esl_concat<18,14>(tmp_53_reg_4525.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3838_p1() {
    grp_fu_3838_p1 =  (sc_lv<9>) (ap_const_lv27_89);
}

void demodulationFM::thread_grp_fu_3838_p2() {
    grp_fu_3838_p2 = esl_concat<18,14>(tmp_55_fu_2822_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3847_p1() {
    grp_fu_3847_p1 =  (sc_lv<11>) (ap_const_lv29_241);
}

void demodulationFM::thread_grp_fu_3847_p2() {
    grp_fu_3847_p2 = esl_concat<18,14>(tmp_42_reg_4530.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3856_p1() {
    grp_fu_3856_p1 =  (sc_lv<11>) (ap_const_lv29_209);
}

void demodulationFM::thread_grp_fu_3856_p2() {
    grp_fu_3856_p2 = esl_concat<18,14>(tmp_44_fu_2863_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3865_p1() {
    grp_fu_3865_p1 =  (sc_lv<8>) (ap_const_lv26_5D);
}

void demodulationFM::thread_grp_fu_3865_p2() {
    grp_fu_3865_p2 = esl_concat<18,14>(tmp_57_reg_4535.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3874_p1() {
    grp_fu_3874_p1 =  (sc_lv<7>) (ap_const_lv25_3B);
}

void demodulationFM::thread_grp_fu_3874_p2() {
    grp_fu_3874_p2 = esl_concat<18,14>(tmp_59_fu_2902_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3883_p1() {
    grp_fu_3883_p1 =  (sc_lv<10>) (ap_const_lv28_1C9);
}

void demodulationFM::thread_grp_fu_3883_p2() {
    grp_fu_3883_p2 = esl_concat<18,14>(tmp_46_reg_4540.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3892_p1() {
    grp_fu_3892_p1 =  (sc_lv<10>) (ap_const_lv28_184);
}

void demodulationFM::thread_grp_fu_3892_p2() {
    grp_fu_3892_p2 = esl_concat<18,14>(tmp_48_fu_2999_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3901_p1() {
    grp_fu_3901_p1 =  (sc_lv<10>) (ap_const_lv28_13E);
}

void demodulationFM::thread_grp_fu_3901_p2() {
    grp_fu_3901_p2 = esl_concat<18,14>(tmp_50_reg_4550.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3910_p1() {
    grp_fu_3910_p1 =  (sc_lv<9>) (ap_const_lv27_FB);
}

void demodulationFM::thread_grp_fu_3910_p2() {
    grp_fu_3910_p2 = esl_concat<18,14>(tmp_52_fu_3143_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3919_p1() {
    grp_fu_3919_p1 =  (sc_lv<9>) (ap_const_lv27_BE);
}

void demodulationFM::thread_grp_fu_3919_p2() {
    grp_fu_3919_p2 = esl_concat<18,14>(tmp_54_reg_4562.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3928_p1() {
    grp_fu_3928_p1 =  (sc_lv<9>) (ap_const_lv27_89);
}

void demodulationFM::thread_grp_fu_3928_p2() {
    grp_fu_3928_p2 = esl_concat<18,14>(tmp_56_fu_3184_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3937_p1() {
    grp_fu_3937_p1 =  (sc_lv<8>) (ap_const_lv26_5D);
}

void demodulationFM::thread_grp_fu_3937_p2() {
    grp_fu_3937_p2 = esl_concat<18,14>(tmp_58_reg_4567.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3946_p1() {
    grp_fu_3946_p1 =  (sc_lv<7>) (ap_const_lv25_3B);
}

void demodulationFM::thread_grp_fu_3946_p2() {
    grp_fu_3946_p2 = esl_concat<18,14>(tmp_60_fu_3225_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_grp_fu_3967_p0() {
    grp_fu_3967_p0 =  (sc_lv<18>) (r_V_8_fu_3445_p1.read());
}

void demodulationFM::thread_grp_fu_3975_p0() {
    grp_fu_3975_p0 =  (sc_lv<18>) (r_V_8_fu_3445_p1.read());
}

void demodulationFM::thread_grp_fu_3975_p1() {
    grp_fu_3975_p1 =  (sc_lv<18>) (r_V_8_fu_3445_p1.read());
}

void demodulationFM::thread_icmp_ln11_fu_1161_p2() {
    icmp_ln11_fu_1161_p2 = (!select_ln850_fu_1019_p3.read().is_01() || !ap_const_lv10_41.is_01())? sc_lv<1>(): (sc_bigint<10>(select_ln850_fu_1019_p3.read()) < sc_bigint<10>(ap_const_lv10_41));
}

void demodulationFM::thread_icmp_ln1494_fu_957_p2() {
    icmp_ln1494_fu_957_p2 = (!value_V_3_reg_405.read().is_01() || !ap_const_lv18_10000.is_01())? sc_lv<1>(): (sc_bigint<18>(value_V_3_reg_405.read()) > sc_bigint<18>(ap_const_lv18_10000));
}

void demodulationFM::thread_icmp_ln15_1_fu_1199_p2() {
    icmp_ln15_1_fu_1199_p2 = (!tmp_71_fu_1189_p4.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_71_fu_1189_p4.read()) < sc_bigint<3>(ap_const_lv3_1));
}

void demodulationFM::thread_icmp_ln15_fu_1183_p2() {
    icmp_ln15_fu_1183_p2 = (!tmp_70_fu_1173_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): (sc_bigint<4>(tmp_70_fu_1173_p4.read()) > sc_bigint<4>(ap_const_lv4_0));
}

void demodulationFM::thread_icmp_ln176_fu_926_p2() {
    icmp_ln176_fu_926_p2 = (!l_0_reg_416.read().is_01() || !ap_const_lv17_186A0.is_01())? sc_lv<1>(): sc_lv<1>(l_0_reg_416.read() == ap_const_lv17_186A0);
}

void demodulationFM::thread_icmp_ln190_fu_2000_p2() {
    icmp_ln190_fu_2000_p2 = (!select_ln850_reg_4188_pp0_iter3_reg.read().is_01() || !ap_const_lv10_0.is_01())? sc_lv<1>(): sc_lv<1>(select_ln850_reg_4188_pp0_iter3_reg.read() == ap_const_lv10_0);
}

void demodulationFM::thread_icmp_ln195_fu_2011_p2() {
    icmp_ln195_fu_2011_p2 = (!select_ln850_reg_4188_pp0_iter3_reg.read().is_01() || !ap_const_lv10_40.is_01())? sc_lv<1>(): sc_lv<1>(select_ln850_reg_4188_pp0_iter3_reg.read() == ap_const_lv10_40);
}

void demodulationFM::thread_icmp_ln19_1_fu_1227_p2() {
    icmp_ln19_1_fu_1227_p2 = (!select_ln850_fu_1019_p3.read().is_01() || !ap_const_lv10_C0.is_01())? sc_lv<1>(): (sc_bigint<10>(select_ln850_fu_1019_p3.read()) < sc_bigint<10>(ap_const_lv10_C0));
}

void demodulationFM::thread_icmp_ln19_fu_1221_p2() {
    icmp_ln19_fu_1221_p2 = (!tmp_72_fu_1211_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_72_fu_1211_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void demodulationFM::thread_icmp_ln219_fu_1434_p2() {
    icmp_ln219_fu_1434_p2 = (!trunc_ln176_fu_953_p1.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln176_fu_953_p1.read() == ap_const_lv3_0);
}

void demodulationFM::thread_icmp_ln225_fu_1444_p2() {
    icmp_ln225_fu_1444_p2 = (!trunc_ln225_fu_1440_p1.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln225_fu_1440_p1.read() == ap_const_lv7_0);
}

void demodulationFM::thread_icmp_ln233_fu_1456_p2() {
    icmp_ln233_fu_1456_p2 = (!add_ln233_fu_1450_p2.read().is_01() || !ap_const_lv17_50.is_01())? sc_lv<1>(): (sc_biguint<17>(add_ln233_fu_1450_p2.read()) < sc_biguint<17>(ap_const_lv17_50));
}

void demodulationFM::thread_icmp_ln42_fu_1031_p2() {
    icmp_ln42_fu_1031_p2 = (!select_ln850_fu_1019_p3.read().is_01() || !ap_const_lv10_100.is_01())? sc_lv<1>(): sc_lv<1>(select_ln850_fu_1019_p3.read() == ap_const_lv10_100);
}

void demodulationFM::thread_icmp_ln46_fu_1051_p2() {
    icmp_ln46_fu_1051_p2 = (!select_ln850_fu_1019_p3.read().is_01() || !ap_const_lv10_41.is_01())? sc_lv<1>(): (sc_bigint<10>(select_ln850_fu_1019_p3.read()) < sc_bigint<10>(ap_const_lv10_41));
}

void demodulationFM::thread_icmp_ln50_1_fu_1089_p2() {
    icmp_ln50_1_fu_1089_p2 = (!tmp_5_fu_1079_p4.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_5_fu_1079_p4.read()) < sc_bigint<3>(ap_const_lv3_1));
}

void demodulationFM::thread_icmp_ln50_fu_1073_p2() {
    icmp_ln50_fu_1073_p2 = (!tmp_3_fu_1063_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): (sc_bigint<4>(tmp_3_fu_1063_p4.read()) > sc_bigint<4>(ap_const_lv4_0));
}

void demodulationFM::thread_icmp_ln54_1_fu_1117_p2() {
    icmp_ln54_1_fu_1117_p2 = (!select_ln850_fu_1019_p3.read().is_01() || !ap_const_lv10_C0.is_01())? sc_lv<1>(): (sc_bigint<10>(select_ln850_fu_1019_p3.read()) < sc_bigint<10>(ap_const_lv10_C0));
}

void demodulationFM::thread_icmp_ln54_fu_1111_p2() {
    icmp_ln54_fu_1111_p2 = (!tmp_6_fu_1101_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_6_fu_1101_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void demodulationFM::thread_icmp_ln851_fu_999_p2() {
    icmp_ln851_fu_999_p2 = (!trunc_ln851_fu_995_p1.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln851_fu_995_p1.read() == ap_const_lv8_0);
}

void demodulationFM::thread_idx_1_fu_1027_p1() {
    idx_1_fu_1027_p1 = select_ln850_fu_1019_p3.read().range(6-1, 0);
}

void demodulationFM::thread_idx_2_fu_1537_p2() {
    idx_2_fu_1537_p2 = (!ap_const_lv7_40.is_01() || !select_ln59_fu_1529_p3.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_40) - sc_biguint<7>(select_ln59_fu_1529_p3.read()));
}

void demodulationFM::thread_idx_3_fu_1247_p2() {
    idx_3_fu_1247_p2 = (!ap_const_lv7_40.is_01() || !zext_ln16_fu_1243_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_40) - sc_biguint<7>(zext_ln16_fu_1243_p1.read()));
}

void demodulationFM::thread_idx_4_fu_1598_p2() {
    idx_4_fu_1598_p2 = (!ap_const_lv7_40.is_01() || !select_ln24_fu_1590_p3.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_40) - sc_biguint<7>(select_ln24_fu_1590_p3.read()));
}

void demodulationFM::thread_idx_fu_1137_p2() {
    idx_fu_1137_p2 = (!ap_const_lv7_40.is_01() || !zext_ln51_fu_1133_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_40) - sc_biguint<7>(zext_ln51_fu_1133_p1.read()));
}

void demodulationFM::thread_l_fu_932_p2() {
    l_fu_932_p2 = (!l_0_reg_416.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(l_0_reg_416.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void demodulationFM::thread_p_Result_s_fu_987_p3() {
    p_Result_s_fu_987_p3 = value_V_4_fu_969_p3.read().range(17, 17);
}

void demodulationFM::thread_p_Val2_11_fu_1753_p3() {
    p_Val2_11_fu_1753_p3 = (!ap_phi_reg_pp0_iter3_sign_3_i10_reg_494.read()[0].is_01())? sc_lv<9>(): ((ap_phi_reg_pp0_iter3_sign_3_i10_reg_494.read()[0].to_bool())? sub_ln703_1_fu_1748_p2.read(): p_Val2_10_reg_4298.read());
}

void demodulationFM::thread_p_Val2_9_fu_1733_p3() {
    p_Val2_9_fu_1733_p3 = (!ap_phi_reg_pp0_iter3_sign_3_i_reg_472.read()[0].is_01())? sc_lv<9>(): ((ap_phi_reg_pp0_iter3_sign_3_i_reg_472.read()[0].to_bool())? sub_ln703_fu_1728_p2.read(): p_Val2_8_reg_4292.read());
}

void demodulationFM::thread_r_V_12_fu_3526_p0() {
    r_V_12_fu_3526_p0 =  (sc_lv<18>) (sext_ln1118_fu_1744_p1.read());
}

void demodulationFM::thread_r_V_12_fu_3526_p1() {
    r_V_12_fu_3526_p1 =  (sc_lv<9>) (r_V_fu_1740_p1.read());
}

void demodulationFM::thread_r_V_14_fu_3532_p0() {
    r_V_14_fu_3532_p0 =  (sc_lv<9>) (r_V_fu_1740_p1.read());
}

void demodulationFM::thread_r_V_15_fu_3538_p1() {
    r_V_15_fu_3538_p1 =  (sc_lv<18>) (sext_ln1118_fu_1744_p1.read());
}

void demodulationFM::thread_r_V_16_fu_3955_p0() {
    r_V_16_fu_3955_p0 =  (sc_lv<18>) (r_V_6_fu_3430_p1.read());
}

void demodulationFM::thread_r_V_18_fu_3961_p0() {
    r_V_18_fu_3961_p0 =  (sc_lv<18>) (r_V_6_fu_3430_p1.read());
}

void demodulationFM::thread_r_V_18_fu_3961_p1() {
    r_V_18_fu_3961_p1 =  (sc_lv<18>) (r_V_6_fu_3430_p1.read());
}

void demodulationFM::thread_r_V_2_fu_1760_p1() {
    r_V_2_fu_1760_p1 = esl_sext<27,9>(p_Val2_11_fu_1753_p3.read());
}

void demodulationFM::thread_r_V_6_fu_3430_p1() {
    r_V_6_fu_3430_p1 = esl_sext<36,18>(trunc_ln708_s_reg_4555_pp0_iter17_reg.read());
}

void demodulationFM::thread_r_V_8_fu_3445_p1() {
    r_V_8_fu_3445_p1 = esl_sext<36,18>(trunc_ln708_2_reg_4577_pp0_iter18_reg.read());
}

void demodulationFM::thread_r_V_fu_1740_p1() {
    r_V_fu_1740_p1 = esl_sext<27,9>(p_Val2_9_fu_1733_p3.read());
}

void demodulationFM::thread_ret_V_1_fu_1005_p2() {
    ret_V_1_fu_1005_p2 = (!ap_const_lv10_1.is_01() || !ret_V_fu_977_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1) + sc_biguint<10>(ret_V_fu_977_p4.read()));
}

void demodulationFM::thread_ret_V_5_fu_1984_p2() {
    ret_V_5_fu_1984_p2 = (!zext_ln703_fu_1978_p1.read().is_01() || !zext_ln703_1_fu_1981_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(zext_ln703_fu_1978_p1.read()) - sc_biguint<28>(zext_ln703_1_fu_1981_p1.read()));
}

void demodulationFM::thread_ret_V_fu_977_p4() {
    ret_V_fu_977_p4 = value_V_4_fu_969_p3.read().range(17, 8);
}

void demodulationFM::thread_select_ln233_fu_1462_p3() {
    select_ln233_fu_1462_p3 = (!icmp_ln233_fu_1456_p2.read()[0].is_01())? sc_lv<17>(): ((icmp_ln233_fu_1456_p2.read()[0].to_bool())? add_ln233_fu_1450_p2.read(): ap_const_lv17_0);
}

void demodulationFM::thread_select_ln24_fu_1590_p3() {
    select_ln24_fu_1590_p3 = (!tmp_73_fu_1553_p3.read()[0].is_01())? sc_lv<7>(): ((tmp_73_fu_1553_p3.read()[0].to_bool())? sub_ln24_1_fu_1577_p2.read(): tmp_8_fu_1583_p3.read());
}

void demodulationFM::thread_select_ln59_fu_1529_p3() {
    select_ln59_fu_1529_p3 = (!tmp_7_fu_1492_p3.read()[0].is_01())? sc_lv<7>(): ((tmp_7_fu_1492_p3.read()[0].to_bool())? sub_ln59_1_fu_1516_p2.read(): tmp_4_fu_1522_p3.read());
}

void demodulationFM::thread_select_ln850_fu_1019_p3() {
    select_ln850_fu_1019_p3 = (!p_Result_s_fu_987_p3.read()[0].is_01())? sc_lv<10>(): ((p_Result_s_fu_987_p3.read()[0].to_bool())? select_ln851_fu_1011_p3.read(): ret_V_fu_977_p4.read());
}

void demodulationFM::thread_select_ln851_fu_1011_p3() {
    select_ln851_fu_1011_p3 = (!icmp_ln851_fu_999_p2.read()[0].is_01())? sc_lv<10>(): ((icmp_ln851_fu_999_p2.read()[0].to_bool())? ret_V_fu_977_p4.read(): ret_V_1_fu_1005_p2.read());
}

void demodulationFM::thread_sext_ln1118_10_fu_2084_p1() {
    sext_ln1118_10_fu_2084_p1 = esl_sext<23,18>(ap_phi_mux_hwin_Q_1_V_phi_fu_883_p4.read());
}

void demodulationFM::thread_sext_ln1118_118_fu_2926_p1() {
    sext_ln1118_118_fu_2926_p1 = esl_sext<24,23>(shl_ln1118_s_fu_2919_p3.read());
}

void demodulationFM::thread_sext_ln1118_119_fu_2937_p1() {
    sext_ln1118_119_fu_2937_p1 = esl_sext<24,19>(shl_ln1118_10_fu_2930_p3.read());
}

void demodulationFM::thread_sext_ln1118_11_fu_2096_p1() {
    sext_ln1118_11_fu_2096_p1 = esl_sext<23,22>(shl_ln1118_5_fu_2088_p3.read());
}

void demodulationFM::thread_sext_ln1118_120_fu_2947_p1() {
    sext_ln1118_120_fu_2947_p1 = esl_sext<32,24>(add_ln1118_4_fu_2941_p2.read());
}

void demodulationFM::thread_sext_ln1118_121_fu_3259_p1() {
    sext_ln1118_121_fu_3259_p1 = esl_sext<24,23>(shl_ln1118_11_fu_3251_p3.read());
}

void demodulationFM::thread_sext_ln1118_122_fu_3271_p1() {
    sext_ln1118_122_fu_3271_p1 = esl_sext<24,19>(shl_ln1118_12_fu_3263_p3.read());
}

void demodulationFM::thread_sext_ln1118_123_fu_3281_p1() {
    sext_ln1118_123_fu_3281_p1 = esl_sext<32,24>(add_ln1118_5_fu_3275_p2.read());
}

void demodulationFM::thread_sext_ln1118_124_fu_3025_p1() {
    sext_ln1118_124_fu_3025_p1 = esl_sext<23,18>(hwin_I_29_V_load_reg_4458_pp0_iter12_reg.read());
}

void demodulationFM::thread_sext_ln1118_125_fu_3035_p1() {
    sext_ln1118_125_fu_3035_p1 = esl_sext<23,22>(shl_ln1118_13_fu_3028_p3.read());
}

void demodulationFM::thread_sext_ln1118_126_fu_3045_p1() {
    sext_ln1118_126_fu_3045_p1 = esl_sext<32,23>(add_ln1118_6_fu_3039_p2.read());
}

void demodulationFM::thread_sext_ln1118_127_fu_3298_p1() {
    sext_ln1118_127_fu_3298_p1 = esl_sext<23,18>(hwin_Q_29_V_reg_516_pp0_iter16_reg.read());
}

void demodulationFM::thread_sext_ln1118_128_fu_3310_p1() {
    sext_ln1118_128_fu_3310_p1 = esl_sext<23,22>(shl_ln1118_14_fu_3302_p3.read());
}

void demodulationFM::thread_sext_ln1118_129_fu_3320_p1() {
    sext_ln1118_129_fu_3320_p1 = esl_sext<32,23>(add_ln1118_7_fu_3314_p2.read());
}

void demodulationFM::thread_sext_ln1118_12_fu_1349_p1() {
    sext_ln1118_12_fu_1349_p1 = esl_sext<24,23>(shl_ln1118_6_fu_1341_p3.read());
}

void demodulationFM::thread_sext_ln1118_130_fu_3069_p1() {
    sext_ln1118_130_fu_3069_p1 = esl_sext<22,21>(shl_ln1118_15_fu_3062_p3.read());
}

void demodulationFM::thread_sext_ln1118_131_fu_3080_p1() {
    sext_ln1118_131_fu_3080_p1 = esl_sext<22,19>(shl_ln1118_16_fu_3073_p3.read());
}

void demodulationFM::thread_sext_ln1118_132_fu_3090_p1() {
    sext_ln1118_132_fu_3090_p1 = esl_sext<32,22>(sub_ln1118_2_fu_3084_p2.read());
}

void demodulationFM::thread_sext_ln1118_133_fu_3355_p1() {
    sext_ln1118_133_fu_3355_p1 = esl_sext<22,21>(shl_ln1118_17_fu_3348_p3.read());
}

void demodulationFM::thread_sext_ln1118_134_fu_3366_p1() {
    sext_ln1118_134_fu_3366_p1 = esl_sext<22,19>(shl_ln1118_18_fu_3359_p3.read());
}

void demodulationFM::thread_sext_ln1118_135_fu_3376_p1() {
    sext_ln1118_135_fu_3376_p1 = esl_sext<32,22>(sub_ln1118_3_fu_3370_p2.read());
}

void demodulationFM::thread_sext_ln1118_13_fu_1361_p1() {
    sext_ln1118_13_fu_1361_p1 = esl_sext<24,19>(shl_ln1118_7_fu_1353_p3.read());
}

void demodulationFM::thread_sext_ln1118_14_fu_1371_p1() {
    sext_ln1118_14_fu_1371_p1 = esl_sext<32,24>(add_ln1118_2_fu_1365_p2.read());
}

void demodulationFM::thread_sext_ln1118_15_fu_2136_p1() {
    sext_ln1118_15_fu_2136_p1 = esl_sext<24,23>(shl_ln1118_8_fu_2128_p3.read());
}

void demodulationFM::thread_sext_ln1118_16_fu_2148_p1() {
    sext_ln1118_16_fu_2148_p1 = esl_sext<24,19>(shl_ln1118_9_fu_2140_p3.read());
}

void demodulationFM::thread_sext_ln1118_17_fu_2158_p1() {
    sext_ln1118_17_fu_2158_p1 = esl_sext<32,24>(add_ln1118_3_fu_2152_p2.read());
}

void demodulationFM::thread_sext_ln1118_1_fu_1764_p1() {
    sext_ln1118_1_fu_1764_p1 = esl_sext<27,18>(y_Q_V_V_dout.read());
}

void demodulationFM::thread_sext_ln1118_4_fu_1265_p1() {
    sext_ln1118_4_fu_1265_p1 = esl_sext<22,21>(shl_ln_fu_1257_p3.read());
}

void demodulationFM::thread_sext_ln1118_5_fu_1277_p1() {
    sext_ln1118_5_fu_1277_p1 = esl_sext<22,19>(shl_ln1118_1_fu_1269_p3.read());
}

void demodulationFM::thread_sext_ln1118_6_fu_2052_p1() {
    sext_ln1118_6_fu_2052_p1 = esl_sext<22,21>(shl_ln1118_2_fu_2044_p3.read());
}

void demodulationFM::thread_sext_ln1118_7_fu_2064_p1() {
    sext_ln1118_7_fu_2064_p1 = esl_sext<22,19>(shl_ln1118_3_fu_2056_p3.read());
}

void demodulationFM::thread_sext_ln1118_8_fu_1297_p0() {
    sext_ln1118_8_fu_1297_p0 = hwin_I_1_V_fu_236.read();
}

void demodulationFM::thread_sext_ln1118_8_fu_1297_p1() {
    sext_ln1118_8_fu_1297_p1 = esl_sext<23,18>(sext_ln1118_8_fu_1297_p0.read());
}

void demodulationFM::thread_sext_ln1118_9_fu_1309_p1() {
    sext_ln1118_9_fu_1309_p1 = esl_sext<23,22>(shl_ln1118_4_fu_1301_p3.read());
}

void demodulationFM::thread_sext_ln1118_fu_1744_p1() {
    sext_ln1118_fu_1744_p1 = esl_sext<27,18>(y_I_V_V_dout.read());
}

void demodulationFM::thread_sext_ln1192_1_fu_2118_p1() {
    sext_ln1192_1_fu_2118_p1 = esl_sext<24,22>(tmp_s_fu_2110_p3.read());
}

void demodulationFM::thread_sext_ln1192_fu_1331_p1() {
    sext_ln1192_fu_1331_p1 = esl_sext<24,22>(tmp_9_fu_1323_p3.read());
}

void demodulationFM::thread_sext_ln1265_1_fu_1609_p1() {
    sext_ln1265_1_fu_1609_p1 = esl_sext<64,10>(ap_phi_mux_idx_3_i9_phi_fu_459_p10.read());
}

void demodulationFM::thread_sext_ln1265_fu_1548_p1() {
    sext_ln1265_fu_1548_p1 = esl_sext<64,10>(ap_phi_mux_idx_3_i_phi_fu_442_p10.read());
}

void demodulationFM::thread_sext_ln728_1_fu_2106_p1() {
    sext_ln728_1_fu_2106_p1 = esl_sext<24,23>(add_ln1118_1_fu_2100_p2.read());
}

void demodulationFM::thread_sext_ln728_2_fu_1393_p1() {
    sext_ln728_2_fu_1393_p1 = esl_sext<32,24>(tmp_76_fu_1385_p3.read());
}

void demodulationFM::thread_sext_ln728_3_fu_2180_p1() {
    sext_ln728_3_fu_2180_p1 = esl_sext<32,24>(tmp_78_fu_2172_p3.read());
}

void demodulationFM::thread_sext_ln728_fu_1319_p1() {
    sext_ln728_fu_1319_p1 = esl_sext<24,23>(add_ln1118_fu_1313_p2.read());
}

void demodulationFM::thread_shl_ln1118_10_fu_2930_p3() {
    shl_ln1118_10_fu_2930_p3 = esl_concat<18,1>(hwin_I_28_V_load_reg_4419_pp0_iter11_reg.read(), ap_const_lv1_0);
}

void demodulationFM::thread_shl_ln1118_11_fu_3251_p3() {
    shl_ln1118_11_fu_3251_p3 = esl_concat<18,5>(hwin_Q_28_V_reg_528_pp0_iter16_reg.read(), ap_const_lv5_0);
}

void demodulationFM::thread_shl_ln1118_12_fu_3263_p3() {
    shl_ln1118_12_fu_3263_p3 = esl_concat<18,1>(hwin_Q_28_V_reg_528_pp0_iter16_reg.read(), ap_const_lv1_0);
}

void demodulationFM::thread_shl_ln1118_13_fu_3028_p3() {
    shl_ln1118_13_fu_3028_p3 = esl_concat<18,4>(hwin_I_29_V_load_reg_4458_pp0_iter12_reg.read(), ap_const_lv4_0);
}

void demodulationFM::thread_shl_ln1118_14_fu_3302_p3() {
    shl_ln1118_14_fu_3302_p3 = esl_concat<18,4>(hwin_Q_29_V_reg_516_pp0_iter16_reg.read(), ap_const_lv4_0);
}

void demodulationFM::thread_shl_ln1118_15_fu_3062_p3() {
    shl_ln1118_15_fu_3062_p3 = esl_concat<18,3>(tmp_r_V_5_reg_4464_pp0_iter12_reg.read(), ap_const_lv3_0);
}

void demodulationFM::thread_shl_ln1118_16_fu_3073_p3() {
    shl_ln1118_16_fu_3073_p3 = esl_concat<18,1>(tmp_r_V_5_reg_4464_pp0_iter12_reg.read(), ap_const_lv1_0);
}

void demodulationFM::thread_shl_ln1118_17_fu_3348_p3() {
    shl_ln1118_17_fu_3348_p3 = esl_concat<18,3>(tmp_i_V_5_reg_4441_pp0_iter16_reg.read(), ap_const_lv3_0);
}

void demodulationFM::thread_shl_ln1118_18_fu_3359_p3() {
    shl_ln1118_18_fu_3359_p3 = esl_concat<18,1>(tmp_i_V_5_reg_4441_pp0_iter16_reg.read(), ap_const_lv1_0);
}

void demodulationFM::thread_shl_ln1118_1_fu_1269_p3() {
    shl_ln1118_1_fu_1269_p3 = esl_concat<18,1>(hwin_I_V_1_0100_fu_232.read(), ap_const_lv1_0);
}

void demodulationFM::thread_shl_ln1118_2_fu_2044_p3() {
    shl_ln1118_2_fu_2044_p3 = esl_concat<18,3>(ap_phi_mux_hwin_Q_V_1_0_phi_fu_896_p4.read(), ap_const_lv3_0);
}

void demodulationFM::thread_shl_ln1118_3_fu_2056_p3() {
    shl_ln1118_3_fu_2056_p3 = esl_concat<18,1>(ap_phi_mux_hwin_Q_V_1_0_phi_fu_896_p4.read(), ap_const_lv1_0);
}

void demodulationFM::thread_shl_ln1118_4_fu_1301_p1() {
    shl_ln1118_4_fu_1301_p1 = hwin_I_1_V_fu_236.read();
}

void demodulationFM::thread_shl_ln1118_4_fu_1301_p3() {
    shl_ln1118_4_fu_1301_p3 = esl_concat<18,4>(shl_ln1118_4_fu_1301_p1.read(), ap_const_lv4_0);
}

void demodulationFM::thread_shl_ln1118_5_fu_2088_p3() {
    shl_ln1118_5_fu_2088_p3 = esl_concat<18,4>(ap_phi_mux_hwin_Q_1_V_phi_fu_883_p4.read(), ap_const_lv4_0);
}

void demodulationFM::thread_shl_ln1118_6_fu_1341_p3() {
    shl_ln1118_6_fu_1341_p3 = esl_concat<18,5>(hwin_I_2_V_fu_240.read(), ap_const_lv5_0);
}

void demodulationFM::thread_shl_ln1118_7_fu_1353_p3() {
    shl_ln1118_7_fu_1353_p3 = esl_concat<18,1>(hwin_I_2_V_fu_240.read(), ap_const_lv1_0);
}

void demodulationFM::thread_shl_ln1118_8_fu_2128_p3() {
    shl_ln1118_8_fu_2128_p3 = esl_concat<18,5>(ap_phi_mux_hwin_Q_2_V_phi_fu_870_p4.read(), ap_const_lv5_0);
}

void demodulationFM::thread_shl_ln1118_9_fu_2140_p3() {
    shl_ln1118_9_fu_2140_p3 = esl_concat<18,1>(ap_phi_mux_hwin_Q_2_V_phi_fu_870_p4.read(), ap_const_lv1_0);
}

void demodulationFM::thread_shl_ln1118_s_fu_2919_p3() {
    shl_ln1118_s_fu_2919_p3 = esl_concat<18,5>(hwin_I_28_V_load_reg_4419_pp0_iter11_reg.read(), ap_const_lv5_0);
}

void demodulationFM::thread_shl_ln728_50_fu_2960_p3() {
    shl_ln728_50_fu_2960_p3 = esl_concat<18,14>(tmp_61_fu_2951_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_shl_ln728_51_fu_3285_p3() {
    shl_ln728_51_fu_3285_p3 = esl_concat<18,14>(tmp_62_reg_4572.read(), ap_const_lv14_0);
}

void demodulationFM::thread_shl_ln728_52_fu_3049_p3() {
    shl_ln728_52_fu_3049_p3 = esl_concat<18,14>(tmp_63_reg_4545.read(), ap_const_lv14_0);
}

void demodulationFM::thread_shl_ln728_53_fu_3334_p3() {
    shl_ln728_53_fu_3334_p3 = esl_concat<18,14>(tmp_64_fu_3324_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_shl_ln728_54_fu_3104_p3() {
    shl_ln728_54_fu_3104_p3 = esl_concat<18,14>(tmp_65_fu_3094_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_shl_ln728_55_fu_3390_p3() {
    shl_ln728_55_fu_3390_p3 = esl_concat<18,14>(tmp_66_fu_3380_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_shl_ln_fu_1257_p3() {
    shl_ln_fu_1257_p3 = esl_concat<18,3>(hwin_I_V_1_0100_fu_232.read(), ap_const_lv3_0);
}

void demodulationFM::thread_sin_table_address0() {
    sin_table_address0 =  (sc_lv<7>) (sext_ln1265_1_fu_1609_p1.read());
}

void demodulationFM::thread_sin_table_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        sin_table_ce0 = ap_const_logic_1;
    } else {
        sin_table_ce0 = ap_const_logic_0;
    }
}

void demodulationFM::thread_sub_ln1118_1_fu_2068_p2() {
    sub_ln1118_1_fu_2068_p2 = (!sext_ln1118_6_fu_2052_p1.read().is_01() || !sext_ln1118_7_fu_2064_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_6_fu_2052_p1.read()) - sc_bigint<22>(sext_ln1118_7_fu_2064_p1.read()));
}

void demodulationFM::thread_sub_ln1118_2_fu_3084_p2() {
    sub_ln1118_2_fu_3084_p2 = (!sext_ln1118_130_fu_3069_p1.read().is_01() || !sext_ln1118_131_fu_3080_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_130_fu_3069_p1.read()) - sc_bigint<22>(sext_ln1118_131_fu_3080_p1.read()));
}

void demodulationFM::thread_sub_ln1118_3_fu_3370_p2() {
    sub_ln1118_3_fu_3370_p2 = (!sext_ln1118_133_fu_3355_p1.read().is_01() || !sext_ln1118_134_fu_3366_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_133_fu_3355_p1.read()) - sc_bigint<22>(sext_ln1118_134_fu_3366_p1.read()));
}

void demodulationFM::thread_sub_ln1118_fu_1281_p2() {
    sub_ln1118_fu_1281_p2 = (!sext_ln1118_4_fu_1265_p1.read().is_01() || !sext_ln1118_5_fu_1277_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_4_fu_1265_p1.read()) - sc_bigint<22>(sext_ln1118_5_fu_1277_p1.read()));
}

void demodulationFM::thread_sub_ln24_1_fu_1577_p2() {
    sub_ln24_1_fu_1577_p2 = (!ap_const_lv7_0.is_01() || !tmp_74_fu_1569_p3.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_0) - sc_biguint<7>(tmp_74_fu_1569_p3.read()));
}

void demodulationFM::thread_sub_ln24_fu_1563_p2() {
    sub_ln24_fu_1563_p2 = (!ap_const_lv6_0.is_01() || !trunc_ln24_fu_1560_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_0) - sc_biguint<6>(trunc_ln24_fu_1560_p1.read()));
}

void demodulationFM::thread_sub_ln59_1_fu_1516_p2() {
    sub_ln59_1_fu_1516_p2 = (!ap_const_lv7_0.is_01() || !tmp_11_fu_1508_p3.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_0) - sc_biguint<7>(tmp_11_fu_1508_p3.read()));
}

void demodulationFM::thread_sub_ln59_fu_1502_p2() {
    sub_ln59_fu_1502_p2 = (!ap_const_lv6_0.is_01() || !trunc_ln59_fu_1499_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_0) - sc_biguint<6>(trunc_ln59_fu_1499_p1.read()));
}

void demodulationFM::thread_sub_ln703_1_fu_1748_p2() {
    sub_ln703_1_fu_1748_p2 = (!ap_const_lv9_0.is_01() || !p_Val2_10_reg_4298.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(p_Val2_10_reg_4298.read()));
}

void demodulationFM::thread_sub_ln703_fu_1728_p2() {
    sub_ln703_fu_1728_p2 = (!ap_const_lv9_0.is_01() || !p_Val2_8_reg_4292.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(p_Val2_8_reg_4292.read()));
}

void demodulationFM::thread_tmp_10_fu_2194_p4() {
    tmp_10_fu_2194_p4 = add_ln1192_3_fu_2184_p2.read().range(31, 14);
}

void demodulationFM::thread_tmp_11_fu_1508_p3() {
    tmp_11_fu_1508_p3 = esl_concat<1,6>(ap_const_lv1_0, sub_ln59_fu_1502_p2.read());
}

void demodulationFM::thread_tmp_12_fu_1147_p3() {
    tmp_12_fu_1147_p3 = select_ln850_fu_1019_p3.read().range(9, 9);
}

void demodulationFM::thread_tmp_15_fu_1629_p4() {
    tmp_15_fu_1629_p4 = grp_fu_3490_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_16_fu_2298_p4() {
    tmp_16_fu_2298_p4 = grp_fu_3595_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_19_fu_1686_p4() {
    tmp_19_fu_1686_p4 = grp_fu_3508_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_1_fu_1407_p4() {
    tmp_1_fu_1407_p4 = add_ln1192_2_fu_1397_p2.read().range(31, 14);
}

void demodulationFM::thread_tmp_20_fu_2383_p4() {
    tmp_20_fu_2383_p4 = grp_fu_3631_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_23_fu_1783_p4() {
    tmp_23_fu_1783_p4 = grp_fu_3544_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_24_fu_2463_p4() {
    tmp_24_fu_2463_p4 = grp_fu_3667_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_27_fu_2236_p4() {
    tmp_27_fu_2236_p4 = grp_fu_3577_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_28_fu_2543_p4() {
    tmp_28_fu_2543_p4 = grp_fu_3703_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_2_fu_1037_p3() {
    tmp_2_fu_1037_p3 = select_ln850_fu_1019_p3.read().range(9, 9);
}

void demodulationFM::thread_tmp_31_fu_2337_p4() {
    tmp_31_fu_2337_p4 = grp_fu_3613_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_32_fu_2623_p4() {
    tmp_32_fu_2623_p4 = grp_fu_3739_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_35_fu_2422_p4() {
    tmp_35_fu_2422_p4 = grp_fu_3649_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_36_fu_2703_p4() {
    tmp_36_fu_2703_p4 = grp_fu_3775_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_39_fu_2502_p4() {
    tmp_39_fu_2502_p4 = grp_fu_3685_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_3_fu_1063_p4() {
    tmp_3_fu_1063_p4 = select_ln850_fu_1019_p3.read().range(9, 6);
}

void demodulationFM::thread_tmp_40_fu_2783_p4() {
    tmp_40_fu_2783_p4 = grp_fu_3811_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_43_fu_2582_p4() {
    tmp_43_fu_2582_p4 = grp_fu_3721_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_44_fu_2863_p4() {
    tmp_44_fu_2863_p4 = grp_fu_3847_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_47_fu_2662_p4() {
    tmp_47_fu_2662_p4 = grp_fu_3757_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_48_fu_2999_p4() {
    tmp_48_fu_2999_p4 = grp_fu_3883_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_4_fu_1522_p3() {
    tmp_4_fu_1522_p3 = esl_concat<1,6>(ap_const_lv1_0, idx_1_reg_4200.read());
}

void demodulationFM::thread_tmp_51_fu_2742_p4() {
    tmp_51_fu_2742_p4 = grp_fu_3793_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_52_fu_3143_p4() {
    tmp_52_fu_3143_p4 = grp_fu_3901_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_55_fu_2822_p4() {
    tmp_55_fu_2822_p4 = grp_fu_3829_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_56_fu_3184_p4() {
    tmp_56_fu_3184_p4 = grp_fu_3919_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_59_fu_2902_p4() {
    tmp_59_fu_2902_p4 = grp_fu_3865_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_5_fu_1079_p4() {
    tmp_5_fu_1079_p4 = select_ln850_fu_1019_p3.read().range(9, 7);
}

void demodulationFM::thread_tmp_60_fu_3225_p4() {
    tmp_60_fu_3225_p4 = grp_fu_3937_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_61_fu_2951_p4() {
    tmp_61_fu_2951_p4 = grp_fu_3874_p3.read().range(31, 14);
}

void demodulationFM::thread_tmp_64_fu_3324_p4() {
    tmp_64_fu_3324_p4 = add_ln1192_55_fu_3292_p2.read().range(31, 14);
}

void demodulationFM::thread_tmp_65_fu_3094_p4() {
    tmp_65_fu_3094_p4 = add_ln1192_56_fu_3056_p2.read().range(31, 14);
}

void demodulationFM::thread_tmp_66_fu_3380_p4() {
    tmp_66_fu_3380_p4 = add_ln1192_57_fu_3342_p2.read().range(31, 14);
}

void demodulationFM::thread_tmp_6_fu_1101_p4() {
    tmp_6_fu_1101_p4 = select_ln850_fu_1019_p3.read().range(9, 7);
}

void demodulationFM::thread_tmp_70_fu_1173_p4() {
    tmp_70_fu_1173_p4 = select_ln850_fu_1019_p3.read().range(9, 6);
}

void demodulationFM::thread_tmp_71_fu_1189_p4() {
    tmp_71_fu_1189_p4 = select_ln850_fu_1019_p3.read().range(9, 7);
}

void demodulationFM::thread_tmp_72_fu_1211_p4() {
    tmp_72_fu_1211_p4 = select_ln850_fu_1019_p3.read().range(9, 7);
}

void demodulationFM::thread_tmp_73_fu_1553_p3() {
    tmp_73_fu_1553_p3 = select_ln850_reg_4188.read().range(9, 9);
}

void demodulationFM::thread_tmp_74_fu_1569_p3() {
    tmp_74_fu_1569_p3 = esl_concat<1,6>(ap_const_lv1_0, sub_ln24_fu_1563_p2.read());
}

void demodulationFM::thread_tmp_75_fu_1375_p4() {
    tmp_75_fu_1375_p4 = add_ln1192_fu_1335_p2.read().range(23, 14);
}

void demodulationFM::thread_tmp_76_fu_1385_p3() {
    tmp_76_fu_1385_p3 = esl_concat<10,14>(tmp_75_fu_1375_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_tmp_77_fu_2162_p4() {
    tmp_77_fu_2162_p4 = add_ln1192_1_fu_2122_p2.read().range(23, 14);
}

void demodulationFM::thread_tmp_78_fu_2172_p3() {
    tmp_78_fu_2172_p3 = esl_concat<10,14>(tmp_77_fu_2162_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_tmp_7_fu_1492_p3() {
    tmp_7_fu_1492_p3 = select_ln850_reg_4188.read().range(9, 9);
}

void demodulationFM::thread_tmp_8_fu_1583_p3() {
    tmp_8_fu_1583_p3 = esl_concat<1,6>(ap_const_lv1_0, idx_1_reg_4200.read());
}

void demodulationFM::thread_tmp_9_fu_1323_p3() {
    tmp_9_fu_1323_p3 = esl_concat<8,14>(trunc_ln1_fu_1287_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_tmp_i_V_2_fu_2005_p2() {
    tmp_i_V_2_fu_2005_p2 = (!ap_const_lv18_0.is_01() || !tmp_i_V_fu_1990_p4.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ap_const_lv18_0) - sc_biguint<18>(tmp_i_V_fu_1990_p4.read()));
}

void demodulationFM::thread_tmp_i_V_3_fu_2028_p3() {
    tmp_i_V_3_fu_2028_p3 = (!icmp_ln190_fu_2000_p2.read()[0].is_01())? sc_lv<18>(): ((icmp_ln190_fu_2000_p2.read()[0].to_bool())? tmp_i_V_2_fu_2005_p2.read(): tmp_i_V_fu_1990_p4.read());
}

void demodulationFM::thread_tmp_i_V_5_fu_2036_p3() {
    tmp_i_V_5_fu_2036_p3 = (!and_ln195_fu_2022_p2.read()[0].is_01())? sc_lv<18>(): ((and_ln195_fu_2022_p2.read()[0].to_bool())? tmp_i_V_2_fu_2005_p2.read(): tmp_i_V_3_fu_2028_p3.read());
}

void demodulationFM::thread_tmp_i_V_fu_1990_p4() {
    tmp_i_V_fu_1990_p4 = ret_V_5_fu_1984_p2.read().range(25, 8);
}

void demodulationFM::thread_tmp_r_V_2_fu_2265_p2() {
    tmp_r_V_2_fu_2265_p2 = (!ap_const_lv18_0.is_01() || !tmp_r_V_reg_4425.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ap_const_lv18_0) - sc_biguint<18>(tmp_r_V_reg_4425.read()));
}

void demodulationFM::thread_tmp_r_V_3_fu_2270_p3() {
    tmp_r_V_3_fu_2270_p3 = (!icmp_ln190_reg_4431.read()[0].is_01())? sc_lv<18>(): ((icmp_ln190_reg_4431.read()[0].to_bool())? tmp_r_V_2_fu_2265_p2.read(): tmp_r_V_reg_4425.read());
}

void demodulationFM::thread_tmp_r_V_5_fu_2276_p3() {
    tmp_r_V_5_fu_2276_p3 = (!and_ln195_reg_4436.read()[0].is_01())? sc_lv<18>(): ((and_ln195_reg_4436.read()[0].to_bool())? tmp_r_V_2_fu_2265_p2.read(): tmp_r_V_3_fu_2270_p3.read());
}

void demodulationFM::thread_tmp_s_fu_2110_p3() {
    tmp_s_fu_2110_p3 = esl_concat<8,14>(trunc_ln708_1_fu_2074_p4.read(), ap_const_lv14_0);
}

void demodulationFM::thread_trunc_ln176_fu_953_p1() {
    trunc_ln176_fu_953_p1 = l_0_reg_416.read().range(3-1, 0);
}

void demodulationFM::thread_trunc_ln1_fu_1287_p4() {
    trunc_ln1_fu_1287_p4 = sub_ln1118_fu_1281_p2.read().range(21, 14);
}

void demodulationFM::thread_trunc_ln225_fu_1440_p1() {
    trunc_ln225_fu_1440_p1 = phi_urem_reg_427.read().range(7-1, 0);
}

void demodulationFM::thread_trunc_ln24_fu_1560_p1() {
    trunc_ln24_fu_1560_p1 = select_ln850_reg_4188.read().range(6-1, 0);
}

void demodulationFM::thread_trunc_ln59_fu_1499_p1() {
    trunc_ln59_fu_1499_p1 = select_ln850_reg_4188.read().range(6-1, 0);
}

void demodulationFM::thread_trunc_ln708_1_fu_2074_p4() {
    trunc_ln708_1_fu_2074_p4 = sub_ln1118_1_fu_2068_p2.read().range(21, 14);
}

void demodulationFM::thread_trunc_ln851_fu_995_p1() {
    trunc_ln851_fu_995_p1 = value_V_4_fu_969_p3.read().range(8-1, 0);
}

void demodulationFM::thread_value_V_4_fu_969_p3() {
    value_V_4_fu_969_p3 = (!icmp_ln1494_fu_957_p2.read()[0].is_01())? sc_lv<18>(): ((icmp_ln1494_fu_957_p2.read()[0].to_bool())? value_V_fu_963_p2.read(): value_V_3_reg_405.read());
}

void demodulationFM::thread_value_V_fu_963_p2() {
    value_V_fu_963_p2 = (!ap_const_lv18_30000.is_01() || !value_V_3_reg_405.read().is_01())? sc_lv<18>(): (sc_bigint<18>(ap_const_lv18_30000) + sc_biguint<18>(value_V_3_reg_405.read()));
}

void demodulationFM::thread_xor_ln11_fu_1155_p2() {
    xor_ln11_fu_1155_p2 = (tmp_12_fu_1147_p3.read() ^ ap_const_lv1_1);
}

void demodulationFM::thread_xor_ln190_fu_2016_p2() {
    xor_ln190_fu_2016_p2 = (icmp_ln190_fu_2000_p2.read() ^ ap_const_lv1_1);
}

void demodulationFM::thread_xor_ln46_fu_1045_p2() {
    xor_ln46_fu_1045_p2 = (tmp_2_fu_1037_p3.read() ^ ap_const_lv1_1);
}

void demodulationFM::thread_y_I_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0))) {
        y_I_V_V_blk_n = y_I_V_V_empty_n.read();
    } else {
        y_I_V_V_blk_n = ap_const_logic_1;
    }
}

void demodulationFM::thread_y_I_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()))) {
        y_I_V_V_read = ap_const_logic_1;
    } else {
        y_I_V_V_read = ap_const_logic_0;
    }
}

void demodulationFM::thread_y_Q_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0))) {
        y_Q_V_V_blk_n = y_Q_V_V_empty_n.read();
    } else {
        y_Q_V_V_blk_n = ap_const_logic_1;
    }
}

void demodulationFM::thread_y_Q_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(icmp_ln176_reg_4179_pp0_iter2_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()))) {
        y_Q_V_V_read = ap_const_logic_1;
    } else {
        y_Q_V_V_read = ap_const_logic_0;
    }
}

void demodulationFM::thread_y_demod_d_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter82.read()) && 
         esl_seteq<1,1,1>(icmp_ln219_reg_4259_pp0_iter81_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln225_reg_4263_pp0_iter81_reg.read()))) {
        y_demod_d_V_V_blk_n = y_demod_d_V_V_full_n.read();
    } else {
        y_demod_d_V_V_blk_n = ap_const_logic_1;
    }
}

void demodulationFM::thread_y_demod_d_V_V_din() {
    y_demod_d_V_V_din = grp_fu_3464_p2.read().range(29, 12);
}

void demodulationFM::thread_y_demod_d_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter82.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op850_write_state84.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()))) {
        y_demod_d_V_V_write = ap_const_logic_1;
    } else {
        y_demod_d_V_V_write = ap_const_logic_0;
    }
}

void demodulationFM::thread_zext_ln16_1_fu_1253_p1() {
    zext_ln16_1_fu_1253_p1 = esl_zext<10,7>(idx_3_fu_1247_p2.read());
}

void demodulationFM::thread_zext_ln16_fu_1243_p1() {
    zext_ln16_fu_1243_p1 = esl_zext<7,6>(idx_1_fu_1027_p1.read());
}

void demodulationFM::thread_zext_ln20_fu_1239_p1() {
    zext_ln20_fu_1239_p1 = esl_zext<10,6>(idx_1_fu_1027_p1.read());
}

void demodulationFM::thread_zext_ln24_fu_1604_p1() {
    zext_ln24_fu_1604_p1 = esl_zext<10,7>(idx_4_fu_1598_p2.read());
}

void demodulationFM::thread_zext_ln51_1_fu_1143_p1() {
    zext_ln51_1_fu_1143_p1 = esl_zext<10,7>(idx_fu_1137_p2.read());
}

void demodulationFM::thread_zext_ln51_fu_1133_p1() {
    zext_ln51_fu_1133_p1 = esl_zext<7,6>(idx_1_fu_1027_p1.read());
}

void demodulationFM::thread_zext_ln55_fu_1129_p1() {
    zext_ln55_fu_1129_p1 = esl_zext<10,6>(idx_1_fu_1027_p1.read());
}

void demodulationFM::thread_zext_ln59_fu_1543_p1() {
    zext_ln59_fu_1543_p1 = esl_zext<10,7>(idx_2_fu_1537_p2.read());
}

void demodulationFM::thread_zext_ln703_1_fu_1981_p1() {
    zext_ln703_1_fu_1981_p1 = esl_zext<28,27>(r_V_15_reg_4329.read());
}

void demodulationFM::thread_zext_ln703_fu_1978_p1() {
    zext_ln703_fu_1978_p1 = esl_zext<28,27>(r_V_14_reg_4324.read());
}

}

