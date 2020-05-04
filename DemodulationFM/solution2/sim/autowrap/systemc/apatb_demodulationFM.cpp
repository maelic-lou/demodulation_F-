// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "y_I_V_V"
#define AUTOTB_TVIN_y_I_V_V  "../tv/cdatafile/c.demodulationFM.autotvin_y_I_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_y_I_V_V  "../tv/stream_size/stream_size_in_y_I_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_y_I_V_V  "../tv/stream_size/stream_ingress_status_y_I_V_V.dat"
// wrapc file define: "y_Q_V_V"
#define AUTOTB_TVIN_y_Q_V_V  "../tv/cdatafile/c.demodulationFM.autotvin_y_Q_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_y_Q_V_V  "../tv/stream_size/stream_size_in_y_Q_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_y_Q_V_V  "../tv/stream_size/stream_ingress_status_y_Q_V_V.dat"
// wrapc file define: "y_demod_d_V_V"
#define AUTOTB_TVOUT_y_demod_d_V_V  "../tv/cdatafile/c.demodulationFM.autotvout_y_demod_d_V_V.dat"
#define AUTOTB_TVIN_y_demod_d_V_V  "../tv/cdatafile/c.demodulationFM.autotvin_y_demod_d_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_y_demod_d_V_V  "../tv/stream_size/stream_size_out_y_demod_d_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_y_demod_d_V_V  "../tv/stream_size/stream_egress_status_y_demod_d_V_V.dat"
// wrapc file define: "ap_return"
#define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.demodulationFM.autotvout_ap_return.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "y_demod_d_V_V"
#define AUTOTB_TVOUT_PC_y_demod_d_V_V  "../tv/rtldatafile/rtl.demodulationFM.autotvout_y_demod_d_V_V.dat"
// tvout file define: "ap_return"
#define AUTOTB_TVOUT_PC_ap_return  "../tv/rtldatafile/rtl.demodulationFM.autotvout_ap_return.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			y_I_V_V_depth = 0;
			y_Q_V_V_depth = 0;
			y_demod_d_V_V_depth = 0;
			ap_return_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{y_I_V_V " << y_I_V_V_depth << "}\n";
			total_list << "{y_Q_V_V " << y_Q_V_V_depth << "}\n";
			total_list << "{y_demod_d_V_V " << y_demod_d_V_V_depth << "}\n";
			total_list << "{ap_return " << ap_return_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int y_I_V_V_depth;
		int y_Q_V_V_depth;
		int y_demod_d_V_V_depth;
		int ap_return_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern int demodulationFM (
hls::stream<ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> > (&y_I),
hls::stream<ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> > (&y_Q),
hls::stream<ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> > (&y_demod_d));

