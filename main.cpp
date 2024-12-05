#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool fimDoJogo = false;
int escolhaUser, escolhaBot;

int main() {
  while(fimDoJogo == false) {
    srand(time(0));
    escolhaBot = 1+rand()%3;
    
    cout << "\n** PEDRA - PAPEL - TESOURA **" << endl;
    cout << "\n[ 1 ] PEDRA\n[ 2 ] PAPEL\n[ 3 ] TESOURA" << endl;
    cout << "\nDigite o número correspondente da sua escolha: ";
    cin >> escolhaUser;

    if(escolhaUser == 1 && escolhaBot == 1) {
      int x;
      
      cout << "\nVocê escolheu PEDRA";
      cout << "\nO BOT escolheu PEDRA" << endl;
      cout << "Resultado: ** EMPATE **" << endl; 

      cout << "\nDeseja jogar novamente ?" << "\n[ 1 ] SIM" << "\n[ 2 ] NÃO" << "\nDigite a sua escolha: ";
      cin >> x;

      if(x == 1) {
        fimDoJogo = false;
      } else if(x == 2) {
        fimDoJogo = true;
      } else {
        cout << "\nComando INVÁLIDO";
        cout << "\nJogo FINALIZADO !!" << endl;

        fimDoJogo = true;
      }
    } else if(escolhaUser == 1 && escolhaBot == 2) {
      int x;
      
      cout << "\nVocê escolheu PEDRA";
      cout << "\nO BOT escolheu PAPEL" << endl;
      cout << "Resultado: ** VOCÊ PERDEU **" << endl; 

      cout << "\nDeseja jogar novamente ?" << "\n[ 1 ] SIM" << "\n[ 2 ] NÃO" << "\nDigite a sua escolha: ";
      cin >> x;

      if(x == 1) {
        fimDoJogo = false;
      } else if(x == 2) {
        fimDoJogo = true;
      } else {
        cout << "\nComando INVÁLIDO";
        cout << "\nJogo FINALIZADO !!" << endl;

        fimDoJogo = true;
      }
    } else if(escolhaUser == 1 && escolhaBot == 3) {
      int x;
      
      cout << "\nVocê escolheu PEDRA";
      cout << "\nO BOT escolheu TESOURA" << endl;
      cout << "Resultado: ** VOCÊ GANHOU **" << endl; 

      cout << "\nDeseja jogar novamente ?" << "\n[ 1 ] SIM" << "\n[ 2 ] NÃO" << "\nDigite a sua escolha: ";
      cin >> x;

      if(x == 1) {
        fimDoJogo = false;
      } else if(x == 2) {
        fimDoJogo = true;
      } else {
        cout << "\nComando INVÁLIDO";
        cout << "\nJogo FINALIZADO !!" << endl;

        fimDoJogo = true;
      }
    }
    
    if(escolhaUser == 2 && escolhaBot == 1) {
      int x;

      cout << "\nVocê escolheu PAPEL";
      cout << "\nO BOT escolheu PEDRA" << endl;
      cout << "Resultado: ** VOCÊ GANHOU **" << endl; 

      cout << "\nDeseja jogar novamente ?" << "\n[ 1 ] SIM" << "\n[ 2 ] NÃO" << "\nDigite a sua escolha: ";
      cin >> x;

      if(x == 1) {
        fimDoJogo = false;
      } else if(x == 2) {
        fimDoJogo = true;
      } else {
        cout << "\nComando INVÁLIDO";
        cout << "\nJogo FINALIZADO !!" << endl;

        fimDoJogo = true;
      }
    } else if(escolhaUser == 2 && escolhaBot == 2) {
      int x;
      
      cout << "\nVocê escolheu PAPEL";
      cout << "\nO BOT escolheu PAPEL" << endl;
      cout << "Resultado: ** EMPATE **" << endl; 

      cout << "\nDeseja jogar novamente ?" << "\n[ 1 ] SIM" << "\n[ 2 ] NÃO" << "\nDigite a sua escolha: ";
      cin >> x;

      if(x == 1) {
        fimDoJogo = false;
      } else if(x == 2) {
        fimDoJogo = true;
      } else {
        cout << "\nComando INVÁLIDO";
        cout << "\nJogo FINALIZADO !!" << endl;

        fimDoJogo = true;
      }
    } else if(escolhaUser == 2 && escolhaBot == 3) {
      int x;

      cout << "\nVocê escolheu PAPEL";
      cout << "\nO BOT escolheu TESOURA" << endl;
      cout << "Resultado: ** VOCÊ PERDEU **" << endl; 

      cout << "\nDeseja jogar novamente ?" << "\n[ 1 ] SIM" << "\n[ 2 ] NÃO" << "\nDigite a sua escolha: ";
      cin >> x;

      if(x == 1) {
        fimDoJogo = false;
      } else if(x == 2) {
        fimDoJogo = true;
      } else {
        cout << "\nComando INVÁLIDO";
        cout << "\nJogo FINALIZADO !!" << endl;

        fimDoJogo = true;
      }
    }

    if(escolhaUser == 3 && escolhaBot == 1) {
      int x;

      cout << "\nVocê escolheu TESOURA";
      cout << "\nO BOT escolheu PEDRA" << endl;
      cout << "Resultado: ** VOCÊ PERDEU **" << endl; 

      cout << "\nDeseja jogar novamente ?" << "\n[ 1 ] SIM" << "\n[ 2 ] NÃO" << "\nDigite a sua escolha: ";
      cin >> x;

      if(x == 1) {
        fimDoJogo = false;
      } else if(x == 2) {
        fimDoJogo = true;
      } else {
        cout << "\nComando INVÁLIDO";
        cout << "\nJogo FINALIZADO !!" << endl;

        fimDoJogo = true;
      }
    } else if(escolhaUser == 3 && escolhaBot == 2) {
      int x;

      cout << "\nVocê escolheu TESOURA";
      cout << "\nO BOT escolheu PAPEL" << endl;
      cout << "Resultado: ** VOCÊ GANHOU **" << endl; 

      cout << "\nDeseja jogar novamente ?" << "\n[ 1 ] SIM" << "\n[ 2 ] NÃO" << "\nDigite a sua escolha: ";
      cin >> x;

      if(x == 1) {
        fimDoJogo = false;
      } else if(x == 2) {
        fimDoJogo = true;
      } else {
        cout << "\nComando INVÁLIDO";
        cout << "\nJogo FINALIZADO !!" << endl;

        fimDoJogo = true;
      }
    } else if(escolhaUser == 3 && escolhaBot == 3) {
      int x;

      cout << "\nVocê escolheu TESOURA";
      cout << "\nO BOT escolheu TESOURA" << endl;
      cout << "Resultado: ** EMPATE **" << endl; 

      cout << "\nDeseja jogar novamente ?" << "\n[ 1 ] SIM" << "\n[ 2 ] NÃO" << "\nDigite a sua escolha: ";
      cin >> x;

      if(x == 1) {
        fimDoJogo = false;
      } else if(x == 2) {
        fimDoJogo = true;
      } else {
        cout << "\nComando INVÁLIDO";
        cout << "\nJogo FINALIZADO !!" << endl;

        fimDoJogo = true;
      }
    } else {
        cout << "\nComando INVÁLIDO" << endl;
    }
    
  }
  
  return 0;
}
