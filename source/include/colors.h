/*
  Arquivo: config.h
  Descricao: Este arquivo contem as definições da biblioteca
    de identificacao de cores.
  Autores: Renato Nobre
  Data de Modificacao: 13/09/2018
  Versao: 1.0
*/

#define AMARELO 0
#define VERDE 0
#define AZUL 0
#define VERMELHO 0
#define LARANJA 0
#define ROXO 0
#define PRETO 0
#define BRANCO 0

#define ID_AMARELO 0
#define ID_VERDE 1
#define ID_AZUL 2
#define ID_VERMELHO 3
#define ID_LARANJA 4
#define ID_ROXO 5
#define ID_PRETO 6
#define ID_BRANCO 7

/* Get Default Value
  Descricao: Busca os valores defaults para identificar as cores
  Parametros:
    - color: O valor inteiro identificador da cor
  Retorno: O valor default usado para identificaf a cor
*/
float getDefaultValue(int color);

/* Get Color Name
  Descricao: Retorna o nome das cores dado um identificador
  Parametros:
    - color: Identificador da cor desejada
  Retorno: O nome da cor
*/
string getColorName(int color);
