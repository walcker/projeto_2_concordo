#include <iostream>
#include <string>
#include <vector>
#include "servidor.h"

using namespace std;

int Servidor::getId(){
	return id;
	}
  
void Servidor::setId(int i) {
	id = i;
	}

string Servidor::getNome(){
	return nome;
	}
  
void Servidor::setNome(string n) {
	nome = n;
	}

string Servidor::getDescricao(){
	return descricao;
	}
  
void Servidor::setDescricao(string d) {
	descricao = d;
	}

string Servidor::getConvite(){
	return convite;
	}
  
void Servidor::setConvite(string c) {
	convite = c;
	}

string Servidor::getCanais(){
	return canais[0];
	}
  
void Servidor::setCanais(string ca) {
	canais[0] = ca;
	}

int Servidor::getIds(){
	return ids[0];
	}
  
void Servidor::setIds(int id) {
	ids[0] = id;
	}