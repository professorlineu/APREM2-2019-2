/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Entrada e saída de dados
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iano1 = 0;
    int iano2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite um ano: ";
    cin >> iano1;

    cout << "Digite outro ano: ";
    cin >> iano2;


    cout << "Resultado: " << iano1 - iano2 ;


    return 0;
}

