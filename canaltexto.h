#ifndef CANALTEXTO_H
#define CANALTEXTO_H

using namespace std;

class Canaltexto {
  private:
string nome;
//vector<string> vetor; 
string vetor[10];                                ;

  public:
string getNome();
void setNome(string n);

string getVetor();
void setVetor(string v);

};

#endif