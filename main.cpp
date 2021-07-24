#include <iostream>
#include "usuario.h"
#include "mensagem.h"

using namespace std;

int main(){

	Usuario u;
	u.setId(1);
	u.setEmail("walcker@ufrn.br");
  u.setSenha("1234");
  u.setNome("Walcker Gomes");

	cout << "E-mail = " << u.getEmail() << ", Nome = " << u.getNome();

  cout << endl;

  Mensagem m;
	m.setDataHora("02/12/1979 08:00");
	m.setEnviadaPor("Walcker Gomes");
  m.setConteudo("Bom dia.");

	cout << "Data/Hora = " << m.getDataHora() <<", Nome = " << m.getEnviadaPor() << ", Mensagem: " << m.getConteudo();

	return 0;
}