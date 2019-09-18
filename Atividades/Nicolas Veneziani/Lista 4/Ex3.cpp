/**********************************************************
- Autor:      Nicolas Veneziani
- Descrição:  Exercício 11 da lista 4.
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int vet[10];
    int vet2[10] = {0,0,0,0,0,0,0,0,0,0};
    int vet3[10] = {0,0,0,0,0,0,0,0,0,0};
    




    cout << "\nPor favor, digite 10 numeros abaixo: " << endl;

    for (i = 0; i < 10; i++)
    {
        cin >> vet[i];

        if (vet[i] % 2 == 0)
        {
            vet2[i] = vet[i];
            
        }


        else


        {
            vet3[i] = vet[i];

        }


    }

    cout << "O vetor dos numeros pares e: \t\t ";

    for (i = 0; i < 10; i++)
    {
        cout << vet2[i] << "\t";
    }


    cout << "\n\n\nO vetor dos numeros impares e: \t\t ";

    for (i = 0; i < 10; i++)
    {
        cout << vet3[i] << "\t";
    }

    return 0;
}
