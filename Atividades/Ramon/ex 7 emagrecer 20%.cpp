;/**********************************************************
- Autor:     ramon macedo
- Descrição:Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float  fpesoatu = 0;
float  feng15 = 0;
float  femagre20 = 0;

    //Código do programa

cout  << "digite seu peso atual: ";
cin   >> fpesoatu;

feng15 = fpesoatu * 115/100;
femagre20 = fpesoatu * 80/100;

cout << "seu peso se engordar 15%: "
     << feng15
     << endl;

cout << "seu peso se voce emagrecer 20%: "
     << femagre20
     << endl;

      return 0;
}
