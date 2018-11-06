/*
  Arquivo: pid.h
  Descricao: Este arquivo contem as declaracoes de funcoes de movimentacao pid.
  Autores: Renato Nobre, Gabriel Gonçalves
  Data de Modificacao: 09/10/2018
  Versao: 1.1
*/

#ifndef PID_HEADER
#define PID_HEADER

/* ====== INICIO DAS INCLUSOES DA BIBLIOTECA DE PID ====== */

#include "include/defines.h"

/* ====== INICIO DAS DEFINICOES DA BIBLIOTECA DE PID ====== */

#define PULL_FACTOR 1.001
//Potencia do motor
#define TP 70.0
//Constante proporcional
#define KP 0.7 //5
//Constante de integracao
#define KI 0.05//1.0
//Constante de derivacao
#define KD 1.0///10.0

#define CM_TO_ROTATIONS 32.2580645
/* ====== INICIO DAS FUNCOES DA BIBLIOTECA DE PID ====== */

/*  Turn Left PID
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Vira o robo para a esquerda em seu proprio eixo.
      Não deve ser executada sozinha pois nao havera criterio de parada
*/
void turnLeftPID(int turnAngle);

/*  Turn Right PID
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Vira o robo para a direita em seu proprio eixo.
      Não deve ser executada sozinha pois nao havera criterio de parada
*/
void turnRightPID(int turnAngle);

/* Foward PID
    Descricao: Manda o robo ir para a frente.
*/
task fowardPID();

/* Foward CM PID
    Descricao: Manda o robo ir para a frente em alguns cm
*/
void fowardCmPID(int cm);

#endif
