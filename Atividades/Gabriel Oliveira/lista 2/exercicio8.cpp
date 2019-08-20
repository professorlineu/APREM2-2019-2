//**********************************************************
//- Autor: Gabriel Guimarães de Oliveira
//- Descrição: Lista 2 - Exercício 8
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
    int in1=0;

    cout<<"insira seu salario:                  ";
    cin>>in1;

    if(in1<=300)
    {
    cout<<"seu salario foi aumentado para:      "<<(in1*0.35)+in1;
    }
    if(in1>300)
    {
    cout<<"seu salario foi aumentado para:      "<<(in1*0.15)+in1;
    }
}


