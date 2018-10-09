/*
  Arquivo: filesIO.h
  Descricao: Este arquivo contem as declaracoes para criacao,
             leitura e escrita de arquivos.
  Autores: Renato Nobre
  Data de Modificacao: 09/10/2018
  Versao: 1.1
*/

#ifndef FILESIO_HEADER
#define FILESIO_HEADER

/* ====== INICIO DAS INCLUSOES DA BIBLIOTECA DE FILESIO ====== */

#ifndef INCCOL
  #include "lib/colors.nxc"
  #define INCCOL
#endif

/* ====== INICIO DAS VARIAVEIS GLOBAIS DA BIBLIOTECA DE FILESIO ====== */

byte handle = 0;

/* ====== INICIO DAS FUNCOES DA BIBLIOTECA DE FILESIO ====== */

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
    - lRed: Cor de vermelho sendo lida pelo sensor esquerdo
    - lGreen: Cor de verde sendo lida pelo sensor esquerdo
    - lBlue: Cor de azul sendo lida pelo sensor esquerdo
    - lWhite: Cor de branco sendo lida pelo sensor esquerdo
    - rRed: Cor de vermelho sendo lida pelo sensor direito
    - rGreen: Cor de verde sendo lida pelo sensor direito
    - rBlue: Cor de azul sendo lida pelo sensor direito
    - rWhite: Cor de branco sendo lida pelo sensor direito
  Retorno: Retorna por referencia a struct criada
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
