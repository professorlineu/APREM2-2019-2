//6. Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
//escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
//programa. As opções são:
//a) O primeiro número elevado ao segundo número.
//b) Raiz quadrada de cada um dos números.
//c) Raiz cúbica de cada um dos números.
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
     while (i<2)
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
        {cout<<inumero3 <<" eh o maior numero ";}
    i=i+1;
    cout<< "\nreiniciando o programa\n";
    }
    cout<<"fim do programa";
}
