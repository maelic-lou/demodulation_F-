// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __fir_coef_H__
#define __fir_coef_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct fir_coef_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 14;
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


   SC_CTOR(fir_coef_ram) {
        ram[0] = "0b11111111111111";
        ram[1] = "0b11111111111010";
        ram[2] = "0b11111111110000";
        ram[3] = "0b11111111100011";
        ram[4] = "0b11111111011111";
        ram[5] = "0b00000000000000";
        ram[6] = "0b00000001110101";
        ram[7] = "0b00000101111011";
        ram[8] = "0b00001101001100";
        ram[9] = "0b00011000001101";
        ram[10] = "0b00100110110000";
        ram[11] = "0b00110111110000";
        ram[12] = "0b01001001001000";
        ram[13] = "0b01011000010100";
        ram[14] = "0b01100010101101";
        ram[15] = "0b01100110011001";
        ram[16] = "0b01100010101101";
        ram[17] = "0b01011000010100";
        ram[18] = "0b01001001001000";
        ram[19] = "0b00110111110000";
        ram[20] = "0b00100110110000";
        ram[21] = "0b00011000001101";
        ram[22] = "0b00001101001100";
        ram[23] = "0b00000101111011";
        ram[24] = "0b00000001110101";
        ram[25] = "0b00000000000000";
        ram[26] = "0b11111111011111";
        ram[27] = "0b11111111100011";
        ram[28] = "0b11111111110000";
        ram[29] = "0b11111111111010";
        ram[30] = "0b11111111111111";


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


SC_MODULE(fir_coef) {


static const unsigned DataWidth = 14;
static const unsigned AddressRange = 31;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


fir_coef_ram* meminst;


SC_CTOR(fir_coef) {
meminst = new fir_coef_ram("fir_coef_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~fir_coef() {
    delete meminst;
}


};//endmodule
#endif
