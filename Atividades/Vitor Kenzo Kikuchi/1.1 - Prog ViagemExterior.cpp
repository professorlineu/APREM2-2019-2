/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fdin=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Quantos reais você pretende gastar no exterior? ";
cin >> fdin;

cout << "Com a cotação do dólar em R$4.00, você teria "
     << fdin/4
     << " dólares."
     << endl;

cout << "Como o euro vale R$4.475, você teria "
     << fdin/4.475
     << " euros."
     << endl;

cout << "Quanto o dólar canadense, que vale R$2.99, você teria "
     << fdin/2.99
     << " libras esterlinas."
     << endl;

cout << "Tenha uma ótima viagem! "
     << endl;

    return 0;

}
