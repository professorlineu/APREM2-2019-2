/**********************************************************
- Autor:     Vanderlei Natanael
- Descrição: Lista 3 - Ex 16
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
    float fidade = 0;
    float fmedia = 0;
    int isoma = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    
    while (i < 6)
    //while (isoma != 0)
    {
        cout << "Digite a " << i++ << "a idade: ";
        cin >> fidade;

        isoma = isoma + fidade;

        i++;
    }

    cout << "A média das idades é: " << fmedia = isoma/i;

    return 0;
}
