/**********************************************************
- Autor:     Yasmin Sena
- Descrição: salário menor que 500... Aumento de 30%
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fsalario = 0;
    float faumento = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor do seu salário: ";
    cin >> fsalario;

    faumento = (1.3 * fsalario);

    if (fsalario < 500)
    {
        cout << "Você recebeu um aumento de 30%, seu salário será de "
        << faumento
        <<" reais.=)"
        << endl;
    }

    else
    {
        cout << "Seu salário permanece o mesmo." << endl;
    }

    return 0;
}
