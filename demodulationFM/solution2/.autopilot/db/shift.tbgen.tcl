set moduleName shift
set isTopModule 0
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
set C_modelName {shift}
set C_modelType { void 0 }
set C_modelArgList {
	{ ary_r_V int 32 regular {fifo 0 volatile }  }
	{ ary_i_V int 32 regular {fifo 0 volatile }  }
	{ ary_r_s_V int 32 regular {array 100000 { 0 3 } 0 1 }  }
	{ ary_i_s_V int 32 regular {array 100000 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "ary_r_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ary_i_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ary_r_s_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ary_i_s_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ary_r_V_dout sc_in sc_lv 32 signal 0 } 
	{ ary_r_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ ary_r_V_read sc_out sc_logic 1 signal 0 } 
	{ ary_i_V_dout sc_in sc_lv 32 signal 1 } 
	{ ary_i_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ ary_i_V_read sc_out sc_logic 1 signal 1 } 
	{ ary_r_s_V_address0 sc_out sc_lv 17 signal 2 } 
	{ ary_r_s_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ ary_r_s_V_we0 sc_out sc_logic 1 signal 2 } 
	{ ary_r_s_V_d0 sc_out sc_lv 32 signal 2 } 
	{ ary_i_s_V_address0 sc_out sc_lv 17 signal 3 } 
	{ ary_i_s_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ ary_i_s_V_we0 sc_out sc_logic 1 signal 3 } 
	{ ary_i_s_V_d0 sc_out sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ary_r_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ary_r_V", "role": "dout" }} , 
 	{ "name": "ary_r_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ary_r_V", "role": "empty_n" }} , 
 	{ "name": "ary_r_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ary_r_V", "role": "read" }} , 
 	{ "name": "ary_i_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ary_i_V", "role": "dout" }} , 
 	{ "name": "ary_i_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ary_i_V", "role": "empty_n" }} , 
 	{ "name": "ary_i_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ary_i_V", "role": "read" }} , 
 	{ "name": "ary_r_s_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "ary_r_s_V", "role": "address0" }} , 
 	{ "name": "ary_r_s_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ary_r_s_V", "role": "ce0" }} , 
 	{ "name": "ary_r_s_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ary_r_s_V", "role": "we0" }} , 
 	{ "name": "ary_r_s_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ary_r_s_V", "role": "d0" }} , 
 	{ "name": "ary_i_s_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "ary_i_s_V", "role": "address0" }} , 
 	{ "name": "ary_i_s_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ary_i_s_V", "role": "ce0" }} , 
 	{ "name": "ary_i_s_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ary_i_s_V", "role": "we0" }} , 
 	{ "name": "ary_i_s_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ary_i_s_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "shift",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "600001", "EstimateLatencyMax" : "600001",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ary_r_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ary_r_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ary_i_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ary_i_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ary_r_s_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ary_i_s_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "cos_table", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sin_table", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cos_table_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sin_table_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	shift {
		ary_r_V {Type I LastRead 2 FirstWrite -1}
		ary_i_V {Type I LastRead 2 FirstWrite -1}
		ary_r_s_V {Type O LastRead -1 FirstWrite 6}
		ary_i_s_V {Type O LastRead -1 FirstWrite 6}
		cos_table {Type I LastRead -1 FirstWrite -1}
		sin_table {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "600001", "Max" : "600001"}
	, {"Name" : "Interval", "Min" : "600001", "Max" : "600001"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	ary_r_V { ap_fifo {  { ary_r_V_dout fifo_data 0 32 }  { ary_r_V_empty_n fifo_status 0 1 }  { ary_r_V_read fifo_update 1 1 } } }
	ary_i_V { ap_fifo {  { ary_i_V_dout fifo_data 0 32 }  { ary_i_V_empty_n fifo_status 0 1 }  { ary_i_V_read fifo_update 1 1 } } }
	ary_r_s_V { ap_memory {  { ary_r_s_V_address0 mem_address 1 17 }  { ary_r_s_V_ce0 mem_ce 1 1 }  { ary_r_s_V_we0 mem_we 1 1 }  { ary_r_s_V_d0 mem_din 1 32 } } }
	ary_i_s_V { ap_memory {  { ary_i_s_V_address0 mem_address 1 17 }  { ary_i_s_V_ce0 mem_ce 1 1 }  { ary_i_s_V_we0 mem_we 1 1 }  { ary_i_s_V_d0 mem_din 1 32 } } }
}
