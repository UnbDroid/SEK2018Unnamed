/*
  Arquivo: gyro.h
  Descricao: Este arquivo contem as declaracoes de funcoes do giroscopio.
  Autores: Renato Nobre, Valesca Soares
  Data de Modificacao: 09/10/2018
  Versao: 1.1
*/

#ifndef GYRO_HEADER
#define GYRO_HEADER

/* ====== INICIO DAS INCLUSOES DA BIBLIOTECA DE GIROSCOPIO ====== */

#include "include/defines.h"
#ifndef INCPID
  #include "lib/pid.nxc"
  #define INCPID
#endif

/* ====== INICIO DAS FUNCOES DA BIBLIOTECA DE GIROSCOPIO ====== */

/* Left 180 Gyro
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Configura o giroscopio para virar
      parar a locomocao quando 180 graus a esquerda forem computados
*/
// task left180Gyro();

/* Right 180 Gyro
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Configura o giroscopio para virar
      parar a locomocao quando 180 graus a direita forem computados
*/
// task right180Gyro();

/* Left 90 Gyro
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Configura o giroscopio para virar
      parar a locomocao quando 90 graus a esquerda forem computados

*/
// task left90Gyro();

/*  Right 90 Gyro
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Configura o giroscopio para virar
      parar a locomocao quando 90 graus a direita forem computados
*/
// task right90Gyro();

#endif
