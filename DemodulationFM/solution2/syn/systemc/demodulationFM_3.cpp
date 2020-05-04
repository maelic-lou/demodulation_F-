#include "demodulationFM.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void demodulationFM::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"y_I_V_V_dout\" :  \"" << y_I_V_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"y_I_V_V_empty_n\" :  \"" << y_I_V_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y_I_V_V_read\" :  \"" << y_I_V_V_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"y_Q_V_V_dout\" :  \"" << y_Q_V_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"y_Q_V_V_empty_n\" :  \"" << y_Q_V_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y_Q_V_V_read\" :  \"" << y_Q_V_V_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y_demod_d_V_V_din\" :  \"" << y_demod_d_V_V_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"y_demod_d_V_V_full_n\" :  \"" << y_demod_d_V_V_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y_demod_d_V_V_write\" :  \"" << y_demod_d_V_V_write.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

