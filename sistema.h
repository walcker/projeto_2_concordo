#ifndef SISTEMA_H
#define SISTEMA_H

using namespace std;

class Sistema {
  private:
string usuarios[10];
string servidores[10];
//vector<string> vetor;                               ;

  public:
string getUsuarios();
void setUsuarios(string u);

string getServidores();
void setServidores(string s);

};

#endif