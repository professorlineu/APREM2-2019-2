//**********************************************************
//- Autor: Gabriel Guimarães de Oliveira
//- Descrição: Lista 2 - Exercício 3
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()
{
    int in1 =0;
    int in2 =0;
    int in3 =0;

    cout<<"insira numero 1:      ";
    cin>>in1;
    cout<<"insira numero 2:      ";
    cin>>in2;
    cout<<"insira numero 3:      ";
    cin>>in3;

   if (in1 > in2 && in1>in3)
    {
   cout<<" maior"<< in1;}
  if (in2 > in3 && in2>in1)
    {
   cout<<" maior"<< in2;}
    if (in3 > in1 && in3>in2)
    {
   cout<<" maior"<< in3;}

}

