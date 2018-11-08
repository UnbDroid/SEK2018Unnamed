/*
  Arquivo: defines.h
  Descricao: Este arquivo contem as declaracoes base do sistema.
    Por exemplo: mapeamento de sensores
  Autores: Renato Nobre, Valesca Soares
  Data de Modificacao: 13/09/2018
  Versao: 1.1
*/

#ifndef DEFINES_HEADER
#define DEFINES_HEADER

/* ====== INICIO DAS DEFINICOES GERAIS ====== */

/* ====== DEFINICOES GERAIS DO MR ROBOTO ====== */

//Motor da esqueda
#define MOTOR_LEFT OUT_A
//Motor da direita
#define MOTOR_RIGHT OUT_B
//Ambos os motores
#define MOTOR_BOTH OUT_AB
//Motor da garra
#define GARRA OUT_C
//Sensor de cor da direita
#define COLOR_RIGHT IN_1
//Sensor de cor da esquerda
#define COLOR_LEFT IN_2
//Sensor de giroscopio
#define GIRO IN_3
//Sensor Ultra
#define FRONT_ULTRA IN_4

/* ====== DEFINICOES GERAIS DO BERNARD ====== */

// Motor que abre a porta esquerda
#define PORTA_LEFT OUT_A
// Motor que abre a porta esquerda
#define PORTA_RIGHT OUT_B
// Ultrassom lateral da esquerda
#define SIDE_ULTRA_LEFT IN_1
// Ultrassom para baixo da direita
#define DOWN_ULTRA_RIGHT IN_2
// Ultrassom para baixo da esquerda
#define DOWN_ULTRA_LEFT IN_3
// Ultrassom lateral da direita
#define SIDE_ULTRA_RIGHT IN_4

/* ====== INICIO DAS DEFINICOES GERAIS CONSTANTES ====== */

//Valor de verdadeiro
#define TRUE 1
//Valor de falso
#define FALSE 0

#define OUTBOX1SLAVE 1

#define OUTBOX2SLAVE 2

#define OUTBOX3SLAVE 3

#define INBOX1SLAVE 4

#define INBOX2SLAVE 5

#define INBOX3SLAVE 6

#define OUTBOX1MASTER 4

#define OUTBOX2MASTER 5

#define OUTBOX3MASTER 6

#define INBOX1MASTER 1

#define INBOX2MASTER 2

#define INBOX3MASTER 3

#define BT_CONN 1

#endif
