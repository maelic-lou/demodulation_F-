############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project demodulationFM
set_top demodulationFM
add_files demodulation_FM.cpp
add_files -tb FMcapture1.dat
add_files -tb data1_i.dat
add_files -tb data1_r.dat
add_files -tb data2_i.dat
add_files -tb data2_r.dat
add_files -tb data3_i.dat
add_files -tb data3_r.dat
add_files -tb data4_i.dat
add_files -tb data4_r.dat
add_files -tb data5.dat
add_files -tb data6.dat
add_files -tb demodulation_FM_test.cpp
add_files -tb values_FMcapture
open_solution "solution2"
set_part {xc7k70t-fbv676-1}
create_clock -period 10 -name default
#source "./demodulationFM/solution2/directives.tcl"
csim_design
csynth_design
cosim_design -rtl vhdl
export_design -format ip_catalog
