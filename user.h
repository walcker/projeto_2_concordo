#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class User{
  public:
  int id;
  string nome, email, senha;

  User(string nome, string email, string senha);
};

#endif