//1. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
//mensagem de aprovado ou reprovado, considerando para aprovação média 7.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 2 - Exercício 1
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int inota1 = 0;
    int inota2 = 0;
    int inota3 = 0;
    int inota4 = 0;
    int imedia =0;
    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "primeira nota: ";
    cin  >> inota1;
    cout << endl;
    cout << "segunda nota: ";
    cin  >> inota2;
    cout << endl;
    cout << "terceira nota: ";
    cin  >> inota3;
    cout << endl;
    cout << "quarta nota: ";
    cin  >> inota4;
    cout << endl;

    imedia=(inota1+inota2+inota3+inota4)/4;

    if (imedia>=7)
        cout<< "parabens voce passou de ano!!!!!!, com a nota: "<<imedia;
    else
        cout<<"sinto muito, mas voce nao passou";

}
