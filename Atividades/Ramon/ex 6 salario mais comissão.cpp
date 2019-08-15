;/**********************************************************
- Autor:     ramon macedo
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
float  fsalarfixo = 0;
float  fvendas = 0;
float  fcomissao = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout << "digite seu salario: ";
cin  >> fsalarfixo;

cout  << "digite o valor de suas vendas: ";
cin   >> fvendas;

fcomissao = fvendas * 4/100;


cout  << "sua comissão sobre as vendas: "
      << fcomissao
      << endl;

cout  << "seu salario final foi de: "
      << fsalarfixo + fcomissao
      << endl;

      return 0;
}
