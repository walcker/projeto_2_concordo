#include <iostream>
#include <string>
#include <vector>
#include "servidor.h"

using namespace std;

int Servidor::Id() {
    return id;
}
  
string Servidor::Nome() {
    return nome;
}
  
string Servidor::Descricao() {
    return descricao;
}

string Servidor::Convite() {
    return convite;
}
  
string Servidor::Canais(){
  for(int i = 0; i < 5; i++){
  return (canais[i]);
 }
 return 0;
}

int Servidor::Ids(){
  for(int i = 0; i < 5; i++){
  return (ids[i]);
 }
 return 0;
}