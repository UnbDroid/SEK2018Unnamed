#ifndef PID_HEADER
#define PID_HEADER

#include "include/defines.h"

#define TP 70.0
#define KP 5.0
#define KI 1.0
#define KD 10.0

task turnLeftPID();
task turnRightPID();
void fowardPID();

#endif
