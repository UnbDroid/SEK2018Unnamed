#ifndef MOVE_HEADER
#define MOVE_HEADER

#include "include/defines.h"
#include "lib/gyro.nxc"
#ifndef INCPID
  #include "lib/pid.nxc"
  #define INCPID
#endif


#define FRENTE 0
#define DIREITA 1
#define ESQUERDA 2

/* */
task turnLeft90();
/* */
task turnRight90();
/* */
task turnLeft180();
/* */
task turnRight180();

#endif
