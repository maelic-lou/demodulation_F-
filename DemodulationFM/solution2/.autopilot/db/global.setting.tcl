
set TopModule "demodulationFM"
set ClockPeriod 10
set ClockList ap_clk
set HasVivadoClockPeriod 0
set CombLogicFlag 0
set PipelineFlag 0
set DataflowTaskPipelineFlag 1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 0
set FftOrFirFlag 0
set NbRWValue 0
set intNbAccess 0
set NewDSPMapping 1
set HasDSPModule 1
set ResetLevelFlag 1
set ResetStyle control
set ResetSyncFlag 1
set ResetRegisterFlag 0
set ResetVariableFlag 0
set FsmEncStyle onehot
set MaxFanout 0
set RtlPrefix {}
set ExtraCCFlags {}
set ExtraCLdFlags {}
set SynCheckOptions {}
set PresynOptions {}
set PreprocOptions {}
set SchedOptions {}
set BindOptions {}
set RtlGenOptions {}
set RtlWriterOptions {}
set CbcGenFlag {}
set CasGenFlag {}
set CasMonitorFlag {}
set AutoSimOptions {}
set ExportMCPathFlag 0
set SCTraceFileName mytrace
set SCTraceFileFormat vcd
set SCTraceOption all
set TargetInfo xc7k70t:-fbv676:-1
set SourceFiles {sc {} c ../../demodulation_FM.cpp}
set SourceFlags {sc {} c {{}}}
set DirectiveFile /home/louart/Documents/these/partie_pratique/experience/c/demodulation_FM1/DemodulationFM/solution2/solution2.directive
set TBFiles {verilog {../../values_FMcapture ../../demodulation_FM_test.cpp ../../data6.dat ../../FMcapture1.dat} bc {../../values_FMcapture ../../demodulation_FM_test.cpp ../../data6.dat ../../FMcapture1.dat} sc {../../values_FMcapture ../../demodulation_FM_test.cpp ../../data6.dat ../../FMcapture1.dat} vhdl {../../values_FMcapture ../../demodulation_FM_test.cpp ../../data6.dat ../../FMcapture1.dat} c {} cas {../../values_FMcapture ../../demodulation_FM_test.cpp ../../data6.dat ../../FMcapture1.dat}}
set SpecLanguage C
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {verilog {} bc {} sc {} vhdl {} c {} cas {}}
set TBInstNames {verilog {} bc {} sc {} vhdl {} c {} cas {}}
set XDCFiles {}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set TBTVFileNotFound {}
set AppFile ../vivado_hls.app
set ApsFile solution2.aps
set AvePath ../..
set DefaultPlatform DefaultPlatform
set multiClockList {}
set SCPortClockMap {}
set intNbAccess 0
set PlatformFiles {{DefaultPlatform {xilinx/kintex7/kintex7 xilinx/kintex7/kintex7_fpv6}}}
set HPFPO 0
