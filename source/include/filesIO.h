/*
  Arquivo: filesIO.h
  Descricao: Este arquivo contem as declaracoes para criacao,
             leitura e escrita de arquivos.
  Autores: Renato Nobre
  Data de Modificacao: 06/09/2018
  Versao: 1.0
*/

byte handle = 0;


/* Config Struct
  Descricao: Estruturas contendo informacoes de calibracao
  Propriedades:
    - id: O identificador do que esta sendo calibrado
    - value: O valor do que esta sendo calibrado
*/
struct config {
  int id;
  string name;
  float value;
};

/*
  Descricao:
  Parametros:
  Retorno:
*/
void shutdown(const int delay);

/*
  Descricao:
  Parametros:
  Retorno:
*/
void init_config(config &c, int id, string colorName,float value);

/*
  Descricao:
  Parametros:
  Retorno:
*/
void openForWrite(string fileName, unsigned int fileSize);

/*
  Descricao:
  Parametros:
  Retorno:
*/
void openForRead(string fileName, unsigned int fileSize);

/*
  Descricao:
  Parametros:
  Retorno:
*/
void writeConfigOnFile(const config recd);

/*
  Descricao:
  Parametros:
  Retorno:
*/
void readConfigFile(config &reacd);
