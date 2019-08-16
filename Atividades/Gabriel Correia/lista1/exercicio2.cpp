//2. Faça um programa que receba três números, calcule e mostre a multiplicação desses números.
//**********************************************************

//- Autor: Gabriel Correia Soares

//- Descrição: Lista 1 - Exercício 2

//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ip = 0;
    int is = 0;
    int it = 0;
    int iresultado = 0;
    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "primeiro numero: ";
    cin  >>ip;
    cout <<endl;

    cout << "segundo numero: ";
    cin  >>is;
    cout <<endl;

    cout << "terceiro numero: ";
    cin  >>it;
    cout <<endl;



    iresultado = ip*is*it;
    cout <<"resultado:"
         <<iresultado
         <<"."
         << endl;
}
