/*********************************************************
 -Autor:      Vanderlei Natanael
 -Descrição:  Lista 4 - Ex 1
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 1; // controla o laço

    int vet[7]; // declaração de vetor de 7 posições

    int iContPar = 0; // contagem de números pares

    int iContImpar = 0;

    int iValorPar =0;

    int iValorImpar =0;

    // entrada de dados
    for (i = 1; i < 7; i++)
    {
        cout << "Valor " << i << ": ";
        cin >> vet[i];
    }


    cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 1; i < 7; i++)
    {
        cout << vet[i] << "\t";

        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }

        else
        {
            iContImpar++;
        }

    }


    cout << "\n\nTotal de pares = " << iContPar << endl;

    cout << "\n\nValor dos vetores pares: " << endl;

    for (i = 1; i < 7; i++)
        {
        if (vet[i] % 2 == 0)
        {
            cout << vet[i] << " ";
        }

        }


    cout << "\n\nTotal de impares = " << iContImpar << endl;

    cout << "\n\nValor dos vetores impares: " << endl;

    for (i = 1; i < 7; i++)
        {
        if (vet[i] % 2 != 0)
        {
            cout << vet[i] << " ";
        }

        }

    return 0;
}
