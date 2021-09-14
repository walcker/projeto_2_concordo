#ifndef SISTEMA_H
#define SISTEMA_H
#include <string>
#include <vector>
#include "user.h"

using namespace std;

class Sistema {
   public:
string nome; 
vector<User> users;                            ;

Sistema(string nome);

string cadastrarUser(string nome, string email, string senha);
string logarUser(string email, string senha);
string listarUser();

};

#endif