/**********************************************************
- Autor:     Thomas Nicolas
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
float fsalario = 0;
float fvendas = 0;
float fcomissao = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout    << "insira o seu salario: ";
    cin     >> fsalario;

    cout    << "insira o valor das suas vendas: ";
    cin     >> fvendas;

    fcomissao = fvendas*4/100;

    cout    << "o valor da sua comissão é: " << fcomissao <<endl;

    cout    << "seu salario desse mês é: " << fcomissao+fsalario;

    return 0;
}
