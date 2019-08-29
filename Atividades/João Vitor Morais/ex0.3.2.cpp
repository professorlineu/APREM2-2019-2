/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba dois números e mostre o menor.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fn1 = 0;
    float fn2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite o primeiro numero: ";

    cin >> fn1;

    cout << "digite o segundo numero: ";

    cin >> fn2;

    if (fn1 > fn2)
    {
        cout << "O segundo numero é o menor "
             << endl;

    }

    else
    {
        cout << "O primeiro numero é menor "
             << endl;

    }

    return 0;
}
