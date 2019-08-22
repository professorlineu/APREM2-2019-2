//1. Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em segui-
//da, organize-os em ordem crescente e decrescente.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 2 - Exercício 6
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float inumero1 = 0;
    float inumero2 = 0;
    float inumero3 = 0;
    float inumero4 = 0;
    int i = 0;

    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "\niniciando o programa: \n";
     while (i<5)
    {cout << "\nprimeiro numero: ";
    cin  >> inumero1;
    cout << endl;
    cout << "segundo numero: ";
    cin  >> inumero2;
    cout << endl;
    cout << "terceiro numero: ";
    cin  >> inumero3;
    cout << endl;
    cout << "segundo numero: ";
    cin  >> inumero4;
    cout << endl;
    if (inumero1>inumero2 && inumero1>inumero3 && inumero1>inumero4)
        {cout<<inumero1 <<" eh o maior numero ";}
    if (inumero2>inumero1  && inumero2>inumero3 && inumero2>inumero4)
        {cout<<inumero2 <<" eh o maior numero ";}
    if (inumero3>inumero2 && inumero3>inumero1 && inumero3>inumero4)
        {cout<<inumero3 <<" eh o maior numero ";}
    if (inumero4>inumero1 && inumero4>inumero2 && inumero4>inumero3)
        {cout<<inumero4 <<" eh o maior numero ";}
    i=i+1;
    cout<< "\nreiniciando o programa\n";
    }
    cout<<"fim do programa";
}
