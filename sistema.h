#ifndef SISTEMA_H
#define SISTEMA_H
#include <string>
#include <vector>
#include "usuario.h"

using namespace std;

class Sistema {
   public:
//string usuarios[10];
//string servidores[10];
string usuario;
vector<Usuario> usuarios; 
vector<string> servidores;                              ;

 
Sistema(string usuario);

string cadastrarUsuario(string usuario, string senha, string nome);
string logarUsuario(string usuario, string senha);
string listarUsuarios();


string Servidores();

};

#endif