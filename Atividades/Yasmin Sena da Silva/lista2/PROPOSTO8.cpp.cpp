/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Aumento salarial
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fsalario = 0;
    float faumento35 = 0;
    float faumento15 = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o seu salário: ";
    cin >> fsalario;

    faumento35 = fsalario * 1.35;
    faumento15 = fsalario * 1.15;

    if (fsalario < 301)
    {
        cout << "Seu salário receberá um aumento de 35%, sendo a partir de agora "
        << faumento35
        <<" reais."
        << endl;
    }

    else
    {
        cout << "Seu salário receberá um aumento de 15%, sendo a partir de agora "
        << faumento15
        <<" reais."
        << endl;
    }

    return 0;
}
