//**********************************************************
//- Autor: Gabriel Guimarães de Oliveira
//- Descrição: Lista 2 - Exercício 1
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()
{
int inota1 = 0;
int inota2 = 0;
int inota3 = 0;
int inota4 = 0;
int imedia = 0;

    cout<<"insira primeira nota:       ";
    cin>>inota1;
    cout<<"insira segunda nota:        ";
    cin>>inota2;
    cout<<"insira terceira nota:       ";
    cin>>inota3;
    cout<<"insira quarta nota:         ";
    cin>>inota4;


    imedia=(inota1+inota2+inota3+inota4)/4;

    cout<<"sua media e:       ";
    cout<<imedia <<endl;


        if(imedia<7)
            {
                cout<<"reprovado";
        }

    if(imedia>=7)
    {
        cout<<"aprovado";
        }

}














