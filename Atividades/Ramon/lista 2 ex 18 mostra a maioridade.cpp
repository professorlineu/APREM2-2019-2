/**********************************************************
- Autor:     ramon
- Descrição: 18. Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float  fidad = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "programa de maioridade "
      << endl;

      cout  << " digite sua idade: ";
      cin   >> fidad;

if (fidad <= 17)
{
    cout  << "só pode beber leite :,(";
}
else
{
cout  << " ja pode beber ;) ";
}
    return 0;
}
