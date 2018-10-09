/*
  Arquivo: move.h
  Descricao: Este arquivo contem as declaracoes de funcoes completas de movimentacao,
    utilizando funcoes dos arquivos gyro.nxc e pid.nxc
  Autores: Renato Nobre, Gabriel Gonçalves
  Data de Modificacao: 09/10/2018
  Versao: 1.0
*/

#ifndef MOVE_HEADER
#define MOVE_HEADER

/* ====== INICIO DAS IMPORTACOES DA BIBLIOTECA DE MOVIMENTACAO ====== */

#include "include/defines.h"
#include "lib/gyro.nxc"
#ifndef INCPID
  #include "lib/pid.nxc"
  #define INCPID
#endif

/* ====== INICIO DAS FUNCOES DA BIBLIOTECA DE MOVIMENTACAO ====== */

/* Turn Left 90
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Vira o robo 90 para a esquerda em seu proprio eixo.
*/
task turnLeft90();

/*  Turn Right 90
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Vira o robo 90 para a direita em seu proprio eixo.
*/
task turnRight90();

/*  Turn Left 180
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Vira o robo 180 para a esquerda em seu proprio eixo.
*/
task turnLeft180();

/*  Turn Right 180
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Vira o robo 180 para a direita em seu proprio eixo.
*/
task turnRight180();

#endif
