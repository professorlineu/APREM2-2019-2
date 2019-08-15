/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba o peso de uma pessoa, calcule e mostre:
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
float fpeso = 0;
float fpeso2 = 0;
float fpeso3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "apresente o seu peso: ";
cin  >> fpeso;

fpeso2 = fpeso + fpeso*15/100;

cout << "se a você engordar 15% do seu peso atual ficara: "
     << fpeso2
     << endl;

fpeso3 = fpeso - fpeso*20/100;

cout << "se a você emagrecer 20% do seu peso atual ficara: "
     << fpeso3
     << endl;

    return 0;
}
