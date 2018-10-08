/*
  Arquivo: config.h
  Descricao: Este arquivo contem as definições da biblioteca
    de identificacao de cores.
  Autores: Renato Nobre
  Data de Modificacao: 13/09/2018
  Versao: 1.0
*/
#ifndef COLORS_HEADER
#define COLORS_HEADER

#include "include/defines.h"

/* ColorConf Struct
  Descricao: Estruturas contendo informacoes de calibracao
  Propriedades:
    - id: O identificador do que esta sendo calibrado
    - value: O valor do que esta sendo calibrado
*/


typedef struct {
  int id;
  int leftRed;
  int leftGreen;
  int leftBlue;
  int leftWhite;
  int rightRed;
  int rightGreen;
  int rightBlue;
  int rightWhite;
  int leftRInterval;
  int leftGInterval;
  int leftBInterval;
  int leftWInterval;
  int rightRInterval;
  int rightGInterval;
  int rightBInterval;
  int rightWInterval;
}ColorConf;

const int amareloRight[] = {255,244,42,255};
const int verdeRight[] = {19, 40, 30, 73};
const int azulRight[] = {22, 43, 76, 124};
const int vermelhoRight[] = {140, 33, 11, 135};
const int pretoRight[] = {20, 23, 51, 54};
const int brancoRight[] = {255, 255, 255, 255};


const int amareloLeft[] = {255,244,42,255};
const int verdeLeft[] = {19, 40, 30, 73};
const int azulLeft[] = {22, 43, 76, 124};
const int vermelhoLeft[] = {140, 33, 11, 135};
const int pretoLeft[] = {20, 23, 51, 54};
const int brancoLeft[] = {255, 255, 255, 255};


const int intervals[] = {15, 30, 45, 60, 75, 90, 105, 120, 135, 150, 165, 180, 195, 210, 225, 240, 255};

int colorsMat[][] = {{0,0,0},
                    {0,0,0},
                    {0,0,0},
                    {0,0,0}};

#define INTERVAL_SIZE 15.0

#define MEAN_ERROR 8

#define ID_AMARELO 0
#define ID_VERDE 1
#define ID_AZUL 2
#define ID_VERMELHO 3
#define ID_PRETO 4
#define ID_BRANCO 5
#define ID_QUEDA 6

#define SUM 1
#define SUB 0

/* Get Default Value
  Descricao: Busca os valores defaults para identificar as cores
  Parametros:
    - color: O valor inteiro identificador da cor
  Retorno: O valor default usado para identificaf a cor
*/
// float getDefaultValue(int color);

/* Get Color Name
  Descricao: Retorna o nome das cores dado um identificador
  Parametros:
    - color: Identificador da cor desejada
  Retorno: O nome da cor
*/
string getColorName(int color);

int intervalValue(int value);
int intervalError(int value, int sum);
void calculateInterval(int r, int g, int b, int w);
int evalInterval(int value[], int expectedInterval);
int isItColor(int intervalR, int intervalG, int intervalB, int intervalW);

int leftBasicRules(int r, int g, int b, int w, ColorConf &output[]);
int rightBasicRules(int r, int g, int b, int w, ColorConf &output[]);

// int leftSensorColorRead(ColorConf &defColors[]);
// int rightSensorColorRead(ColorConf &defColors[]);

#endif /* COLORS_HEADER */
