/*
  Arquivo: colors.h
  Descricao: Este arquivo contem as definições da biblioteca
    de identificacao de cores.
  Autores: Renato Nobre
  Data de Modificacao: 09/10/2018
  Versao: 1.1
*/

#ifndef COLORS_HEADER
#define COLORS_HEADER

/* ====== INICIO DAS INCLUSOES DA BIBLIOTECA DE CORES ====== */

#include "include/defines.h"

/* ====== INICIO DAS VARIAVEIS GLOBAIS DA BIBLIOTECA DE CORES ====== */

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

int colorsMat[][] = {{0,0,0},
                    {0,0,0},
                    {0,0,0},
                    {0,0,0}};

/* ====== INICIO DAS DEFINICOES DA BIBLIOTECA DE CORES ====== */

// Tamanho do intervalo no espectro de cor
#define INTERVAL_SIZE 12.0
// Valor do erro que uma cor pode ter para estar no intervalo
#define MEAN_ERROR 10
// Id do Verde
#define ID_VERDE 1
// Id do Azul
#define ID_AZUL 2
// Id do Vermelho
#define ID_VERMELHO 3
// Id do Preto
#define ID_PRETO 4
// Id do Branco
#define ID_BRANCO 5
// Id da Queda
#define ID_QUEDA 6

#define ID_ERRO -2

#define DIR_UNKNOWN 200

#define UNDEFINED -3

#define COLOR_ONE 3

#define COLOR_TWO 2

#define COLOR_THREE 1


// Identificador da situacao de Soma
#define SUM 1
// Identificador da situacao de Subtracao
#define SUB 0

/* ====== INICIO DOS TIPOS DE DADOS DA BIBLIOTECA DE CORES ====== */

/* ColorConf Struct
  Descricao: Estruturas contendo informacoes de calibracao
  Propriedades:
    - id: O identificador do que esta sendo calibrado
    - leftRed: Valor de vermelho lido pelo sensor esquerdo
    - leftGreen: Valor de verde lido pelo sensor esquerdo
    - leftBlue: Valor de azul lido pelo sensor esquerdo
    - leftWhite: Valor de branco lido pelo sensor esquerdo
    - rightRed: Valor de vermelho lido pelo sensor direito
    - rightGreen: Valor de verde lido pelo sensor direito
    - rightBlue: Valor de azul lido pelo sensor direito
    - rightWhite: Valor de branco lido pelo sensor direito
    - leftRInterval: Intervalo onde o vermelho esta no sensor esquerdo
    - leftGInterval: Intervalo onde o verde esta no sensor esquerdo
    - leftBInterval: Intervalo onde o azul esta no sensor esquerdo
    - leftWInterval: Intervalo onde o branco esta no sensor esquerdo
    - rightRInterval: Intervalo onde o vermelho esta no sensor direito
    - rightGInterval: Intervalo onde o verde esta no sensor direito
    - rightBInterval: Intervalo onde o branco esta no sensor direito
    - rightWInterval: Intervalo onde o azul esta no sensor direito
*/
typedef struct {
  byte id;
  byte leftRed;
  byte leftGreen;
  byte leftBlue;
  byte leftWhite;
  byte rightRed;
  byte rightGreen;
  byte rightBlue;
  byte rightWhite;
  byte leftRInterval;
  byte leftGInterval;
  byte leftBInterval;
  byte leftWInterval;
  byte rightRInterval;
  byte rightGInterval;
  byte rightBInterval;
  byte rightWInterval;
} ColorConf;

/* ====== INICIO DAS FUNCOES DA BIBLIOTECA DE CORES ====== */


/* Get Default Value
  Descricao: Busca os valores defaults para identificar as cores.
  Parametros:
    - color: O valor inteiro identificador da cor
  Retorno: O valor default usado para identificaf a cor
*/
// float getDefaultValue(int color);

/* Get Color Name
  Descricao: Retorna o nome das cores dado um identificador.
  Parametros:
    - color: Identificador da cor desejada
  Retorno: O nome da cor
*/
string getColorName(int color);

/* Interval Value
  Descricao: Calcula o valor da cor lida divida pelo
    tamanho do intervalo.
  Parametros:
    - value: O valor de um espectro sendo lido pelo sensor de cor
  Retorno: O valor de interval onde a cor lida esta
*/
int intervalValue(int value);

