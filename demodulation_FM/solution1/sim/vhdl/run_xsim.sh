
/opt/Xilinx/Vivado/2019.2/bin/xelab xil_defaultlib.apatb_demodulationFM_top glbl -prj demodulationFM.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims  -L unisims_ver -L xpm --initfile "/opt/Xilinx/Vivado/2019.2/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s demodulationFM -debug wave
/opt/Xilinx/Vivado/2019.2/bin/xsim --noieeewarnings demodulationFM -tclbatch demodulationFM.tcl

