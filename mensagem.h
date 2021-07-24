#ifndef MENSAGEM_H
#define MENSAGEM_H

using namespace std;

class Mensagem {
  private:
string dataHora;
string enviadaPor;
string conteudo;


  public:
string getDataHora();
void setDataHora(string d);

string getEnviadaPor();
void setEnviadaPor(string e);

string getConteudo();
void setConteudo(string c);

};

#endif