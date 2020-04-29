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
	{ y_I_V int 32 regular {array 100000 { 2 3 } 1 1 }  }
	{ y_Q_V int 32 regular {array 100000 { 2 3 } 1 1 }  }
	{ y_demod_d_V int 32 regular {array 1250 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "y_I_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "y_I.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 99999,"step" : 1}]}]}]} , 
 	{ "Name" : "y_Q_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "y_Q.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 99999,"step" : 1}]}]}]} , 
 	{ "Name" : "y_demod_d_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "y_demod_d.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1249,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ y_I_V_address0 sc_out sc_lv 17 signal 0 } 
	{ y_I_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ y_I_V_we0 sc_out sc_logic 1 signal 0 } 
	{ y_I_V_d0 sc_out sc_lv 32 signal 0 } 
	{ y_I_V_q0 sc_in sc_lv 32 signal 0 } 
	{ y_Q_V_address0 sc_out sc_lv 17 signal 1 } 
	{ y_Q_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ y_Q_V_we0 sc_out sc_logic 1 signal 1 } 
	{ y_Q_V_d0 sc_out sc_lv 32 signal 1 } 
	{ y_Q_V_q0 sc_in sc_lv 32 signal 1 } 
	{ y_demod_d_V_address0 sc_out sc_lv 11 signal 2 } 
	{ y_demod_d_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ y_demod_d_V_we0 sc_out sc_logic 1 signal 2 } 
	{ y_demod_d_V_d0 sc_out sc_lv 32 signal 2 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "y_I_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "y_I_V", "role": "address0" }} , 
 	{ "name": "y_I_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_I_V", "role": "ce0" }} , 
 	{ "name": "y_I_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_I_V", "role": "we0" }} , 
 	{ "name": "y_I_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "y_I_V", "role": "d0" }} , 
 	{ "name": "y_I_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "y_I_V", "role": "q0" }} , 
 	{ "name": "y_Q_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "y_Q_V", "role": "address0" }} , 
 	{ "name": "y_Q_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_Q_V", "role": "ce0" }} , 
 	{ "name": "y_Q_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_Q_V", "role": "we0" }} , 
 	{ "name": "y_Q_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "y_Q_V", "role": "d0" }} , 
 	{ "name": "y_Q_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "y_Q_V", "role": "q0" }} , 
 	{ "name": "y_demod_d_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "y_demod_d_V", "role": "address0" }} , 
 	{ "name": "y_demod_d_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_demod_d_V", "role": "ce0" }} , 
 	{ "name": "y_demod_d_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "y_demod_d_V", "role": "we0" }} , 
 	{ "name": "y_demod_d_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "y_demod_d_V", "role": "d0" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7"],
		"CDFG" : "demodulationFM",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10797088", "EstimateLatencyMax" : "22696969",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "y_I_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "y_Q_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "y_demod_d_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "cos_table", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sin_table", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "coef_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cos_table_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sin_table_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.coef_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hwin_I_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hwin_Q_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_urg8j_U1", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demodulationFM_sdhbi_U2", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	demodulationFM {
		y_I_V {Type IO LastRead 5 FirstWrite 5}
		y_Q_V {Type IO LastRead 5 FirstWrite 5}
		y_demod_d_V {Type O LastRead -1 FirstWrite 3}
		cos_table {Type I LastRead -1 FirstWrite -1}
		sin_table {Type I LastRead -1 FirstWrite -1}
		coef_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "10797088", "Max" : "22696969"}
	, {"Name" : "Interval", "Min" : "10797089", "Max" : "22696970"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	y_I_V { ap_memory {  { y_I_V_address0 mem_address 1 17 }  { y_I_V_ce0 mem_ce 1 1 }  { y_I_V_we0 mem_we 1 1 }  { y_I_V_d0 mem_din 1 32 }  { y_I_V_q0 mem_dout 0 32 } } }
	y_Q_V { ap_memory {  { y_Q_V_address0 mem_address 1 17 }  { y_Q_V_ce0 mem_ce 1 1 }  { y_Q_V_we0 mem_we 1 1 }  { y_Q_V_d0 mem_din 1 32 }  { y_Q_V_q0 mem_dout 0 32 } } }
	y_demod_d_V { ap_memory {  { y_demod_d_V_address0 mem_address 1 11 }  { y_demod_d_V_ce0 mem_ce 1 1 }  { y_demod_d_V_we0 mem_we 1 1 }  { y_demod_d_V_d0 mem_din 1 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
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
