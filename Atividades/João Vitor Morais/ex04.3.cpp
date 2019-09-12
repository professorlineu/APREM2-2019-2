/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba um número, calcule e mostre a tabuada desse número.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int i = 0;
int inumero = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o numero que você deseja obter a tabuada: ";
    cin  >> inumero;

while (i < 11)
{
     cout << inumero
          << "X"
          << i
          << "="
          << inumero * i
          << endl;
     i = i + 1;
}
    return 0;
}
