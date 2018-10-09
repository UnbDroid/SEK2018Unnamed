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

/* ====== DEFINICOES GERAIS DO BERNARD ====== */

// Motor que abre a porta esquerda
#define PORTA_LEFT OUT_A
// Motor que abre a porta esquerda
#define PORTA_RIGHT OUT_B
// Ultrassom lateral da esquerda
#define SIDE_ULTRA_LEFT IN_1
// Ultrassom frontal da direita
#define FRONT_ULTRA_RIGHT IN_2
// Ultrassom frontal da esquerda
#define FRONT_ULTRA_LEFT IN_3
// Ultrassom lateral da direita
#define SIDE_ULTRA_RIGHT IN_4

/* ====== INICIO DAS DEFINICOES GERAIS CONSTANTES ====== */

//Valor de verdadeiro
#define TRUE 1
//Valor de falso
#define FALSE 0

#endif
