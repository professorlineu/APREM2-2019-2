/**********************************************************
- Autor:      Nicolas Veneziani
- Descrição:  Exercício 11 da lista 4.
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0, x = 0, y = 0;
    int vet[10];
    int vet2[10] = {0,0,0,0,0,0,0,0,0,0};
    int vet3[10] = {0,0,0,0,0,0,0,0,0,0};





    cout << "\nPor favor, digite 10 numeros abaixo: " << endl;

    for (i = 0; i < 10; i++)
    {
        cin >> vet[i];

        if (vet[i] % 2 == 0)
        {
            vet2[x] = vet[i];
            x++;

        }


        else


        {
            vet3[y] = vet[i];
            y++;
        }


    }

    cout << "\n\n\nO vetor dos numeros pares e: \t\t ";

    for (i = 0; i < 10; i++)
    {
        if (vet2[i] > 0)
        {
        cout << vet2[i] << "\t";
        }


    }
        cout << "\n\n";

    cout << "\n\n\nO vetor dos numeros impares e: \t\t ";

    for (i = 0; i < 10; i++)
    {
        if (vet3[i] > 0)
        {
        cout << vet3[i] << "\t";
        }
    }

        cout << "\n\n";


    return 0;
}
