/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iidade = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite a sua idade: ";

    cin  >> iidade;

    if (iidade >= 18)
    {

        cout << "você é maior de idade"
             << endl;

    }

    else
    {
        cout << "você é menor de idade"
             << endl;

    }

    return 0;
}
