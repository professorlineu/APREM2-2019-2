/**********************************************************
- Autor:      Milene Caroline Batista Dias Chaves
- Descrição:  exercicio 1
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int vet[6];
    int iContPar = 0;
    int icontImpar =0;


    // entrada de dados
    for (i = 0; i < 6; i++)
    {
        cout << "Valor " << i << ": ";
        cin >> vet[i];


        // verifica existência de números pares no vetor
        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }


        else
        {
            icontImpar++;
        }

    }

    cout << " os numeros pares sao = "  ;
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0)
        {
            cout << vet[i] << " ";
        }

    }

    cout << "\n\n os numero impares sao = " ;
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 != 0)
        {
            cout << vet[i] << " ";
        }

    }


cout << "\n\n Total de pares = " << iContPar << endl;
cout << " \n\n Total de impares = " << icontImpar << endl;
return 0;


}
