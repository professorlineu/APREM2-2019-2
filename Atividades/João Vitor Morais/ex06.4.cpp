/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
loja. Calcule e mostre:
■■ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
■■ o total das vendas de todos os vendedores;
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    //Declaração de variáveis
string snome[10];
float fvendas[10];
float fcomis[10];
float ftotal = 0;
int i = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

for (i=0; i<10; i++)
{
    cout << " Escreva o nome do " << i+1 << "° vendedor: ";
    cin  >> snome[i];
}

for (i=0; i<10; i++)
{
    cout << " Escreva o total de vendas de " << snome[i] << ": ";
    cin  >> fvendas[i];
}

for (i=0; i<10; i++)
{
    cout << " Escreva a comissão que " << snome[i] << "deve receber: ";
    cin  >> fcomis[i];
}

for (i=0; i<10; i++)
{
    cout << snome[i] << "tem comissão de: " << fvendas[i]*(fcomis[i]/100.0);
}

for (i=0; i<10; i++)
{
   ftotal = ftotal + fvendas[i];

 cout << "Somando todas as vendas, temos o valor total de: " << ftotal << " reais.";
}

    return 0;
}
