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


// wrapc file define: "y_I_V"
#define AUTOTB_TVIN_y_I_V  "../tv/cdatafile/c.demodulationFM.autotvin_y_I_V.dat"
// wrapc file define: "y_Q_V"
#define AUTOTB_TVIN_y_Q_V  "../tv/cdatafile/c.demodulationFM.autotvin_y_Q_V.dat"
// wrapc file define: "y_demod_d_V"
#define AUTOTB_TVOUT_y_demod_d_V  "../tv/cdatafile/c.demodulationFM.autotvout_y_demod_d_V.dat"
#define AUTOTB_TVIN_y_demod_d_V  "../tv/cdatafile/c.demodulationFM.autotvin_y_demod_d_V.dat"
// wrapc file define: "ap_return"
#define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.demodulationFM.autotvout_ap_return.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "y_demod_d_V"
#define AUTOTB_TVOUT_PC_y_demod_d_V  "../tv/rtldatafile/rtl.demodulationFM.autotvout_y_demod_d_V.dat"
// tvout file define: "ap_return"
#define AUTOTB_TVOUT_PC_ap_return  "../tv/rtldatafile/rtl.demodulationFM.autotvout_ap_return.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			y_I_V_depth = 0;
			y_Q_V_depth = 0;
			y_demod_d_V_depth = 0;
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
			total_list << "{y_I_V " << y_I_V_depth << "}\n";
			total_list << "{y_Q_V " << y_Q_V_depth << "}\n";
			total_list << "{y_demod_d_V " << y_demod_d_V_depth << "}\n";
			total_list << "{ap_return " << ap_return_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int y_I_V_depth;
		int y_Q_V_depth;
		int y_demod_d_V_depth;
		int ap_return_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern int demodulationFM (
ap_fixed<32, 16, (ap_q_mode) 5, (ap_o_mode)3, 0> y_I[40000],
ap_fixed<32, 16, (ap_q_mode) 5, (ap_o_mode)3, 0> y_Q[40000],
ap_fixed<32, 16, (ap_q_mode) 5, (ap_o_mode)3, 0> y_demod_d[40000]);

