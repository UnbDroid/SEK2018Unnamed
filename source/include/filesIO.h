/*
  Arquivo: filesIO.h
  Descricao: Este arquivo contem as declaracoes para criacao,
             leitura e escrita de arquivos.
  Autores: Renato Nobre
  Data de Modificacao: 13/09/2018
  Versao: 1.0
*/

byte handle = 0;


/* colorConf Struct
  Descricao: Estruturas contendo informacoes de calibracao
  Propriedades:
    - id: O identificador do que esta sendo calibrado
    - value: O valor do que esta sendo calibrado
*/
struct colorConf {
  int id;
  float red;
  float green;
  float blue;
  float white;
};

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
  Descricao: Cria uma struct colorConf com os parametros passados
  Parametros:
    - c: A struct colorConf
    - id: O identificador de uma cor
    - value: O valor de uma cor
  Retorno:
*/
void initColorConf(colorConf &c, int id, float red, float green, float blue, float white);

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
  Descricao: Escreve uma estrutura de colorConf em um
    arquivo aberto para escrita
  Parametros:
    - recd: A estrutura de colorConf
*/
void writeColorConfOnFile(const colorConf recd);

/* Read Color Config File
  Descricao: Ler uma estrutura de colorConf em um
    arquivo aberto para leitura
  Parametros:
    - recd: A estrutura de colorConf
    - output: O vetor de cores lido do arquivos, deve se passar um vetor vazio
  Retorno:
    Retorna por referencia o vetor de cores lido
*/
void readColorConfFile(colorConf &reacd, colorConf &output[]);
