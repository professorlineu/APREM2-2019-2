/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 2 - Proposto 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fsaldo = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //CÃ³digo do programa
    cout << "Digite seu saldo médio do último ano: ";
    cin >> fsaldo;

    cout << "Seu saldo médio foi de: "
         << fsaldo
         << " reais .   " ;

    if (fsaldo < 201)
    {
        cout << "Você terá um crédito de 10 porcento, sendo esse  "
            << fsaldo * 0.1
            << " reais "
        << endl;
    }
    else if (fsaldo < 301)
    {
        cout << "Você terá um crédito de 20 porcento, sendo esse  "
            << fsaldo * 0.2
            << " reais "
        << endl;
    }
    else if (fsaldo < 401)
    {
        cout << "Você terá um crédito de 25 porcento, sendo esse  "
            << fsaldo * 0.25
            << " reais "
        << endl;
    }
    else
    {
       cout << "Você terá um crédito de 30, sendo esse "
           << fsaldo * 0.30
           << " reais "
       << endl;
    }
    return 0;
}



