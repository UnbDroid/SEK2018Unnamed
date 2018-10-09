/*
  Arquivo: config.h
  Descricao: Este arquivo contem as declaracoes o programa de calibracao.
  Autores: Renato Nobre
  Data de Modificacao: 13/09/2018
  Versao: 1.0
*/

#ifndef CONFIG_HEADER
#define CONFIG_HEADER

#include "include/defines.h"

#ifndef INCFILESIO
  #include "lib/filesIO.nxc"
  #define INCFILESIO
#endif

#ifndef INCCOL
  #include "lib/colors.nxc"
  #define INCCOL
#endif

//
#define CONFIG_FILE_SIZE 2048
//
#define CONFIG_FILE_NAME "config.dat"


/* Save To File
  Descricao: Salva uma configuracao de cor em um arquivo
  Parametros:
    - id: Identificador da cor
    - value: Valor da cor
*/
void saveToFile(int id, float lRed, float lGreen, float lBlue, float lWhite, float rRed, float rGreen, float rBlue, float rWhite);

/* Color Config UI
  Descricao: Mostra a interface de interacao para escolher a cor
    sendo calibrada
  Parametros:
    - colorName: O nome da cor sendo calibrada
    - value: O valor em que o sensor esta lendo
*/
void ColorConfUI(string colorName, float red, float green, float blue, float white);

/* Config Color
  Descricao: Configura um processo de salvamento de cor
  Parametros:
    - color: O identificador da cor a ser configurada
*/
void configColor(int color);

#endif
