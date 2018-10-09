#ifndef PID_HEADER
#define PID_HEADER

/* ====== INICIO DAS INCLUSOES DA BIBLIOTECA DE PID ====== */

#include "include/defines.h"

/* ====== INICIO DAS DEFINICOES DA BIBLIOTECA DE PID ====== */

//Potencia do motor
#define TP 70.0
//Constante proporcional
#define KP 5.0
//Constante de integracao
#define KI 1.0
//Constante de derivacao
#define KD 10.0

/* ====== INICIO DAS FUNCOES DA BIBLIOTECA DE PID ====== */

/*  Turn Left PID
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Vira o robo para a esquerda em seu proprio eixo.
      Não deve ser executada sozinha pois nao havera criterio de parada
*/
task turnLeftPID();

/*  Turn Right PID
    Descricao: Trecho de codigo definido como uma TASK para ser usada
      paralelamente pelo processador. Vira o robo para a direita em seu proprio eixo.
      Não deve ser executada sozinha pois nao havera criterio de parada
*/
task turnRightPID();

/* Foward PID
    Descricao: Manda o robo ir para a frente.
    AVISO: ESSA FUNCAO NAO ESTA PRONTA
*/
void fowardPID();

#endif
