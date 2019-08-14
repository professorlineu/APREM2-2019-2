/**********************************************************
- Autor:     Vandelei Natanael
- Descrição: Multiplicação de 3 números
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    //Declaração de variáveis
    int iNumero1 = 0;
    int iNumero2 = 0;
    int iNumero3 = 0;
    int iMult = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Insira primeiro número 1: ";
    cin >> iNumero1;

    cout << "Insira primeiro número 2: ";
    cin >> iNumero2;

    cout << "Insira primeiro número 3: ";
    cin >> iNumero3;
    iMult = iNumero1 * iNumero2 * iNumero3;

    cout << "O resultado da multiplicação é: " << iMult;
    //Código do programa



    return 0;
}
