/*********************************************************
 -Autor:      Vanderlei Natanael
 -Descrição:  Lista 4 - Ex 2
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 1;

    int vet[7];

    int iContD = 0;

    int iContT = 0;

    int iValorDT =0;


    for (i = 1; i < 8; i++)
    {
        cout << "Valor " << i << ": ";
        cin >> vet[i];
    }


    cout << "\nElementos do vetor: " << endl;

    for (i = 1; i < 8; i++)
    {
        cout << vet[i] << "\t";

        if (vet[i] % 2 == 0)
        {
            iContD++;
        }

        else
        {
            iContT++;
        }

    }


    cout << "\n\nMultiplos de 2: " << endl;

        for (i = 1; i < 8; i++)
        {
        if (vet[i] % 2 == 0)
        {
            cout << vet[i] << " ";
        }
        }

    cout << "\n\nMultiplos de 3: " << endl;

     for (i = 1; i < 8; i++)
        {
        if (vet[i] % 3 == 0)
        {
            cout << vet[i] << " ";
        }

        }

    cout << "\n\nMultiplos de 2 e 3: " << endl;

    for (i = 1; i < 8; i++)
        {
        if (vet[i] % 2 == 0 & vet[i] % 3 == 0)
        {
            cout << vet[i] << " ";
        }

        }

    return 0;
}
