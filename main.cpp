#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "usuario.h"
#include "mensagem.h"
#include "canaltexto.h"
#include "servidor.h"
#include "sistema.h"

using namespace std;

void limpaTela(){
  system("clear");
}

int main(){

  //Permite usar acentos
    setlocale(LC_ALL,"");

  //Variáveis
  int funcaoDesejada = 1;
  string teste;
  vector<string> mensagens;
  vector<string> usuarios;

while(funcaoDesejada < 10 && funcaoDesejada > 0){

        //Mostrando o menu
        cout << "Operações" << endl;
        cout << "1 - Login." << endl;
        cout << "2 - Cadastrar novo usuário." << endl;
        cout << "3 - Escrever uma mensagem." << endl;
        cout << "4 - Criar canal." << endl;
        cout << "5 - Criar servidor." << endl;
        cout << "9 - Sair do sistema." << endl;
        cout << "Escolha um número e pressione ENTER." << endl;

        //Lendo opção do usuário
        cin >> funcaoDesejada;

        limpaTela();

        //Lendo a função desejada
        switch(funcaoDesejada){
            case 1:{
                cout << "Função escolhida 1" << endl;
                vector<string>::iterator it;
                Usuario u;
                for (it = usuarios.begin(); it != usuarios.end(); ++it) {
                  cout << *it << endl; 
                    if(*it == "walcker@ufrn.br"){
                        cout << "Usuário logado." << endl;
                    }else{
                        cout << "Usuário não encontrado." << endl;
                    }
                }
                cout << endl;

                
                break;}
            case 2:{
                cout << "Cadastrar usuário" << endl;
                Usuario u;
                u.id = (1);
                u.email = ("walcker@ufrn.br");
                usuarios.push_back("walcker@ufrn.br");
                u.senha = ("1234");
                u.nome = ("Walcker Gomes");

                cout << "E-mail = " << u.Email() << ", Nome = " << u.Nome() << endl;
                break;}
            case 3:{
                cout << "Escreva uma Mensagem" << endl;
                Mensagem m;
                m.setDataHora("02/12/1979 08:00");
                m.setEnviadaPor("Walcker Gomes");
                m.setConteudo("Bom dia.");

                vector<string>::iterator it;
                mensagens.push_back("Bom dia");
                for (it = mensagens.begin(); it != mensagens.end(); ++it){
                  cout << *it << endl;
                }

                cout << "Data/Hora = " << m.getDataHora() <<", Nome = " << m.getEnviadaPor() << ", Mensagem: " << m.getConteudo() << endl;
                break;}
            case 4:{
                cout << "Criando um canal." << endl;
                Canaltexto c;
                c.nome = ("Canal Geral");
                
                vector<string>::iterator it;
                for(it = mensagens.begin() ;it != mensagens.end(); it++){
                  cout << "Digite" << endl;
                  
                  cin >> *it;
                    c.mensagens.push_back(*it);       
                    }
              
                for (it = mensagens.begin(); it != mensagens.end(); ++it) {
                  cout << *it << endl; 
                }
                cout << endl;
                  break;}              
                
            case 5:{
                cout << "Criando Servidor" << endl;
                Sistema si;

                vector<string>::iterator i;
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
                break;}
            case 9:{
                cout << "saindo do sistema" << endl;
                exit(0);
                break;}
        }

    }

    system("pause"); 

	return 0;
}