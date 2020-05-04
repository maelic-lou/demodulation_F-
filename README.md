# demodulation_FM

Vivado HLS project witch transforms a demodulation FM implemented in C langage into VHDL langage.

## Getting Started

To start the project enter in the command prompt :

```
vivado_hls -p DemodulationFM/
```


## Running the tests
To test the demodulation_FM.cpp code execute the Run C Simulation command using the dedicated toolbar button or the Solution Menu. It compares the results obtained with the demodulation_FM.ccp code, which uses ap_fixed variable type, to the results obtained with the same code, but using double variables type and math functions for cosinus and sinus. This Simulation uses a testbench code : demodulation_FM_test.cpp. 

 To synthesize the code into VHDL code, execute the Run C Synthesis command using the dedicated toolbar button or the Solution Menu.
 
 To test this VHDL code synthesized, execute the Run C/RTL cosimulation command using the dedicated toolbar button or the Solution Menu. It tests the VHDL code with the same testbench code used to test demodulation.cpp code. 



## Acknowledgments


