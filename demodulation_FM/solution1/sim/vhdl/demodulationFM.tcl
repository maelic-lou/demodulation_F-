
log_wave [get_objects -filter {type == in_port || type == out_port || type == inout_port || type == port} /apatb_demodulationFM_top/AESL_inst_demodulationFM/*]
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set return_group [add_wave_group return(wire) -into $coutputgroup]
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/ap_return -into $return_group -radix hex
set y_demod_d_group [add_wave_group y_demod_d(memory) -into $coutputgroup]
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/y_demod_d_V_d0 -into $y_demod_d_group -radix hex
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/y_demod_d_V_we0 -into $y_demod_d_group -color #ffff00 -radix hex
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/y_demod_d_V_ce0 -into $y_demod_d_group -color #ffff00 -radix hex
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/y_demod_d_V_address0 -into $y_demod_d_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set y_Q_group [add_wave_group y_Q(memory) -into $cinputgroup]
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/y_Q_V_q0 -into $y_Q_group -radix hex
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/y_Q_V_ce0 -into $y_Q_group -color #ffff00 -radix hex
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/y_Q_V_address0 -into $y_Q_group -radix hex
set y_I_group [add_wave_group y_I(memory) -into $cinputgroup]
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/y_I_V_q0 -into $y_I_group -radix hex
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/y_I_V_ce0 -into $y_I_group -color #ffff00 -radix hex
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/y_I_V_address0 -into $y_I_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/ap_start -into $blocksiggroup
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/ap_done -into $blocksiggroup
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/ap_idle -into $blocksiggroup
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_demodulationFM_top/AESL_inst_demodulationFM/ap_clk -into $clockgroup
save_wave_config demodulationFM.wcfg
run all
quit

