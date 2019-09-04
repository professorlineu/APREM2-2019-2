/**********************************************************
- Autor:     ramon
- Descrição: 4. Faça um programa que receba um número, calcule e mostre a tabuada desse número.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int inum1 = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "digite o numero que quer saber a tabuada: ";
    cin  >> inum1;


while ( i < 11)
{
    cout << inum1 << " x " << i << " = " << inum1 * i << endl;
    i = i + 1;

  }


    return 0;
}
