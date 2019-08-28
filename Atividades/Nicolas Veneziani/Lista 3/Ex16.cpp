/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 16 da lista 3.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    float fIdade = 0;
    float fMedia = 0;
    int iSoma = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 0");

    //Código do programa
    while (i < 6)
    {
        cout << "Digite a " << i + 1 << "ª idade: ";
        cin >> fIdade;

        iSoma = iSoma+fIdade;

        i = i + 1;
    }

    fMedia = iSoma/i;

    cout << "A média das idades é: " << fMedia;

    return 0;
}
