/**********************************************************
- Autor:      YASMIN SENA
- Descrição:  PROPOSTO 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>

using namespace std;

int main()
{
    int i = 0;
    int vet[6];
    int icontimpar = 0;
    int icontipar = 0;

    // entrada de dados
    for (i = 0; i < 6; i++)
    {
        cout << i+1 << " º Valor: ";
        cin >> vet[i];
    }

    cout << "\n Elementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 6; i++)
    {
        cout << vet[i] << "\t";
    }

    cout << "\n Elementos pares: \n";
    for (i = 0; i < 6; i++)
    {
       if (vet[i] % 2 == 0)
        {
            icontipar++;

            cout << vet[i] <<"\t";
        }
    }
        cout << "\n Elementos impares: \n";
        for(i = 0; i < 6; i++)
    {
        if (vet[i] % 2 != 0)
        {
            icontimpar++;
            cout << vet[i] <<"\t";
        }
    }

    cout << "\n\nTotal de impares = " << icontimpar << endl;
    cout << "\n\nTotal de pares = " << icontipar << endl;

    return 0;
}



