/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 2 - Proposto 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fsalario = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite seu salário: ";
    cin >> fsalario;


    if   (fsalario < 301)
    {
        cout << "seu salário será reajustado para  "
            << fsalario * 1.35
            << " reais."
             <<endl;
    }
    else
    {
       cout << "seu salário será reajustado para  "
            << fsalario * 1.15
            << " reais."
            <<endl;
    }
    return 0;
}

