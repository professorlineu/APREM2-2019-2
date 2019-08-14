//Exercicio 1: Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo.
//**********************************************************

//- Autor: Gabriel Correia Soares

//- Descrição: Lista 1 - Exercício 5

//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ip = 0;
    int iseg = 0;
    int itotal =0;

    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mecânica; IFSP-SJC";
    cout <<endl;
    cout << "preço da gasolina: ";
    cin  >>ip;
    cout <<endl;
    itotal=(ip*10)/100;
    cout <<"resultado:"
         << ip-itotal
         <<"."
         << endl;
}

