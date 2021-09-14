#ifndef SISTEMA_H
#define SISTEMA_H
#include <string>
#include <vector>
#include "user.h"
#include <map>

using namespace std;

class Sistema {
   public:
string nome; 
vector<User> users;
map<int, string> usersLogados; //id do usuário e o nome                          ;

Sistema(string nome);

string cadastrarUser(string nome, string email, string senha);
string logarUser(string email, string senha);
string listarUser();

};

#endif