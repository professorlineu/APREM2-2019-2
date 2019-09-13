/**********************************************************
- Autor:     ramon macedo
- Descrição: 5. Faça um programa que mostre as tabuadas dos números de 1 a 10.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int i = 0;
int inum = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "digite o numero que quer saber a tabuada: ";
cin >> inum;


while ( i < 11)
{
    cout << inum << " x " << i << " = "<< inum*i<< endl;
    i +=1;
}

    return 0;
}