int AESL_WRAP_demodulationFM (
hls::stream<ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> > (&y_I),
hls::stream<ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> > (&y_Q),
hls::stream<ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> > (&y_demod_d))
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		int AESL_return;
		// pop stream input: "y_I"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_y_I_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_y_I_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_y_I_V_V, AESL_token); // pop_size
			int aesl_tmp_1 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_1; i++)
			{
				y_I.read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_y_I_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "y_Q"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_y_Q_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_y_Q_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_y_Q_V_V, AESL_token); // pop_size
			int aesl_tmp_4 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_4; i++)
			{
				y_Q.read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_y_Q_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "y_demod_d"
		std::vector<ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_6;
		int aesl_tmp_7;
		int aesl_tmp_8 = 0;

		// read output stream size: "y_demod_d"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_y_demod_d_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_y_demod_d_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_y_demod_d_V_V, AESL_token); // pop_size
			aesl_tmp_7 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_y_demod_d_V_V, AESL_token); // [[/transaction]]
		}

		// output port post check: "y_demod_d_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_y_demod_d_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_y_demod_d_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_y_demod_d_V_V, AESL_token); // data

			std::vector<sc_bv<18> > y_demod_d_V_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'y_demod_d_V_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'y_demod_d_V_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					y_demod_d_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_y_demod_d_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_y_demod_d_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_7)
			{
				aesl_tmp_7 = i;
			}

			if (aesl_tmp_7 > 0 && aesl_tmp_6.size() < aesl_tmp_7)
			{
				int aesl_tmp_6_size = aesl_tmp_6.size();

				for (int tmp_aesl_tmp_6 = 0; tmp_aesl_tmp_6 < aesl_tmp_7 - aesl_tmp_6_size; tmp_aesl_tmp_6++)
				{
					ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_6.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: y_demod_d_V_V
				{
					// bitslice(17, 0)
					// {
						// celement: y_demod_d.V.V(17, 0)
						// {
							sc_lv<18>* y_demod_d_V_V_lv0_0_0_1 = new sc_lv<18>[aesl_tmp_7 - aesl_tmp_8];
						// }
					// }

					// bitslice(17, 0)
					{
						int hls_map_index = 0;
						// celement: y_demod_d.V.V(17, 0)
						{
							// carray: (aesl_tmp_8) => (aesl_tmp_7 - 1) @ (1)
							for (int i_0 = aesl_tmp_8; i_0 <= aesl_tmp_7 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_6[0]) != NULL) // check the null address if the c port is array or others
								{
									y_demod_d_V_V_lv0_0_0_1[hls_map_index].range(17, 0) = sc_bv<18>(y_demod_d_V_V_pc_buffer[hls_map_index].range(17, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(17, 0)
					{
						int hls_map_index = 0;
						// celement: y_demod_d.V.V(17, 0)
						{
							// carray: (aesl_tmp_8) => (aesl_tmp_7 - 1) @ (1)
							for (int i_0 = aesl_tmp_8; i_0 <= aesl_tmp_7 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_6[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_6[0]
								// output_left_conversion : (aesl_tmp_6[i_0]).range()
								// output_type_conversion : (y_demod_d_V_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_6[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_6[i_0]).range() = (y_demod_d_V_V_lv0_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "ap_return"
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data

			sc_bv<32> ap_return_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ap_return_pc_buffer = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ap_return))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ap_return
				{
					// bitslice(31, 0)
					// {
						// celement: return(31, 0)
						// {
							sc_lv<32> return_lv0_0_1_0;
						// }
					// }

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									return_lv0_0_1_0.range(31, 0) = sc_bv<32>(ap_return_pc_buffer.range(31, 0));
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								// sub                    : 
								// ori_name               : AESL_return
								// sub_1st_elem           : 
								// ori_name_1st_elem      : AESL_return
								// output_left_conversion : AESL_return
								// output_type_conversion : (return_lv0_0_1_0).to_uint64()
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									AESL_return = (return_lv0_0_1_0).to_uint64();
								}
							}
						}
					}
				}
			}
		}

		// push back output stream: "y_demod_d"
		for (int i = 0; i < aesl_tmp_7; i++)
		{
			y_demod_d.write(aesl_tmp_6[i]);
		}

		AESL_transaction_pc++;

		return AESL_return;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "y_I_V_V"
		char* tvin_y_I_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_y_I_V_V);
		char* wrapc_stream_size_in_y_I_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_y_I_V_V);
		char* wrapc_stream_ingress_status_y_I_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_y_I_V_V);

		// "y_Q_V_V"
		char* tvin_y_Q_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_y_Q_V_V);
		char* wrapc_stream_size_in_y_Q_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_y_Q_V_V);
		char* wrapc_stream_ingress_status_y_Q_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_y_Q_V_V);

		// "y_demod_d_V_V"
		char* tvin_y_demod_d_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_y_demod_d_V_V);
		char* tvout_y_demod_d_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_y_demod_d_V_V);
		char* wrapc_stream_size_out_y_demod_d_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_y_demod_d_V_V);
		char* wrapc_stream_egress_status_y_demod_d_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_y_demod_d_V_V);

		// "ap_return"
		char* tvout_ap_return = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ap_return);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// dump stream tvin: "y_I"
		std::vector<ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_0;
		int aesl_tmp_1 = 0;
		while (!y_I.empty())
		{
			aesl_tmp_0.push_back(y_I.read());
			aesl_tmp_1++;
		}

		// dump stream tvin: "y_Q"
		std::vector<ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_3;
		int aesl_tmp_4 = 0;
		while (!y_Q.empty())
		{
			aesl_tmp_3.push_back(y_Q.read());
			aesl_tmp_4++;
		}

		// dump stream tvin: "y_demod_d"
		std::vector<ap_fixed<18, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_6;
		int aesl_tmp_7 = 0;
		while (!y_demod_d.empty())
		{
			aesl_tmp_6.push_back(y_demod_d.read());
			aesl_tmp_7++;
		}

		// push back input stream: "y_I"
		for (int i = 0; i < aesl_tmp_1; i++)
		{
			y_I.write(aesl_tmp_0[i]);
		}

		// push back input stream: "y_Q"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			y_Q.write(aesl_tmp_3[i]);
		}

		// push back input stream: "y_demod_d"
		for (int i = 0; i < aesl_tmp_7; i++)
		{
			y_demod_d.write(aesl_tmp_6[i]);
		}

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		int AESL_return = demodulationFM(y_I, y_Q, y_demod_d);

		CodeState = DUMP_OUTPUTS;
		// record input size to tv3: "y_I"
		int aesl_tmp_2 = y_I.size();

		// record input size to tv3: "y_Q"
		int aesl_tmp_5 = y_Q.size();

		// pop output stream: "y_demod_d"
		int aesl_tmp_8 = aesl_tmp_7;
		aesl_tmp_7 = 0;
     aesl_tmp_6.clear();
		while (!y_demod_d.empty())
		{
			aesl_tmp_6.push_back(y_demod_d.read());
			aesl_tmp_7++;
		}

		// [[transaction]]
		sprintf(tvin_y_I_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_y_I_V_V, tvin_y_I_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_I_V_V, tvin_y_I_V_V);

		sc_bv<18>* y_I_V_V_tvin_wrapc_buffer = new sc_bv<18>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: y_I_V_V
		{
			// bitslice(17, 0)
			{
				int hls_map_index = 0;
				// celement: y_I.V.V(17, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_0[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_0[0]
						// regulate_c_name       : y_I_V_V
						// input_type_conversion : (aesl_tmp_0[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_0[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<18> y_I_V_V_tmp_mem;
							y_I_V_V_tmp_mem = (aesl_tmp_0[i_0]).range().to_string(SC_BIN).c_str();
							y_I_V_V_tvin_wrapc_buffer[hls_map_index].range(17, 0) = y_I_V_V_tmp_mem.range(17, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_y_I_V_V, "%s\n", (y_I_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_y_I_V_V, tvin_y_I_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_y_I_V_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_I_V_V, stream_ingress_size_y_I_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_I_V_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_y_I_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_I_V_V, stream_ingress_size_y_I_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_I_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_y_I_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_I_V_V, stream_ingress_size_y_I_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_I_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.y_I_V_V_depth);
		sprintf(tvin_y_I_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_y_I_V_V, tvin_y_I_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_I_V_V, tvin_y_I_V_V);

		// release memory allocation
		delete [] y_I_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_y_I_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_y_I_V_V, wrapc_stream_size_in_y_I_V_V);
		sprintf(wrapc_stream_size_in_y_I_V_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_y_I_V_V, wrapc_stream_size_in_y_I_V_V);
		sprintf(wrapc_stream_size_in_y_I_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_y_I_V_V, wrapc_stream_size_in_y_I_V_V);

		// [[transaction]]
		sprintf(tvin_y_Q_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_y_Q_V_V, tvin_y_Q_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_Q_V_V, tvin_y_Q_V_V);

		sc_bv<18>* y_Q_V_V_tvin_wrapc_buffer = new sc_bv<18>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: y_Q_V_V
		{
			// bitslice(17, 0)
			{
				int hls_map_index = 0;
				// celement: y_Q.V.V(17, 0)
				{
					// carray: (0) => (aesl_tmp_4 - aesl_tmp_5 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_4 - aesl_tmp_5 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_3[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_3[0]
						// regulate_c_name       : y_Q_V_V
						// input_type_conversion : (aesl_tmp_3[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_3[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<18> y_Q_V_V_tmp_mem;
							y_Q_V_V_tmp_mem = (aesl_tmp_3[i_0]).range().to_string(SC_BIN).c_str();
							y_Q_V_V_tvin_wrapc_buffer[hls_map_index].range(17, 0) = y_Q_V_V_tmp_mem.range(17, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvin_y_Q_V_V, "%s\n", (y_Q_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_y_Q_V_V, tvin_y_Q_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_4 > aesl_tmp_5)
     {
		sc_int<32> stream_ingress_size_y_Q_V_V = aesl_tmp_4;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_Q_V_V, stream_ingress_size_y_Q_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_Q_V_V, "\n");

		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			stream_ingress_size_y_Q_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_Q_V_V, stream_ingress_size_y_Q_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_Q_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_y_Q_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_Q_V_V, stream_ingress_size_y_Q_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_Q_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.y_Q_V_V_depth);
		sprintf(tvin_y_Q_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_y_Q_V_V, tvin_y_Q_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_y_Q_V_V, tvin_y_Q_V_V);

		// release memory allocation
		delete [] y_Q_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_y_Q_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_y_Q_V_V, wrapc_stream_size_in_y_Q_V_V);
		sprintf(wrapc_stream_size_in_y_Q_V_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_y_Q_V_V, wrapc_stream_size_in_y_Q_V_V);
		sprintf(wrapc_stream_size_in_y_Q_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_y_Q_V_V, wrapc_stream_size_in_y_Q_V_V);

		// [[transaction]]
		sprintf(tvout_y_demod_d_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_y_demod_d_V_V, tvout_y_demod_d_V_V);

		sc_bv<18>* y_demod_d_V_V_tvout_wrapc_buffer = new sc_bv<18>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: y_demod_d_V_V
		{
			// bitslice(17, 0)
			{
				int hls_map_index = 0;
				// celement: y_demod_d.V.V(17, 0)
				{
					// carray: (aesl_tmp_8) => (aesl_tmp_7 - 1) @ (1)
					for (int i_0 = aesl_tmp_8; i_0 <= aesl_tmp_7 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_6[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_6[0]
						// regulate_c_name       : y_demod_d_V_V
						// input_type_conversion : (aesl_tmp_6[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_6[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<18> y_demod_d_V_V_tmp_mem;
							y_demod_d_V_V_tmp_mem = (aesl_tmp_6[i_0]).range().to_string(SC_BIN).c_str();
							y_demod_d_V_V_tvout_wrapc_buffer[hls_map_index].range(17, 0) = y_demod_d_V_V_tmp_mem.range(17, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvout_y_demod_d_V_V, "%s\n", (y_demod_d_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_y_demod_d_V_V, tvout_y_demod_d_V_V);
		}

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.y_demod_d_V_V_depth);
		sprintf(tvout_y_demod_d_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_y_demod_d_V_V, tvout_y_demod_d_V_V);

		// release memory allocation
		delete [] y_demod_d_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_y_demod_d_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_y_demod_d_V_V, wrapc_stream_size_out_y_demod_d_V_V);
		sprintf(wrapc_stream_size_out_y_demod_d_V_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_y_demod_d_V_V, wrapc_stream_size_out_y_demod_d_V_V);
		sprintf(wrapc_stream_size_out_y_demod_d_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_y_demod_d_V_V, wrapc_stream_size_out_y_demod_d_V_V);

		// [[transaction]]
		sprintf(tvout_ap_return, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		sc_bv<32> ap_return_tvout_wrapc_buffer;

		// RTL Name: ap_return
		{
			// bitslice(31, 0)
			{
				// celement: return(31, 0)
				{
					// carray: (0) => (1) @ (0)
					{
						// sub                   : 
						// ori_name              : AESL_return
						// sub_1st_elem          : 
						// ori_name_1st_elem     : AESL_return
						// regulate_c_name       : return
						// input_type_conversion : AESL_return
						if (&(AESL_return) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> return_tmp_mem;
							return_tmp_mem = AESL_return;
							ap_return_tvout_wrapc_buffer.range(31, 0) = return_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_ap_return, "%s\n", (ap_return_tvout_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);
		}

		tcl_file.set_num(1, &tcl_file.ap_return_depth);
		sprintf(tvout_ap_return, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		// push back output stream: "y_demod_d"
		for (int i = 0; i < aesl_tmp_7; i++)
		{
			y_demod_d.write(aesl_tmp_6[i]);
		}

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "y_I_V_V"
		delete [] tvin_y_I_V_V;
		delete [] wrapc_stream_size_in_y_I_V_V;
		// release memory allocation: "y_Q_V_V"
		delete [] tvin_y_Q_V_V;
		delete [] wrapc_stream_size_in_y_Q_V_V;
		// release memory allocation: "y_demod_d_V_V"
		delete [] tvout_y_demod_d_V_V;
		delete [] tvin_y_demod_d_V_V;
		delete [] wrapc_stream_size_out_y_demod_d_V_V;
		// release memory allocation: "ap_return"
		delete [] tvout_ap_return;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

		return AESL_return;
	}
}

