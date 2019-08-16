;/**********************************************************
- Autor:     ramon macedo
- Descrição:. Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float  fsalarmin = 0;
float  fsalariatu = 0;
float  fquantsal  = 0;
    //Código do programa

cout  << "calculo de quantos salarios vc ganha: "
      << endl;

cout  << "digite o salario que ganha: ";
cin   >> fsalariatu;

cout  << "digite o salario minimo atual: ";
cin   >> fsalarmin;

fquantsal = fsalariatu/ fsalarmin;


cout << "quantidade de salarios que ganha: "
     << fquantsal
     << endl;



      return 0;
}
