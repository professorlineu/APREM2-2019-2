/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int ivalor1 = 0;
    int ivalor2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout   << "insira o primeiro valor: ";
    cin >> ivalor1;

    cout   << "insira o segundo valor: ";
    cin >> ivalor2;

    cout   <<"o valor da subtração é: " <<ivalor1-ivalor2;

    return 0;
}

