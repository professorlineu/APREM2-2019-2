/**********************************************************
- Autor:     Thomas Nicolas
- Descrição:    lista 1 ex 6
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
