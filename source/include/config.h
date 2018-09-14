/*
  Arquivo: config.h
  Descricao: Este arquivo contem as declaracoes o programa de calibracao.
  Autores: Renato Nobre
  Data de Modificacao: 13/09/2018
  Versao: 1.0
*/

#define CONFIG_FILE_SIZE 2048
#define CONFIG_FILE_NAME "config.dat"

/* Save To File
  Descricao: Salva uma configuracao de cor em um arquivo
  Parametros:
    - id: Identificador da cor
    - value: Valor da cor
*/
void saveToFile(int id, float value);

/* Color Config UI
  Descricao: Mostra a interface de interacao para escolher a cor
    sendo calibrada
  Parametros:
    - colorName: O nome da cor sendo calibrada
    - value: O valor em que o sensor esta lendo
*/
void colorConfUI(string colorName, float value);

/* Config Color
  Descricao: Configura um processo de salvamento de cor
  Parametros:
    - color: O identificador da cor a ser configurada
*/
void configColor(int color);
