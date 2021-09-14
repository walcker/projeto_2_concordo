#include <iostream>
#include <string>
#include <vector>
#include <utility>
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
 // map<int, string> usersLogados; //id do usuário e o nome
 //adicionar em userLogados o par <idUser, nomeUser>

 //1 - qual o id do user com esse email/senha
 vector<User>::iterator userAtual;
 userAtual = this->users.begin();
 while(userAtual != this->users.end()){
   //bateu o email/senha?
   if(userAtual->email == email && userAtual->senha == senha){
     //sim logar
      pair<int, string> usuarioId;
      usuarioId.first = userAtual->id;
      usuarioId.second = nome;
      this->usersLogados.insert(usuarioId);
      return "Login com sucesso para " + userAtual->nome;
   }
  
   userAtual++;
 }


  return "Email/senha não encontrados.";
}
string Sistema::listarUser(){
  vector<User>::iterator userAtual;
  string retorno = "";
  userAtual = this->users.begin();
  while(userAtual != this->users.end()){
    retorno = retorno + userAtual->nome + "\n";

    userAtual++;
  }

  return retorno;
}