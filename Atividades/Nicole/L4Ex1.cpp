/**********************************************************
- Autor:      Nicole Oska
- Descrição:  L4 Ex 1
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>


using namespace std;

int main()
{
    int i = 0;

    int vet[6];

    int iContPar = 0;
    int iContImp = 0;


    // entrada de dados

    for (i = 0; i < 6; i++)
    {
        cout << " Digite o valor  " << i + 1 << ": ";
        cin >> vet[i];
    }


    for (i = 0; i < 6; i++)

    {
        if (vet[i] % 2 == 0)

        {
            iContPar++;

        }
    }
    for (i = 0; i < 6; i++)
    {

        if (vet[i] % 2 != 0)
        {
            iContImp++;

        }
    }

        cout << "\n\nTotal de pares = " << iContPar << endl;
        cout << "\n\nTotal de impares = " << iContImp << endl;

        return 0;
    }
