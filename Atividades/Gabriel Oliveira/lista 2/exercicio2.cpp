//**********************************************************
//- Autor: Gabriel Guimarães de Oliveira
//- Descrição: Lista 2 - Exercício 2
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
    int imedia = 0;

        cout<<"insira a primeira nota:     ";
        cin>>inota1;
        cout<<"inseira a segunda nota:     ";
        cin>>inota2;

        imedia=(inota1+inota2)/2;

        cout<<"sua media e:                ";
        cout<<imedia<<endl;

        if(imedia<3)
        {
        cout<<"reprovado";
        }
        if(imedia>=3 && imedia<7)
        {
        cout<<"exame";
        }
        if(imedia>=7)
        {
        cout<<"aprovado";
        }


}

