/**********************************************************
- Autor:     Vandelei Natanael
- Descrição: Divisão
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float iNumero1 = 0;
    float iNumero2 = 0;
    float iDiv = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Insira primeiro número 1: ";
    cin >> iNumero1;

    cout << "Insira primeiro número 2: ";
    cin >> iNumero2;

    iDiv = iNumero1 / iNumero2;

    cout << "O resultado da divisão é: " << iDiv;
    //Código do programa



    return 0;
}
