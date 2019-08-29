/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba tres números e mostre o maior.
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
    float fn3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite o primeiro numero: ";

    cin >> fn1;

    cout << "digite o segundo numero: ";

    cin >> fn2;

    cout << "digite o terceiro numero: ";

    cin >> fn3;

    if (fn1 > fn2 && fn1 > fn3)
    {
        cout << "O primeiro numero é maior "
             << endl;

    }

    else if (fn2 > fn1 && fn2 > fn3)
    {
        cout << "O segundo numero é maior "
             << endl;

    }

    else
    {
        cout << "o terceiro numero é o maior"
             << endl;

    }

    return 0;
}
