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
int ialtura=0;
int ipeso=0;
int imc=0;

cout<< " digite sua altura - ";
cin>> ialtura;

cout<< " Digite seu peso - ";
cin>> ipeso;

imc=((ipeso))/((ialtura*ialtura));

cout<< imc;

}
