#ifndef USUARIO_H
#define USUARIO_H

using namespace std;

class Usuario {
  private:
int id;
string email;
string senha;
string nome;


  public:
int getId();
void setId(int i);

string getEmail();
void setEmail(string e);

string getSenha();
void setSenha(string s);

string getNome();
void setNome(string n);

};

#endif