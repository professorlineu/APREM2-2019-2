/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição: Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
//declarando variaveis

float fpreco, fnovo, fcent;

cout << "Qual o valor do produto?" << endl;
cin >> fpreco;
cout << "Voce recebeu 10% de desconto, o valor a ser pago em reais e:" << endl;
fnovo = 0.9*fpreco;
cout << "\n" << fnovo << endl;
}
