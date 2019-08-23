/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição:Faça um programa que receba dois números e mostre o menor.
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
float fnum1, fnum2;

cout << "Digite um numero e precione enter, depois digite outro e precione enter." << endl;
cin >> fnum1;
cin >> fnum2;
if (fnum1>fnum2)
{
cout << fnum1 << " e maior que " << fnum2;
}
else
{
cout << fnum2 << " e maior que " << fnum1;
}
}
