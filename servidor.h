#ifndef SERVIDOR_H
#define SERVIDOR_H

using namespace std;

class Servidor {
  private:
int id;
string nome;
string descricao;
string convite;
//vector<string> canais; 
string canais[10];  
//vector<int> id; 
int ids[10];                              ;

  public:
int getId();
void setId(int i);

string getNome();
void setNome(string n);

string getDescricao();
void setDescricao(string d);

string getConvite();
void setConvite(string c);

string getCanais();
void setCanais(string ca);

int getIds();
void setIds(int id);

};

#endif