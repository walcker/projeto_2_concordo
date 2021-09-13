#include <iostream>
#include <string>
#include <vector>
#include "usuario.h"
#include "sistema.h"

using namespace std;



Usuario::Usuario(string email, string senha, string nome){
  this-> email =email;
  this->senha =senha;
  this->nome = nome;
}

int Usuario::Id(){
	return id;
	}

string Usuario::Email(){
	return email;
	}

string Usuario::Senha(){
	return senha;
	}

string Usuario::Nome(){
	return nome;
	}