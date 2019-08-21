/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    //Declaração de variáveis
float fcateto1 = 0;
float fcateto2 = 0;
float fhipotenusa = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 9F");

    //Código do programa

    cout    << "insira o cateto1: ";
    cin     >> fcateto1;
    cout    << "insira o cateto2: ";
    cin     >> fcateto2;

    fhipotenusa = fcateto1*fcateto1+fcateto2*fcateto2;

    cout    << "o valor da hipotenusa: "<< sqrt(fhipotenusa)<<endl;
    return 0;
}
