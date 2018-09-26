/*
  Arquivo: config.h
  Descricao: Este arquivo contem as definições da biblioteca
    de identificacao de cores.
  Autores: Renato Nobre
  Data de Modificacao: 13/09/2018
  Versao: 1.0
*/

#define AMARELO_R 255
#define AMARELO_G 255
#define AMARELO_B 42
#define AMARELO_W 255
#define VERDE_R 19
#define VERDE_G 40
#define VERDE_B 30
#define VERDE_W 73
#define AZUL_R 22
#define AZUL_G 43
#define AZUL_B 76
#define AZUL_W 124
#define VERMELHO_R 140
#define VERMELHO_G 33
#define VERMELHO_B 11
#define VERMELHO_W 135
#define LARANJA_R 120
#define LARANJA_G 48
#define LARANJA_B 20
#define LARANJA_W 152
#define ROXO_R 69
#define ROXO_G 55
#define ROXO_B 116
#define ROXO_W 204
#define PRETO_R 20
#define PRETO_G 23
#define PRETO_B 51
#define PRETO_W 54
#define BRANCO_R 255
#define BRANCO_G 255
#define BRANCO_B 255
#define BRANCO_W 255

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
// float getDefaultValue(int color);

/* Get Color Name
  Descricao: Retorna o nome das cores dado um identificador
  Parametros:
    - color: Identificador da cor desejada
  Retorno: O nome da cor
*/
string getColorName(int color);
