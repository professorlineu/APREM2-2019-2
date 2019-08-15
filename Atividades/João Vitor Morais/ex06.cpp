/**********************************************************
- Autor:     João vitor morais
- Descrição: Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fsal = 0;
float fvenda = 0;
float fcomis = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "digite o valor do seu salário: ";
cin  >> fsal;

cout << "digite o valor total das vendas: ";
cin  >> fvenda;

fcomis = fvenda*4/100;

cout << "4% de comissão sobre as vendas: "
     << fcomis
     << endl;

cout << "o valor do seu salário com comissão: "
     << fsal+fcomis
     << endl;

    return 0;
}