/* Interval Error
  Descricao:  Calcula o valor da cor lida subtraida ou somada
   com o erro divida pelo tamanho do intervalo.
  Parametros:
    - value: O valor de um espectro sendo lido pelo sensor de cor
    - sum: Um valor | 1 = Soma
                    | 0 = Subracao
  Retorno: O valor de interval onde a cor lida esta
*/
int intervalError(int value, int sum);

/* Calculate Interval
  Descricao: Calcula os intervalos das cores sendo
    lidas utilizando valores de RGBW, para cada faixa de frequncia será calculado
    o intervalo no valor sem taxa de erro, e ecom taxa de erro para baixo e para cima.
  Parametros:
    - r: Valor lido para a Faixa de Espectro de Vermelho
    - g: Valor lido para a Faixa de Espectro de Verde
    - b: Valor lido para a Faixa de Espectro de Azul
    - w: Valor lido para a Faixa de Espectro de Branco
  Retorno: Não há retorno, no entanto valores são atualizados em uma matriz global
*/
void calculateInterval(int r, int g, int b, int w);

/* Eval Interval
  Descricao: Verifica que se uma cor de um espectro está dentro
    de um intervalo, levando em consideraçao o erro.
  Parametros:
    - value: Um vetor de tres valores, que significa o
      intervalo da cor lida para uma certa faixa,
       com erro para baixo, para cima e sem erro.
    - expectedInterval: Intervalo em que achamos onde a cor deve está
  Retorno:
    - 0: A cor não está em nenhum intervalo
    - 1: A cor está em algum intervalo
*/
int evalInterval(int value[], int expectedInterval);

/* How Many Colors
  Descricao: Conta quantas vezes a cor caiu no intervalo esperado dos espectros
  Parametros:
    - intervalR: Valor de intervalo de vermelho
    - intervalG: Valor de intervalo de verde
    - intervalB: Valor de intervalo de azul
    - intervalW: Valor de intervalo de branco
  Retorno: A quantidade de intervalos em que a cor se encaixou. Por exemplo, se o vermelho cai no intervalo com erro para baixo e sem erro, considera-se que ele acertou dois
  intervalos de vermelho.
*/
int howManyColor(int intervalR, int intervalG, int intervalB, int intervalW);

/* Is it Color?
  Descricao: Avalia se a cor lida esta dentro dos intervalos de espectro esperados
  Parametros:
    - intervalR: Valor de intervalo de vermelho
    - intervalG: Valor de intervalo de verde
    - intervalB: Valor de intervalo de azul
    - intervalW: Valor de intervalo de branco
  Retorno:
    - TRUE: A cor lida e a cor avaliada
    - FALSE: A cor lida nao e a cor avaliada
*/
int isItColor(int intervalR, int intervalG, int intervalB, int intervalW);

/* Eval Interval Amount
  Descricao: Conta quantas vezes uma cor cai no intervalo esperado
  Parametros:
    - value: Um vetor de tres valores, que significa o
      intervalo da cor lida para uma certa faixa,
       com erro para baixo, para cima e sem erro.
    - expectedInterval: Intervalo em que achamos onde a cor deve está
  Retorno: O somatorio de quantasd vezes uma cor, com ou sem erro caem no intevalo esperado
*/
int evalIntervalAmount(int value[], int expectedInterval);

/* Left Sensor Color Read
  Descricao: Avalia a cor sendo lida pelo sensor esquerdo, com base de comparacao
    os valores padroes.
  Parametros:
    - defColors: Vetor de structs ColorConf
      que caracteriza os valores esperados para cada cor
  Retorno: O valor da cor lida pelo sensor esquerdo.
*/
int leftSensorColorRead();

/* Right Sensor Color Read
  Descricao: Avalia a cor sendo lida pelo sensor direito, com base de comparacao
    os valores padroes.
  Parametros:
    - defColors: Vetor de structs ColorConf
      que caracteriza os valores esperados para cada cor
  Retorno: O valor da cor lida pelo sensor esquerdo.
*/
int rightSensorColorRead();

task updateColors();

#endif
