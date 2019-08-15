/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descrição: Fahrenheit
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
int itemperatura=0;
int ifahre;

cout<<" digite a temperaturam em graus Celsius: ";
cin>> itemperatura;

ifahre=180*(itemperatura+32)/100;

cout<<"a temperatura em Fahrenheit e: ";
cout<<ifahre;

}
