/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descrição: area de losango
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
int idiagonalmaior=0;
int idiagonalmenor=0;
int iarea=0;


cout<<" digite a diagonal maior:";
cin>>idiagonalmaior;

cout<<" digite a diagonal menor:";
cin>>idiagonalmenor;

iarea=(idiagonalmaior*idiagonalmenor)/2;

cout<<" a area do seu losango e:";
cout<<iarea;
}
