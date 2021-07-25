#include <iostream>
#include <string>
#include <vector>
#include "canaltexto.h"

using namespace std;

string Canaltexto::getNome(){
	return nome;
	}
  
void Canaltexto::setNome(string n) {
	nome = n;
	}

string Canaltexto::getVetor(){
	return vetor[0];
	}
  
void Canaltexto::setVetor(string v) {
	vetor[0] = v;
	}