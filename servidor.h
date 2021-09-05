#ifndef SERVIDOR_H
#define SERVIDOR_H

using namespace std;

class Servidor {
  public:
int id;
string nome;
string descricao;
string convite;
vector<string> canais; 
//string canais[10];  
vector<int> ids; 
vector<string> usuarioServidor;                              ;

  
int Id();

string Nome();

string Descricao();

string Convite();

string Canais();

int Ids();

string UsuarioServidor();

};

#endif