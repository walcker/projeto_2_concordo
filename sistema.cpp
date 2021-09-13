#include <iostream>
#include <string>
#include <vector>
#include "sistema.h"
#include "usuario.h"

using namespace std;

Sistema::Sistema(string usuario){
  this -> usuario = usuario;
}

string Sistema::cadastrarUsuario(string usuario, string senha, string nome){
  Usuario novoUsuario(usuario, senha, nome);
  this->usuarios.push_back(novoUsuario);

  return nome + " cadastrado com sucesso.";
}
string Sistema::logarUsuario(string usuario, string senha){
  return "Não implementado";
}
string Sistema::listarUsuarios(){
  return "Não implementado";
}

/*string Sistema::Usuarios(){
  for(int i = 0; i < 5; i++){
  return (usuarios[i]);
 }
 return 0;
}

string Sistema::Servidores(){
  for(int i = 0; i < 5; i++){
  return (servidores[i]);
 }
 return 0;
}*/