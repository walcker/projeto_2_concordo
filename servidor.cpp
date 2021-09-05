#include <iostream>
#include <string>
#include <vector>
#include "servidor.h"

using namespace std;

int Servidor::Id() {
    return id;
}
  
string Servidor::Nome() {
    return nome;
}
  
string Servidor::Descricao() {
    return descricao;
}

string Servidor::Convite() {
    return convite;
}
  
string Servidor::Canais(){
  for(auto i = usuarioServidor.begin() ;i != usuarioServidor.end(); i++){
      cout << " " << *i;
  }
 return 0;
}

int Servidor::Ids(){
  for(auto i = usuarioServidor.begin() ;i != usuarioServidor.end(); i++){
      cout << " " << *i;
 }
 return 0;
}

string Servidor::UsuarioServidor(){
  for(auto i = usuarioServidor.begin() ;i != usuarioServidor.end(); i++){
      cout << " " << *i;
    }
  return 0;
 }