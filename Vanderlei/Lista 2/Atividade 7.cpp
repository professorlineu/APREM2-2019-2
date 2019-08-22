/**********************************************************
- Autor:     Vanderlei Natanael
- Descrição: Reajuste Salarial
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

    cout << "Valor do salário: ";
    cin >> fsalario;

    if (fsalario >= 300)
    {
       faumento = fsalario * 1.35;

       cout << "O salário reajustado é de: " << faumento;
    }

    else
    {
        faumento = fsalario * 1.15;

        cout << "O salário reajustado é de: " << faumento;
    }


    return 0;
}
