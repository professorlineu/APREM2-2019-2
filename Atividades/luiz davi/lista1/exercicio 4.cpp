/**********************************************************
- Autor:     Luiz davi
- Descrição: É um programa que receba duas notas e calcula a media ponderada entre elas.
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
    int iP1 = 2;
    int iP2 = 3;
    int iDiv = 5;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a primeira nota(peso 2): ";
    cin >> fN1;

    cout << "Digite a segunda nota(peso 3): ";
    cin >> fN2;

    cout << "A média ponderada das notas é de: ";
    cout << (fN1*2+fN2*3)/5;

    return 0;
}
