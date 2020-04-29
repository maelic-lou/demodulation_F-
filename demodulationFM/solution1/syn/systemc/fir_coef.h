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

  static const unsigned DataWidth = 12;
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
        ram[0] = "0b000000011010";
        ram[1] = "0b000001000101";
        ram[2] = "0b000010001001";
        ram[3] = "0b000011101110";
        ram[4] = "0b000101110111";
        ram[5] = "0b001000100110";
        ram[6] = "0b001011111010";
        ram[7] = "0b001111101111";
        ram[8] = "0b010011111011";
        ram[9] = "0b011000010010";
        ram[10] = "0b011100100111";
        ram[11] = "0b100000100111";
        ram[12] = "0b100100000100";
        ram[13] = "0b100110101101";
        ram[14] = "0b101000011000";
        ram[15] = "0b101000111101";
        ram[16] = "0b101000011000";
        ram[17] = "0b100110101101";
        ram[18] = "0b100100000100";
        ram[19] = "0b100000100111";
        ram[20] = "0b011100100111";
        ram[21] = "0b011000010010";
        ram[22] = "0b010011111011";
        ram[23] = "0b001111101111";
        ram[24] = "0b001011111010";
        ram[25] = "0b001000100110";
        ram[26] = "0b000101110111";
        ram[27] = "0b000011101110";
        ram[28] = "0b000010001001";
        ram[29] = "0b000001000101";
        ram[30] = "0b000000011010";


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


static const unsigned DataWidth = 12;
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
