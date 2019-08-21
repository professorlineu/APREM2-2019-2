/**********************************************************
- Autor:     Rarian
- Descrição: Lista 2 ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

        float fN1 = 0;
        float fN2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Programa para ver qual é o menor número.\n";

    cout << "Digite qualquer múmero: ";
    cin >> fN1;

    cout << "Digite outro número: ";
    cin >> fN2;

    cout << "O mernor é o número ";

    if (fN1 < fN2)
    {
        cout << fN1 << ".";
    }

    else if (fN2 < fN1)
    {
        cout << fN2 << ".";
    }

    return 0;
}
