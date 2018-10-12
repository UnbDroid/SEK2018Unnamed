
#ifndef MAIN_HEADER
#define MAIN_HEADER

/* ====== INICIO DAS IMPORTACOES DO ARQUIVO MAIN ====== */

#include "include/defines.h"
#include "include/config.h"

#include "lib/pid.nxc"

#ifndef INCFILESIO
  #include "lib/filesIO.nxc"
  #define INCFILESIO
#endif

#ifndef INCCOL
  #include "lib/colors.nxc"
  #define INCCOL
#endif

/* ====== INICIO DAS FUNCOES DO ARQUIVO MAIN ====== */

void testeArquivo();
void testeCor();

#endif
