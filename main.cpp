#include <iostream>
#include <string>
#include <vector>
#include "usuario.h"
#include "mensagem.h"
#include "canaltexto.h"
#include "servidor.h"
#include "sistema.h"

using namespace std;

int main(){

	Usuario u;
	u.setId(1);
	u.setEmail("walcker@ufrn.br");
  u.setSenha("1234");
  u.setNome("Walcker Gomes");

	cout << "E-mail = " << u.getEmail() << ", Nome = " << u.getNome() << endl;

  cout << endl;

  Mensagem m;
	m.setDataHora("02/12/1979 08:00");
	m.setEnviadaPor("Walcker Gomes");
  m.setConteudo("Bom dia.");

	cout << "Data/Hora = " << m.getDataHora() <<", Nome = " << m.getEnviadaPor() << ", Mensagem: " << m.getConteudo() << endl;

  cout << endl;

  Canaltexto c;
	c.setNome("Nome do canal");
	c.setVetor("walcker@ufrn.br");


	cout << "Nome Canal = " << c.getNome() << ", Vetor = " << c.getVetor() << endl;

  cout << endl;

  Servidor s;
	s.setId(01);
	s.setNome("Walcker Gomes");
  s.setDescricao("Servidor Geral");
  s.setConvite("Link para Convite");
  s.setCanais("Bate_Papo");
  s.setIds(01);


	cout << "Nome Usuário = " << s.getNome() << ", Servidor = " << s.getDescricao() << " Link de convite = " << s.getConvite() << " Canais no servidor: " << s.getCanais() << " Usuários logados: " << s.getIds() << endl;

  cout << endl;

  Sistema si;
	si.setUsuarios("Usuários criados");
	si.setServidores("Servidores criados");

  cout << "Usuários criados = " << si.getUsuarios() << ", Servidores criados = " << si.getServidores() << endl;

	return 0;
}