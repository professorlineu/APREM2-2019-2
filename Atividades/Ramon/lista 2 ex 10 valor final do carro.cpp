/**********************************************************
- Autor:     ramon
- Descrição: 10 Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float  fcuscar = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "calcula o valor final do carro"
      << endl;

cout  << "digite seu salario atual: ";
cin   >> fcuscar;

if (fcuscar <= 12000)
{

cout << "o preço final do carro foi de  "
         << fcuscar * 1.05 ;
}
else if (fcuscar > 12000 && fcuscar < 25000 )
{

cout << "o preço final do carro foi de  "
     << (fcuscar * 1.1 + fcuscar * 0.15) ;
}
else
{
    cout  << "o preço final do carro foi de  "
          << (fcuscar * 1.15 + fcuscar * 0.2) ;
}
    return 0;
}
