#include "PID.h"

using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_init, double Ki_init, double Kd_init) {
	Kp = Kp_init;
	Ki = Ki_init;
	Kd = Kd_init;

    p_error = 0;
    i_error = 0;
    d_error = 0;
    
    sum_error=0;
    pre_cte=0;
    
}

void PID::UpdateError(double cte) {
    d_error = Kd*(cte-pre_cte);
    pre_cte=cte;

    p_error = Kp*cte;
    
    sum_error+=cte;
    i_error = Ki*sum_error;
}

double PID::TotalError() {
     return p_error+ i_error + d_error;
}


