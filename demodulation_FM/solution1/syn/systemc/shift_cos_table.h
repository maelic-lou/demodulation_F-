// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __shift_cos_table_H__
#define __shift_cos_table_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct shift_cos_table_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 9;
  static const unsigned AddressRange = 65;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(shift_cos_table_ram) {
        ram[0] = "0b100000000";
        ram[1] = "0b011111111";
        ram[2] = "0b011111111";
        ram[3] = "0b011111111";
        ram[4] = "0b011111110";
        ram[5] = "0b011111110";
        ram[6] = "0b011111101";
        ram[7] = "0b011111100";
        ram[8] = "0b011111011";
        ram[9] = "0b011111001";
        ram[10] = "0b011111000";
        ram[11] = "0b011110110";
        ram[12] = "0b011110100";
        ram[13] = "0b011110011";
        ram[14] = "0b011110001";
        ram[15] = "0b011101110";
        ram[16] = "0b011101100";
        ram[17] = "0b011101010";
        ram[18] = "0b011100111";
        ram[19] = "0b011100100";
        ram[20] = "0b011100001";
        ram[21] = "0b011011110";
        ram[22] = "0b011011011";
        ram[23] = "0b011011000";
        ram[24] = "0b011010100";
        ram[25] = "0b011010001";
        ram[26] = "0b011001101";
        ram[27] = "0b011001001";
        ram[28] = "0b011000101";
        ram[29] = "0b011000001";
        ram[30] = "0b010111101";
        ram[31] = "0b010111001";
        ram[32] = "0b010110101";
        ram[33] = "0b010110000";
        ram[34] = "0b010101011";
        ram[35] = "0b010100111";
        ram[36] = "0b010100010";
        ram[37] = "0b010011101";
        ram[38] = "0b010011000";
        ram[39] = "0b010010011";
        ram[40] = "0b010001110";
        ram[41] = "0b010001000";
        ram[42] = "0b010000011";
        ram[43] = "0b001111110";
        ram[44] = "0b001111000";
        ram[45] = "0b001110011";
        ram[46] = "0b001101101";
        ram[47] = "0b001100111";
        ram[48] = "0b001100001";
        ram[49] = "0b001011100";
        ram[50] = "0b001010110";
        ram[51] = "0b001010000";
        ram[52] = "0b001001010";
        ram[53] = "0b001000100";
        ram[54] = "0b000111110";
        ram[55] = "0b000111000";
        ram[56] = "0b000110001";
        ram[57] = "0b000101011";
        ram[58] = "0b000100101";
        ram[59] = "0b000011111";
        ram[60] = "0b000011001";
        ram[61] = "0b000010010";
        ram[62] = "0b000001100";
        ram[63] = "0b000000110";
        ram[64] = "0b000000000";


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


SC_MODULE(shift_cos_table) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 65;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


shift_cos_table_ram* meminst;


SC_CTOR(shift_cos_table) {
meminst = new shift_cos_table_ram("shift_cos_table_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~shift_cos_table() {
    delete meminst;
}


};//endmodule
#endif
