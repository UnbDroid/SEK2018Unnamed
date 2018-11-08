/*
  Arquivo: route.h
  Descricao: Este arquivo contem as declaracoes de funcoes para o percorrimento do percuso
  Autores: Renato Nobre, Gabriel Gonçalves
  Data de Modificacao: 14/10/2018
  Versao: 1.0
*/


#ifndef ROUTE_HEADER
#define ROUTE_HEADER

/* ====== INICIO DAS IMPORTACOES DA BIBLIOTECA DE ROTA ====== */

#include "include/config.h"

#include "lib/move.nxc"

#ifndef INCFILESIO
  #include "lib/filesIO.nxc"
  #define INCFILESIO
#endif

#ifndef INCCOL
  #include "lib/colors.nxc"
  #define INCCOL
#endif

/* ====== INICIO DAS DEFINICOES DA BIBLIOTECA DE ROTA ====== */

#define ESQUERDA 0
#define DIREITA 1

#define ANGLE90 90

#define ERRORDIR 2
#define RIGHTDIR 1
#define UNKNOWNDIR 0
/* ====== INICIO DAS FUNCOES DA BIBLIOTECA DE ROTA ====== */

/* */
void route();

task receiveMSG();
/* */
void leaveIntersec(int idCor);
/* */
void makeTurn(int idCor);
/* */
void make180(int idCor);
/* */
void recenter(int leftRead, int rightRead);
/* */
int avoidFall(int leftColor, int rightColor);
/* */
void adjustPosition(int idColor, int leftColor, int rightColor);
/* */
int trackPosControll(int idColor);
/* */
int moveUntilNotColor(int idCor);
/* */
int centerOnIntersec(int idCor);

void dirToMat();

void matToDir();

int isRamp();

void foundRamp();

void saveConfToFile();

#endif
