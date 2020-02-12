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


while ( i=0)
{


cout<< " digite sua altura - ";
cin>> faltura;

cout<< " Digite seu peso - ";
cin>> fpeso;

fmc=((fpeso))/((faltura*faltura));

if ( fmc<18.5 )
{
    cout << " voce esta abaixo do peso ";
}


if  (fmc >=18.5 && fmc <24.9 )

{
     cout << " voce esta no peso ideal ";
}


 if ( fmc >= 25)

 {
     cout << " voce esta acima do peso";
 }

cout<< fmc;

}

}
