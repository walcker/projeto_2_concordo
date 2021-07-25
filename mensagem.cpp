#include <iostream>
#include <string>
#include <vector>
#include "mensagem.h"

using namespace std;

string Mensagem::getDataHora(){
	return dataHora;
	}
  
void Mensagem::setDataHora(string d) {
	dataHora = d;
	}

string Mensagem::getEnviadaPor(){
	return enviadaPor;
	}
  
void Mensagem::setEnviadaPor(string e) {
	enviadaPor = e;
	}

string Mensagem::getConteudo(){
	return conteudo;
	}
  
void Mensagem::setConteudo(string c) {
	conteudo = c;
	}