/**********************************************************
- Autor:     clayton
- Descrição: multiplicação de 3 numeros lista 1
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
int ivalor3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout <<" digite o primeiro numero";
cin >> ivalor1;

cout <<" digite o segundo numero";
cin >> ivalor2;

cout <<" digite o terceiro numero";
cin >> ivalor3;

cout <<" resultado"<< ivalor1*ivalor2*ivalor3;



    return 0;
}
