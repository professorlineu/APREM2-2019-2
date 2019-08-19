/**********************************************************
- Autor:     Ramon
- Descrição: . Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    //Declaração de variáveis

float  fcat1 = 0;

float  fcat2 = 0;

float  fhip  = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout     << "programa para calcular a hipotenusa de um triangulo retangulo"
         << endl;

cout     << "digite o cateto 1: " ;
cin      >> fcat1;

cout     << "digite o cateto 2: ";
cin      >> fcat2;

fhip = sqrt ((fcat1*fcat1) + (fcat2*fcat2));

cout  << "a hipotenusa e: "
      << fhip
      << endl;

    return 0;
}
