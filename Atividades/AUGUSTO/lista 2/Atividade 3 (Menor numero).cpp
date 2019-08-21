/**********************************************************
- Autor:Augusto Nogueira Almeida
- Descriчуo: menor numero
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
int inumero1=0;
int inumero2=0;


cout<<" digite o primeiro numero";
cin>> inumero1;

cout<<" digite o segundo numero";
cin>> inumero2;

if (inumero1<inumero2)
    {
        cout<< "O menor numero é" << inumero1
         << endl;
    }
    else if (inumero1>inumero2)
    {
        cout<< "O menor numero é" << inumero2
         << endl;
    }
else if (inumero1=inumero2)
    {
        cout<< "Os numeros são iguais"
         << endl;
    }

}
