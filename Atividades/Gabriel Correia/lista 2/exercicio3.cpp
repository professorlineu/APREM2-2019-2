//3.Faça um programa que receba dois números e mostre o menor.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 2 - Exercício 3
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int inumero1 = 0;
    int inumero2 = 0;
    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "primeiro numero: ";
    cin  >> inumero1;
    cout << endl;
    cout << "segundo numero: ";
    cin  >> inumero2;
    cout << endl;
    if (inumero1>inumero2)
        cout<<inumero1 <<" eh maior que " <<inumero2;
    else
        cout<<inumero2 <<" eh maior que " <<inumero1;
}
