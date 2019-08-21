/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 2 - Proposto 7
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


    if   (fsalario < 500)
    {
        cout << "seu salário aumentará para  "
            << fsalario * 1.3
            << " reais."
             <<endl;
    }
    else
    {
       cout << "seu salário não terá aumento!"
            <<endl;
    }
    return 0;
}


