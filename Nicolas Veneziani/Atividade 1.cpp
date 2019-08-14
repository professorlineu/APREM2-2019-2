/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Entrada e saída de dados (exercício de subtração)
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int idigito1 = 0;
    int idigito = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite um numero: ";
    cin >> idigito1;

    cout << "Digite outro numero: ";
    cin >> idigito2;


    cout << "Resultado: " << idigito1 - idigito2 ;


    return 0;
}

