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
  vector<string> mensagensCanal;
  vector<string> usuarios;
  vector<string> usuarioServidor;

while(funcaoDesejada < 10 && funcaoDesejada > 0){

        //Mostrando o menu
        cout << "Operações" << endl;
        cout << "1 - Login." << endl;
        cout << "2 - Cadastrar novo usuário." << endl;
        cout << "3 - Escrever uma mensagem." << endl;
        cout << "4 - Criar canal." << endl;
        cout << "5 - Criar servidor." << endl;
        cout << "6 - Usuários logados." << endl;
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
                
                vector<string>::iterator it;
                mensagensCanal.push_back("");
                for(it = mensagensCanal.begin() ;it != mensagensCanal.end(); it++){
                  cout << "Digite o nome do Canal" << endl;
                  
                  cin >> *it;
                    c.mensagensCanal.push_back(*it);       
                    }
              
                for (it = mensagensCanal.begin(); it != mensagensCanal.end(); ++it) {
                  cout << *it << endl; 
                }
                cout << endl;
                  break;}              
                
            case 5:{
                cout << "Criando um servidor." << endl;
                Servidor s;
                
                vector<string>::iterator it;
                usuarioServidor.push_back("");
                for(it = usuarioServidor.begin() ;it != usuarioServidor.end(); it++){
                  cout << "Digite o nome do Servidor" << endl;
                  
                  cin >> *it;
                    s.usuarioServidor.push_back(*it);   
                    }
              
                for (it = usuarioServidor.begin(); it != usuarioServidor.end(); ++it) {
                  cout << *it << endl; 
                }
                cout << endl;


                  break;}
            case 6:{
                cout << "Usuários logados" << endl;
                vector<string>::iterator it;
                Sistema s("Usuários no sistema atualmente.");
                string imprimir;

                imprimir = s.cadastrarUser("Walcker Gomes", "walcker@ufrn.br", "walcker123");
                cout << imprimir << endl;
                imprimir = s.cadastrarUser("Cynara Grilo", "cynara@ufrn.br", "cynara123");
                cout << imprimir << endl;
              
                
                cout << endl;

                
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