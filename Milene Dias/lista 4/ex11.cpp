/*********************************************************
 -Autor:      Milene Caroline Batista Dias Chaves
 -Descrição:  exercicio 11
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 1;

    int vet[11];

    int ipar = 0;

    int impar = 0;

    for (i = 1; i < 11; i++)
    {
        cout << "Valor " << i << ": ";
        cin >> vet[i];
    }


    cout << "\nElementos do vetor: " << endl;

    for (i = 1; i < 11; i++)
    {
        cout << vet[i] << "\t";

        if (vet[i] % 2 == 0)
        {
            ipar++;
        }

        else
        {
            impar++;
        }

    }


    cout << "\n\nVetor par: " << endl;

        for (i = 1; i < 11; i++)
        {
        if (vet[i] % 2 == 0)
        {
            cout << vet[i] << " ";
        }
        }

    cout << "\n\nVetor Impar: " << endl;

     for (i = 1; i < 11; i++)
        {
        if (vet[i] % 2 != 0)
        {
            cout << vet[i] << " ";
        }

        }

    return 0;
}
