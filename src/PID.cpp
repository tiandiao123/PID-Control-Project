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
    
    
}

void PID::UpdateError(double cte, double dt) {
    d_error = (cte-p_error)/dt;
    p_error = cte;
    i_error = Cal_Total_Integral(p_error, dt);
}

double PID::TotalError() {
     return Kp * p_error+ Ki * i_error + Kd * d_error;
}

double PID::Cal_Total_Integral(double cte, double dt){
     i_error+=cte*dt;
} 

