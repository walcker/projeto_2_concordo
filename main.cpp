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
	c.nome = ("Nome do canal");
  string teste;
	for(int i = 0; i < 5; i++){
    cout << "Digite" << endl;
    cin >> teste;
      c.mensagens.push_back(teste);
    }


	cout << "Mensagens do canal: = " << c.Nome() << endl;
  for(int i = 0; i< 5; i++){
      cout << c.mensagens[i] << " ";
    }

  cout << endl;

  Servidor s;
	s.id = (01);
	s.nome = ("Walcker Gomes");
  s.descricao = ("Servidor Geral");
  s.convite = ("Link para Convite");
  for(int i = 0; i < 5; i++){
    cout << "Digite" << endl;
    cin >> teste;
      s.canais.push_back(teste);
    }
  for(int i = 0; i < 5; i++){
    s.ids.push_back(i);
    }


	cout << "Nome Usuário = " << s.Nome() << ", Servidor = " << s.Descricao() << " Link de convite = " << s.Convite() << " Canais no servidor: " << endl;
  for(int i = 0; i< 5; i++){
      cout << s.canais[i] << " ";
    }
  for(int i = 0; i< 5; i++){
      cout << s.ids[i] << " ";
    }

  cout << endl;

  Sistema si;
	for(int i = 0; i < 5; i++){
    cout << "Usuários" << endl;
    cin >> teste;
      si.usuarios.push_back(teste);
    }
  for(int i = 0; i < 5; i++){
    cout << "Servidores" << endl;
    cin >> teste;
      si.servidores.push_back(teste);
    }

  for(int i = 0; i< 5; i++){
      cout << si.usuarios[i] << " ";
    }
    for(int i = 0; i< 5; i++){
      cout << si.servidores[i] << " ";
    }

	return 0;
}