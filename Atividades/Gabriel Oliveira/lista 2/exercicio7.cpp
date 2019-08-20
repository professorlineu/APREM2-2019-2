//**********************************************************
//- Autor: Gabriel Guimarães de Oliveira
//- Descrição: Lista 2 - Exercício 7
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;


int main()
{
    float in1=0;


    cout<<"insira seu salario:         ";
    cin>>in1;

    if (in1<500)
    {
    cout<<"seu novo salario e:         "<<(in1*0.3)+in1;
    }
    if(in1>=500)
    {
        cout<<"seu salario continua o mesmo.";
    }

}





