#include "user.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

User::User(string nome, string email, string senha){
  this->nome = nome;
  this->email = email;
  this->senha = senha;
  
}
