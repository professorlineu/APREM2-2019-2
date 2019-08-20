//**********************************************************
//- Autor: Gabriel Guimarães de Oliveira
//- Descrição: Lista 2 - Exercício 5
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()
{
    int in1 =0;
    int in2 =0;
    int in3 =0;

    cout<<"insira o primeiro numero:      ";
    cin>>in1;
    cout<<"insira o segundo numero:       ";
    cin>>in2;
    cout<<"escolha uma operacao:          ";
    cin>>in3;

    if(in3==1)
    {
    cout<<"sua media foi:               "<<(in1+in2)/2;
    }
        if(in3==2)
    {
        if(in1>in2)
        {
            cout<<"sua subtracao deu:     "<<(in1-in2);
        }
        if(in2>in1)
        {
            cout<<"sua subtracao deu:     "<<(in2-in1);
        }

    }

    if(in3==3)
    {
        cout<<"seu produto deu:           "<<(in1*in2);
    }

    if(in3==4)
    {
        cout<<"sua divisao deu:           "<<(in1/in2);
    }



}
