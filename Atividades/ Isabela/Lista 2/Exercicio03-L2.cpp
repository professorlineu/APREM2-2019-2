/**********************************************************
- Autor: Isabela Aparecida de Souza
- Descrição: Menor numero Ex03
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iNumero1 = 0;
    int iNumero2 = 0;

    setlocale(LC_ALL,"");
    system("color F6");

    cout << "Inserir primeiro numero: ";
    cin  >> iNumero1;
    cout << "Inserir segundo numero: ";
    cin  >> iNumero2;

    if (iNumero1>iNumero2)
        cout << iNumero1 <<" eh maior que " <<iNumero2;
    else
        cout << iNumero2 <<" eh maior que " <<iNumero1;
}
