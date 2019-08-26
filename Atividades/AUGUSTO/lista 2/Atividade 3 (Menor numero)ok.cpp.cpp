/**********************************************************
- Autor:Augusto Nogueira Almeida
- Descricao: menor numero
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
        cout<< "O menor numero e" << inumero1
         << endl;
    }
    else if (inumero1>inumero2)
    {
        cout<< "O menor numero e" << inumero2
         << endl;
    }
else if (inumero1=inumero2)
    {
        cout<< "Os numeros sao iguais"
         << endl;
    }

}
