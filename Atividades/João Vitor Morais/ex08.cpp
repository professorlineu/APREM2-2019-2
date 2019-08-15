/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fpeso = 0;
float fpeso2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "apresente o seu peso em kg: ";
cin  >> fpeso;

fpeso2 = fpeso*1000;

cout << "esse seria seu peso em gramas: "
     << fpeso2
     << endl;

    return 0;
}
