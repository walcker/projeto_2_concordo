#include <iostream>
#include <string>
#include <vector>
#include "canaltexto.h"

using namespace std;

string Canaltexto::Nome() {
    return nome;
}

string Canaltexto::Mensagens(){
  for(auto i = mensagens.begin() ;i != mensagens.end(); i++){
      cout << " " << *i;
    }
  return 0;
 }

 string Canaltexto::MensagensCanal(){
  for(auto i = mensagensCanal.begin() ;i != mensagensCanal.end(); i++){
      cout << " " << *i;
    }
  return 0;
 }

