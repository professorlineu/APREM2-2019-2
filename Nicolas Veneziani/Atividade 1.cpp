/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 1 dos propostos.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int idigito1 = 0;
    int idigito2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite um numero: ";
    cin >> idigito1;

    cout << "Digite outro numero: ";
    cin >> idigito2;


    cout << "A diferença é: " << idigito1 - idigito2 ;


    return 0;
}

