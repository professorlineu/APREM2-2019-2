/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 04 - Programa que determina a tabuada de qualquer número.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int iNumero = 0;
    int i = 1;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "\n\n     Digite o número: ";
    cin  >> iNumero;

    system("cls");

    cout <<"\n\n"
         << endl;

    while (i<11)
    {
    cout << "   " << iNumero << " x " << i << " = " << iNumero*i << endl;

    i += 1;
    }

    cout << "\n\n"
         << endl;

    return 0;
}
