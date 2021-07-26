#include <iostream>
#include <string>
#include <vector>
#include "sistema.h"

using namespace std;

string Sistema::getUsuarios(){
	return usuarios[0];
	}
  
void Sistema::setUsuarios(string u) {
	usuarios[0] = u;
	}

string Sistema::getServidores(){
	return servidores[0];
	}
  
void Sistema::setServidores(string s) {
	servidores[0] = s;
	}