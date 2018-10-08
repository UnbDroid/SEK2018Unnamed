/*
  Arquivo: filesIO.h
  Descricao: Este arquivo contem as declaracoes para criacao,
             leitura e escrita de arquivos.
  Autores: Renato Nobre
  Data de Modificacao: 13/09/2018
  Versao: 1.0
*/

#ifndef FILESIO_HEADER
#define FILESIO_HEADER

#ifndef INCCOL
  #include "lib/colors.nxc"
  #define INCCOL
#endif

byte handle = 0;

/* Check File Existence
  Descricao: Verifica se o arquivo existe ou nao
  Parametros:
    - fileName: Uma string contendo o nome do arquivo
    - fileSize: O tamanho do arquivo que estamos verificando a existencia
  Retorno:
    - 1: Caso o arquivo exista
    - 0: Caso o arquivo nao exista
*/
int checkFileExistence(string fileName, unsigned int fileSize);

/* Delete File
  Descricao: Apaga um arquivo caso ele exista
  Parametros:
    - fileName: Uma string contendo o nome do arquivo
    - fileSize: O tamanho do arquivo que estamos apagando
*/
void deleteFile(string fileName, unsigned int fileSize);

/* Init Color Conf
  Descricao: Cria uma struct ColorConf com os parametros passados
  Parametros:
    - c: A struct ColorConf
    - id: O identificador de uma cor
    - value: O valor de uma cor
  Retorno:
*/
void initColorConf(ColorConf &c, int id, int lRed, int lGreen, int lBlue, int lWhite, int rRed, int rGreen, int rBlue, int rWhite);

/* Open For Write
  Descricao: Abre um arquivo para a leitura
  Parametros:
  - fileName: Uma string contendo o nome do arquivo
  - fileSize: O tamanho do arquivo
*/
void openForWrite(string fileName, unsigned int fileSize);

/* Open for Read
  Descricao: Abre um arquivo para escrita
  Parametros:
    - fileName: Uma string contendo o nome do arquivo
    - fileSize: O tamanho do arquivo
*/
void openForRead(string fileName, unsigned int fileSize);

/* Write Color Config On File
  Descricao: Escreve uma estrutura de ColorConf em um
    arquivo aberto para escrita
  Parametros:
    - recd: A estrutura de ColorConf
*/
void writeColorConfOnFile(const ColorConf recd);

/* Read Color Config File
  Descricao: Ler uma estrutura de ColorConf em um
    arquivo aberto para leitura
  Parametros:
    - recd: A estrutura de ColorConf
    - output: O vetor de cores lido do arquivos, deve se passar um vetor vazio
  Retorno:
    Retorna por referencia o vetor de cores lido
*/
void readColorConfFile(ColorConf &reacd, ColorConf &output[]);


#endif
