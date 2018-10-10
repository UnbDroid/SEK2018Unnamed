/*
  Arquivo: config.h
  Descricao: Este arquivo contem as declaracoes o programa de calibracao.
  Autores: Renato Nobre
  Data de Modificacao: 09/10/2018
  Versao: 2.0
*/

#ifndef CONFIG_HEADER
#define CONFIG_HEADER

/* ====== INICIO DAS INCLUSOES DA BIBLIOTECA DE CONFIGURACAO ====== */

#include "include/defines.h"

//Inclusao condicional do arquivo de filesIO
#ifndef INCFILESIO
  #include "lib/filesIO.nxc"
  #define INCFILESIO
#endif

//Inclusao condicional do arquivo de cor
#ifndef INCCOL
  #include "lib/colors.nxc"
  #define INCCOL
#endif


/* ====== INICIO DAS DEFINICOES DA BIBLIOTECA DE CONFIGURACAO ====== */

// TAMANO DO ARQUIVO
#define CONFIG_FILE_SIZE 2048
// NOME DO ARQUIVO
#define CONFIG_FILE_NAME "config.dat"


/* ====== INICIO DAS FUNCOES DA BIBLIOTECA DE CONFIGURACAO ====== */

/* Save To File
  Descricao: Salva uma configuracao de cor em um arquivo
  Parametros:
    - id: Identificador da cor
    - lRed: Cor de vermelho sendo lida pelo sensor esquerdo
    - lGreen: Cor de verde sendo lida pelo sensor esquerdo
    - lBlue: Cor de azul sendo lida pelo sensor esquerdo
    - lWhite: Cor de branco sendo lida pelo sensor esquerdo
    - rRed: Cor de vermelho sendo lida pelo sensor direito
    - rGreen: Cor de verde sendo lida pelo sensor direito
    - rBlue: Cor de azul sendo lida pelo sensor direito
    - rWhite: Cor de branco sendo lida pelo sensor direito
*/
void saveToFile(int id, float lRed, float lGreen, float lBlue, float lWhite, float rRed, float rGreen, float rBlue, float rWhite);

/* Color Config UI
  Descricao: Mostra a interface de interacao para escolher a cor
    sendo calibrada
  Parametros:
    - colorName: O nome da cor sendo calibrada
    - red: Valor da cor de vermelho sendo lida por um dos sensores
    - green: Valor da cor de verde sendo lida por um dos sensores
    - blue: Valor da cor de azul sendo lida por um dos sensores
    - white: Valor da cor de branco sendo lida por um dos sensores
*/
void ColorConfUI(string colorName, float red, float green, float blue, float white);

/* Config Color
  Descricao: Configura um processo de salvamento de cor
  Parametros:
    - color: O identificador da cor a ser configurada
*/
void configColor(int color);


#endif
