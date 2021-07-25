#include <iostream>
#include <string>
#include <vector>
#include "usuario.h"

using namespace std;

int Usuario::getId(){
	return id;
	}
  
void Usuario::setId(int i) {
	id = i;
	}

string Usuario::getEmail(){
	return email;
	}
  
void Usuario::setEmail(string e) {
	email = e;
	}

string Usuario::getSenha(){
	return senha;
	}
  
void Usuario::setSenha(string s) {
	senha = s;
	}

string Usuario::getNome(){
	return nome;
	}
  
void Usuario::setNome(string n) {
	nome = n;
	}