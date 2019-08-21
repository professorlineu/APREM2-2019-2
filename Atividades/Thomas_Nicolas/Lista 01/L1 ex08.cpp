/**********************************************************
- Autor:     Thomas Nicolas
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

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout    << "insira seu peso em kilos: ";
    cin     >> fpeso;

    cout    << "seu peso em gramas: " <<fpeso*1000 <<"g";

    return 0;
}
