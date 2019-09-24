/**********************************************************
- Autor:      Nicole Oska
- Descrição:  L4 Ex 07
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0;
    int vet[6];
    int iNeg = 0;
    int iSomaP = 0;

    // entrada de dados

    for (i = 0; i < 6; i++)
    {
        cout << " Digite o valor  " << i + 1 << ": ";
        cin >> vet[i];
    }

    system("cls");

    for (i = 0; i < 6; i++)
    {
        if (vet[i] < 0)
        {
            iNeg++;
        }
    }
    cout << "\n\n Total de negativos: " << iNeg << endl;

    for (i = 0; i < 6; i++)
    {
        if (vet[i] > 0)
        {
            iSomaP += vet[i];
        }
    }

    cout << "\n\n Soma dos valores positivos: " << iSomaP << endl;

    return 0;
}
