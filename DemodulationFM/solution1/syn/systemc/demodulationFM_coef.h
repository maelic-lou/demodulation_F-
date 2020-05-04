// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __demodulationFM_coef_H__
#define __demodulationFM_coef_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct demodulationFM_coef_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 10;
  static const unsigned AddressRange = 31;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(demodulationFM_coef_ram) {
        ram[0] = "0b0000000110";
        ram[1] = "0b0000010001";
        ram[2] = "0b0000100010";
        ram[3] = "0b0000111011";
        ram[4] = "0b0001011101";
        ram[5] = "0b0010001001";
        ram[6] = "0b0010111110";
        ram[7] = "0b0011111011";
        ram[8] = "0b0100111110";
        ram[9] = "0b0110000100";
        ram[10] = "0b0111001001";
        ram[11] = "0b1000001001";
        ram[12] = "0b1001000001";
        ram[13] = "0b1001101011";
        ram[14] = "0b1010000110";
        ram[15] = "0b1010001111";
        ram[16] = "0b1010000110";
        ram[17] = "0b1001101011";
        ram[18] = "0b1001000001";
        ram[19] = "0b1000001001";
        ram[20] = "0b0111001001";
        ram[21] = "0b0110000100";
        ram[22] = "0b0100111110";
        ram[23] = "0b0011111011";
        ram[24] = "0b0010111110";
        ram[25] = "0b0010001001";
        ram[26] = "0b0001011101";
        ram[27] = "0b0000111011";
        ram[28] = "0b0000100010";
        ram[29] = "0b0000010001";
        ram[30] = "0b0000000110";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(demodulationFM_coef) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 31;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


demodulationFM_coef_ram* meminst;


SC_CTOR(demodulationFM_coef) {
meminst = new demodulationFM_coef_ram("demodulationFM_coef_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~demodulationFM_coef() {
    delete meminst;
}


};//endmodule
#endif
