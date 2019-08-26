/**********************************************************
- Autor:Augusto Nogueira Almeida
- Descricao: maior numero
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
int inumero1=0;
int inumero2=0;
int inumero3=0;

cout<<" digite o primeiro numero";
cin>> inumero1;

cout<<" digite o segundo numero";

cin>> inumero2;

cout<<" digite o terceiro numero";
cin>> inumero3;



if   (inumero1>inumero2 && inumero1>inumero3)
    {
        cout<< "O maior numero e" << inumero1
         << endl;
    }

 if  (inumero3>inumero1 && inumero2<inumero3)
    {
        cout<< "O maior numero e" << inumero3
         << endl;
    }

if (inumero2>inumero1 && inumero3<inumero2)
    {
        cout<< "O maior numero e" << inumero2
         << endl;
    }


}
