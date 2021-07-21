#include <iostream>
#include "usuario.h"

using namespace std;

int main(){

	Usuario u;
	u.setId(1);
	u.setEmail("walcker@ufrn.br");
  u.setSenha("1234");
  u.setNome("Walcker Gomes");

	cout << "E-mail = " << u.getEmail() << ", Nome = " << u.getNome();
	return 0;
}