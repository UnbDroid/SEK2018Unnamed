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
#ifndef INCPID
  #include "lib/pid.nxc"
  #define INCPID
#endif

/* ====== INICIO DAS DEFINICOES DA BIBLIOTECA DE ROTA ====== */

#define ESQUERDA 0
#define DIREITA 1

/* ====== INICIO DAS FUNCOES DA BIBLIOTECA DE MOVIMENTACAO ====== */

/*  Foward
    Descricao: Move para frente, necessita um comando `stop foward` para para-la
*/
task foward();

/*  Turn
    Descricao: Move em uma certa direcao, uma certa quantidade de graus
    Parametros:
      - direcao: Direcao desejada ESQUEDA ou DIREITA
      - graus: Quantidade de graus, 0 a 360
*/
void turn(int direcao, int graus);

/*  Foward Cm
    Descricao: Move para frente uma certa quantidade de centimetros
    Parametros:
      - cm: Quantidade de centimetros
*/
void fowardCm(int cm);

#endif
