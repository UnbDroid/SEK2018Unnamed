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

/* ====== INICIO DAS FUNCOES DA BIBLIOTECA DE ROTA ====== */

/* */
void route(ColorConf &defColors[]);
/* */
void leaveIntersec(ColorConf &defColors[], int idCor);
/* */
void makeTurn(ColorConf &defColors[], int idCor);
/* */
void make180(ColorConf &defColors[], int idCor);
/* */
void recenter(ColorConf &defColors[]);
/* */
int avoidFall(ColorConf &defColors[]);
/* */
void adjustPosition(ColorConf &defColors[], int idColor);
/* */
int trackPosControll(ColorConf &defColors[], int idColor);
/* */
void moveUntilNotColor(ColorConf &defColors[], int idCor);
/* */
void centerOnIntersec();

#endif
