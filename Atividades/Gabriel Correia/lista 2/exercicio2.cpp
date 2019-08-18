//2. Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 2 - Exercício 2
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int inota1 = 0;
    int inota2 = 0;
    int imedia =0;
    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "primeiro nota: ";
    cin  >> inota1;
    cout << endl;
    cout << "segunda nota: ";
    cin  >> inota2;
    cout << endl;



    imedia=(inota1+inota2)/2;

    if (imedia>=7)
        cout<< "voce foi aprovado(a)";
    if (imedia>=3)
        cout<<"voce esta de exame";
    if (imedia<3)
        cout<<"voce foi reprovado(a)";
}
