/**********************************************************
- Autor:     thomas
- Descrição: multiplicação de váriaveis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int ivalor1=0;
int ivalor2=0;
int ivalor3=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout    << "Insira o valor 1: ";
cin     >>ivalor1;
cout    << "Insira o valor 2: ";
cin     >>ivalor2;
cout    <<"Insira o valor 3: ";
cin     >>ivalor3;

cout    << "resultado da multiplicação :"
        << ivalor1*ivalor2*ivalor3;

    return 0;
}
