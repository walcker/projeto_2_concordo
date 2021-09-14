#include "user.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int userLastId = 1;
int incrementaId(){
  return userLastId++;
}

User::User(string nome, string email, string senha){
  this->nome = nome;
  this->email = email;
  this->senha = senha;
  this->id = incrementaId();
  
}
