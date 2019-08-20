//**********************************************************
//- Autor: Gabriel Guimarães de Oliveira
//- Descrição: Lista 2 - Exercício 6
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
 float in2=0;
 float in3=0;

 cout<<"insira o primeiro numero:        ";
 cin>>in1;
 cout<<"insira o segundo numero:         ";
 cin>>in2;



 cout<<"para o primeiro numero elevado ao segundo numero insira 1:     "<<endl;
 cout<<"para raiz quadrada de cada um dos numeros insira 2:            "<<endl;
 cout<<"para raiz cubica de cada um dos numeros insira 3:              "<<endl;
 cin>>in3;

    if(in3==1)
 {
 cout<<"sua conta deu:      "<<pow(in1,in2);
 }

    if(in3==2)
{

        if (in1>0&&in2>0)
            {cout<<"suas raizes deram:           "<<sqrt(in1)<<"   e   "<< sqrt(in2);}
        else
        {
            cout<<"erro";
        }
}

    if(in3==3)

{
     cout<<"suas raizes deram:           "<<cbrt(in1)<<"   e   "<< cbrt(in2);
}
    if(in3>3)
        {cout<<"erro, operacao invalida";}
    if(in3<1)
        {
        cout<<"erro, operacao invalida";}
















}
