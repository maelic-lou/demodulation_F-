############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project DemodulationFM
set_top demodulationFM
add_files demodulation_FM.cpp
add_files -tb FMcapture1.dat
add_files -tb data6.dat
add_files -tb demodulation_FM_test.cpp
add_files -tb values_FMcapture
open_solution "solution1"
set_part {xc7k70tfbv676-1}
create_clock -period 10 -name default
#source "./DemodulationFM/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
