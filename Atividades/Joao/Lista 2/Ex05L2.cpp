/**********************************************************
- Autor: João Pedro Neves Baldin
- Descrição: Lista 02 - Exercício 05
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float fnumero1=0;
float fnumero2=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color b0");

    //Código do programa
cout << " digite o primeiro número ";
cin >> fnumero1;
cout << " digite o segundo número ";
cin >> fnumero2;




if ( fnumero1<fnumero2)
cout << fnumero1 << " é menor que " << fnumero2 <<endl;

else
cout << fnumero2 << " é menor que " << fnumero1 <<endl;



    return 0;
}
