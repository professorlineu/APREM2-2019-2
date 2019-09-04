/**********************************************************
- Autor: João Pedro Neves Baldin
- Descrição: Lista 02 - Exercício 01
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float fidade=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color b0");

    //Código do programa
cout << " Digite sua idade ";
cin >> fidade;

if ( fidade>=18)
cout << " Você é maior de idade " << fidade << endl;

else
cout << " Você não é maior de idade " << fidade << endl;


    return 0;
}
