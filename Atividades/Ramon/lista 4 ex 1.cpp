/**********************************************************
- Autor:      Ramon Macedo
- Descrição:  1. Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■■ todos os números pares;
■■ a quantidade de números pares;
■■ todos os números ímpares;
■■ a quantidade de números ímpares.
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0; // controla o laço

    int vet[6]; // declaração de vetor de 5 posições

    int iContPar = 0; // contagem de números pares

    int icontimpar = 0;


    // entrada de dados
    for (i = 0; i < 6; i++)
    {
        cout << "Valor " << i << ": ";
        cin >> vet[i];
    }


    cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 6; i++)
    {
        cout << "\n\n" << vet[i] << "\t";




        // verifica existência de números pares no vetor
        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }

        else
        {
            icontimpar++;
        }
    }
        cout << "\n\n quantidade de numeros pares = "<< iContPar;
        cout << "\n\n os numeros pares sao = ";

        for (i=0;i<6; i++)

        {
         if (vet[i] % 2 == 0)

        cout << "\t" << vet[i];
                   }
        cout << "\n\n quantidade de numeros impares = "<< icontimpar;

        cout << "\n\n os numeros impares sao = ";

        for (i=0;i<6; i++)

        {
         if (vet[i] % 2 != 0)

            cout << "\t" << vet[i];
                   }




    return 0;
}



