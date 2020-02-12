/**********************************************************
- Autor: Isabela, Luiz e Milene
- Descrição: imc
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
float faltura=0;
float fpeso=0;
float fmc=0;
int i=0;
char cresp='S';

while ( i==0)
{


cout<< "\n\n Digite sua altura ( utilizando ponto )-  ";
cin>> faltura;

cout<< " Digite seu peso - ";
cin>> fpeso;

fmc=((fpeso))/((faltura*faltura));

if ( fmc<18.5 )
{
    cout << " Voce esta abaixo do peso ";
}


if  (fmc >=18.5 && fmc <24.9 )

{
     cout << " Voce esta no peso ideal ";
}


 if ( fmc >= 25)

 {
     cout << " Voce esta acima do peso";
 }

cout<< "\n Seu imc e de: " << fmc;

cout<< " \n\n Voce deseja calcular outro imc ? S/N ";
cin>> cresp;


if ( cresp=='n')

{
    i=1;
}

}



}
