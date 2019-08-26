/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 4 da lista 3.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fN1 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

        cout << "Digite o número para obter a tabuada do mesmo: ";
        cin >> fN1;

        cout << fN1 << " x 1 = " << fN1*1 << "\n";
        cout << fN1 << " x 2 = " << fN1*2 << "\n";
        cout << fN1 << " x 3 = " << fN1*3 << "\n";
        cout << fN1 << " x 4 = " << fN1*4 << "\n";
        cout << fN1 << " x 5 = " << fN1*5 << "\n";
        cout << fN1 << " x 6 = " << fN1*6 << "\n";
        cout << fN1 << " x 7 = " << fN1*7 << "\n";
        cout << fN1 << " x 8 = " << fN1*8 << "\n";
        cout << fN1 << " x 9 = " << fN1*9 << "\n";
        cout << fN1 << " x 10 = " << fN1*10 << "\n";





    return 0;
}
