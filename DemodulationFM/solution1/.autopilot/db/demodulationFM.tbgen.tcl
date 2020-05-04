set moduleName demodulationFM
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {demodulationFM}
set C_modelType { int 32 }
set C_modelArgList {
	{ y_I_V_V int 18 regular {fifo 0 volatile }  }
	{ y_Q_V_V int 18 regular {fifo 0 volatile }  }
	{ y_demod_d_V_V int 18 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "y_I_V_V", "interface" : "fifo", "bitwidth" : 18, "direction" : "READONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "y_I.V.V","cData": "int18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "y_Q_V_V", "interface" : "fifo", "bitwidth" : 18, "direction" : "READONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "y_Q.V.V","cData": "int18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "y_demod_d_V_V", "interface" : "fifo", "bitwidth" : 18, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "y_demod_d.V.V","cData": "int18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ y_I_V_V_dout sc_in sc_lv 18 signal 0 } 
	{ y_I_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ y_I_V_V_read sc_out sc_logic 1 signal 0 } 
	{ y_Q_V_V_dout sc_in sc_lv 18 signal 1 } 
	{ y_Q_V_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ y_Q_V_V_read sc_out sc_logic 1 signal 1 } 
	{ y_demod_d_V_V_din sc_out sc_lv 18 signal 2 } 
	{ y_demod_d_V_V_full_n sc_in sc_logic 1 signal 2 } 
	{ y_demod_d_V_V_write sc_out sc_logic 1 signal 2 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "y_I_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "y_I_V_V", "role": "dout" }} , 
 	{ "name": "y_I_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_I_V_V", "role": "empty_n" }} , 
 	{ "name": "y_I_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_I_V_V", "role": "read" }} , 
 	{ "name": "y_Q_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "y_Q_V_V", "role": "dout" }} , 
 	{ "name": "y_Q_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_Q_V_V", "role": "empty_n" }} , 
 	{ "name": "y_Q_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_Q_V_V", "role": "read" }} , 
 	{ "name": "y_demod_d_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "y_demod_d_V_V", "role": "din" }} , 
 	{ "name": "y_demod_d_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_demod_d_V_V", "role": "full_n" }} , 
 	{ "name": "y_demod_d_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_demod_d_V_V", "role": "write" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16"],
		"CDFG" : "demodulationFM",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7100016", "EstimateLatencyMax" : "13400016",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "y_I_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "y_I_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "y_Q_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "y_Q_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "y_demod_d_V_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "y_demod_d_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cos_table", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sin_table", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "coef", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cos_table_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sin_table_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.coef_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hwin_I_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hwin_Q_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_sdfYi_U1", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_mug8j_U2", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_mahbi_U3", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_muibs_U4", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_muibs_U5", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_mujbC_U6", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_mujbC_U7", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_makbM_U8", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_makbM_U9", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_malbW_U10", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_mamb6_U11", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	demodulationFM {
		y_I_V_V {Type I LastRead 16 FirstWrite -1}
		y_Q_V_V {Type I LastRead 16 FirstWrite -1}
		y_demod_d_V_V {Type O LastRead -1 FirstWrite 87}
		cos_table {Type I LastRead -1 FirstWrite -1}
		sin_table {Type I LastRead -1 FirstWrite -1}
		coef {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "7100016", "Max" : "13400016"}
	, {"Name" : "Interval", "Min" : "7100017", "Max" : "13400017"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	y_I_V_V { ap_fifo {  { y_I_V_V_dout fifo_data 0 18 }  { y_I_V_V_empty_n fifo_status 0 1 }  { y_I_V_V_read fifo_update 1 1 } } }
	y_Q_V_V { ap_fifo {  { y_Q_V_V_dout fifo_data 0 18 }  { y_Q_V_V_empty_n fifo_status 0 1 }  { y_Q_V_V_read fifo_update 1 1 } } }
	y_demod_d_V_V { ap_fifo {  { y_demod_d_V_V_din fifo_data 1 18 }  { y_demod_d_V_V_full_n fifo_status 0 1 }  { y_demod_d_V_V_write fifo_update 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
	y_I_V_V { fifo_read 100000 no_conditional }
	y_Q_V_V { fifo_read 100000 no_conditional }
	y_demod_d_V_V { fifo_write 100000 has_conditional }
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