int AESL_WRAP_demodulationFM (
ap_fixed<32, 16, (ap_q_mode) 5, (ap_o_mode)3, 0> y_I[40000],
ap_fixed<32, 16, (ap_q_mode) 5, (ap_o_mode)3, 0> y_Q[40000],
ap_fixed<32, 16, (ap_q_mode) 5, (ap_o_mode)3, 0> y_demod_d[40000])
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

		// output port post check: "y_demod_d_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_y_demod_d_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_y_demod_d_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_y_demod_d_V, AESL_token); // data

			sc_bv<32> *y_demod_d_V_pc_buffer = new sc_bv<32>[40000];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'y_demod_d_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'y_demod_d_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					y_demod_d_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_y_demod_d_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_y_demod_d_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: y_demod_d_V
				{
					// bitslice(31, 0)
					// {
						// celement: y_demod_d.V(31, 0)
						// {
							sc_lv<32>* y_demod_d_V_lv0_0_39999_1 = new sc_lv<32>[40000];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: y_demod_d.V(31, 0)
						{
							// carray: (0) => (39999) @ (1)
							for (int i_0 = 0; i_0 <= 39999; i_0 += 1)
							{
								if (&(y_demod_d[0]) != NULL) // check the null address if the c port is array or others
								{
									y_demod_d_V_lv0_0_39999_1[hls_map_index].range(31, 0) = sc_bv<32>(y_demod_d_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: y_demod_d.V(31, 0)
						{
							// carray: (0) => (39999) @ (1)
							for (int i_0 = 0; i_0 <= 39999; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : y_demod_d[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : y_demod_d[0]
								// output_left_conversion : (y_demod_d[i_0]).range()
								// output_type_conversion : (y_demod_d_V_lv0_0_39999_1[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(y_demod_d[0]) != NULL) // check the null address if the c port is array or others
								{
									(y_demod_d[i_0]).range() = (y_demod_d_V_lv0_0_39999_1[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] y_demod_d_V_pc_buffer;
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

		AESL_transaction_pc++;

		return AESL_return;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "y_I_V"
		char* tvin_y_I_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_y_I_V);

		// "y_Q_V"
		char* tvin_y_Q_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_y_Q_V);

		// "y_demod_d_V"
		char* tvin_y_demod_d_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_y_demod_d_V);
		char* tvout_y_demod_d_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_y_demod_d_V);

		// "ap_return"
		char* tvout_ap_return = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ap_return);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_y_I_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_y_I_V, tvin_y_I_V);

		sc_bv<32>* y_I_V_tvin_wrapc_buffer = new sc_bv<32>[40000];

		// RTL Name: y_I_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: y_I.V(31, 0)
				{
					// carray: (0) => (39999) @ (1)
					for (int i_0 = 0; i_0 <= 39999; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : y_I[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : y_I[0]
						// regulate_c_name       : y_I_V
						// input_type_conversion : (y_I[i_0]).range().to_string(SC_BIN).c_str()
						if (&(y_I[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> y_I_V_tmp_mem;
							y_I_V_tmp_mem = (y_I[i_0]).range().to_string(SC_BIN).c_str();
							y_I_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = y_I_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 40000; i++)
		{
			sprintf(tvin_y_I_V, "%s\n", (y_I_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_y_I_V, tvin_y_I_V);
		}

		tcl_file.set_num(40000, &tcl_file.y_I_V_depth);
		sprintf(tvin_y_I_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_y_I_V, tvin_y_I_V);

		// release memory allocation
		delete [] y_I_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_y_Q_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_y_Q_V, tvin_y_Q_V);

		sc_bv<32>* y_Q_V_tvin_wrapc_buffer = new sc_bv<32>[40000];

		// RTL Name: y_Q_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: y_Q.V(31, 0)
				{
					// carray: (0) => (39999) @ (1)
					for (int i_0 = 0; i_0 <= 39999; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : y_Q[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : y_Q[0]
						// regulate_c_name       : y_Q_V
						// input_type_conversion : (y_Q[i_0]).range().to_string(SC_BIN).c_str()
						if (&(y_Q[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> y_Q_V_tmp_mem;
							y_Q_V_tmp_mem = (y_Q[i_0]).range().to_string(SC_BIN).c_str();
							y_Q_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = y_Q_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 40000; i++)
		{
			sprintf(tvin_y_Q_V, "%s\n", (y_Q_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_y_Q_V, tvin_y_Q_V);
		}

		tcl_file.set_num(40000, &tcl_file.y_Q_V_depth);
		sprintf(tvin_y_Q_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_y_Q_V, tvin_y_Q_V);

		// release memory allocation
		delete [] y_Q_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_y_demod_d_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_y_demod_d_V, tvin_y_demod_d_V);

		sc_bv<32>* y_demod_d_V_tvin_wrapc_buffer = new sc_bv<32>[40000];

		// RTL Name: y_demod_d_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: y_demod_d.V(31, 0)
				{
					// carray: (0) => (39999) @ (1)
					for (int i_0 = 0; i_0 <= 39999; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : y_demod_d[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : y_demod_d[0]
						// regulate_c_name       : y_demod_d_V
						// input_type_conversion : (y_demod_d[i_0]).range().to_string(SC_BIN).c_str()
						if (&(y_demod_d[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> y_demod_d_V_tmp_mem;
							y_demod_d_V_tmp_mem = (y_demod_d[i_0]).range().to_string(SC_BIN).c_str();
							y_demod_d_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = y_demod_d_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 40000; i++)
		{
			sprintf(tvin_y_demod_d_V, "%s\n", (y_demod_d_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_y_demod_d_V, tvin_y_demod_d_V);
		}

		tcl_file.set_num(40000, &tcl_file.y_demod_d_V_depth);
		sprintf(tvin_y_demod_d_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_y_demod_d_V, tvin_y_demod_d_V);

		// release memory allocation
		delete [] y_demod_d_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		int AESL_return = demodulationFM(y_I, y_Q, y_demod_d);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_y_demod_d_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_y_demod_d_V, tvout_y_demod_d_V);

		sc_bv<32>* y_demod_d_V_tvout_wrapc_buffer = new sc_bv<32>[40000];

		// RTL Name: y_demod_d_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: y_demod_d.V(31, 0)
				{
					// carray: (0) => (39999) @ (1)
					for (int i_0 = 0; i_0 <= 39999; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : y_demod_d[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : y_demod_d[0]
						// regulate_c_name       : y_demod_d_V
						// input_type_conversion : (y_demod_d[i_0]).range().to_string(SC_BIN).c_str()
						if (&(y_demod_d[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> y_demod_d_V_tmp_mem;
							y_demod_d_V_tmp_mem = (y_demod_d[i_0]).range().to_string(SC_BIN).c_str();
							y_demod_d_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = y_demod_d_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 40000; i++)
		{
			sprintf(tvout_y_demod_d_V, "%s\n", (y_demod_d_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_y_demod_d_V, tvout_y_demod_d_V);
		}

		tcl_file.set_num(40000, &tcl_file.y_demod_d_V_depth);
		sprintf(tvout_y_demod_d_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_y_demod_d_V, tvout_y_demod_d_V);

		// release memory allocation
		delete [] y_demod_d_V_tvout_wrapc_buffer;

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

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "y_I_V"
		delete [] tvin_y_I_V;
		// release memory allocation: "y_Q_V"
		delete [] tvin_y_Q_V;
		// release memory allocation: "y_demod_d_V"
		delete [] tvout_y_demod_d_V;
		delete [] tvin_y_demod_d_V;
		// release memory allocation: "ap_return"
		delete [] tvout_ap_return;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

		return AESL_return;
	}
}

