#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include "sistema.h"

using namespace std;

class Usuario {
  public:
int id;
string email;
string senha;
string nome;


Usuario(); 
Usuario(string email, string senha, string nome);

int Id();

string Email();

string Senha();

string Nome();

};

#endif