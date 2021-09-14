#include <iostream>
#include <string>
#include <vector>
#include "sistema.h"
#include "user.h"

using namespace std;

Sistema::Sistema(string nome){
  this-> nome = nome;
}

string Sistema::cadastrarUser(string nome, string email, string senha){
  User newUser(nome, email, senha);
  this->users.push_back(newUser);
  return nome + " cadastrado com sucesso.";
}
string Sistema::logarUser(string email, string senha){
  return "Não implementado.";
}
string Sistema::listarUser(){
  return "Não implementado.";
}