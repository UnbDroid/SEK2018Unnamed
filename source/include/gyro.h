#ifndef GYRO_HEADER
#define GYRO_HEADER

#include "include/defines.h"
#ifndef INCPID
  #include "lib/pid.nxc"
  #define INCPID
#endif

task left180Gyro();
task right180Gyro();
task left90Gyro();
task right90Gyro();

#endif
