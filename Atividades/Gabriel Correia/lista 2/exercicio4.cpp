//4.Faça um programa que receba três números e mostre o menor.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 2 - Exercício 4
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int inumero1 = 0;
    int inumero2 = 0;
    int inumero3 = 0;


    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "primeiro numero: ";
    cin  >> inumero1;
    cout << endl;
    cout << "segundo numero: ";
    cin  >> inumero2;
    cout << endl;
    cout << "terceiro numero: ";
    cin  >> inumero3;
    cout << endl;
    if (inumero1>inumero2 && inumero1>inumero3)
        {cout<<inumero1 <<" eh o maior numero ";}
    if (inumero2>inumero1  && inumero2>inumero3)
        {cout<<inumero2 <<" eh o maior numero ";}
    if (inumero3>inumero2 && inumero3>inumero1)
        {cout<<inumero3 <<" eh o maior numero ";}
}
