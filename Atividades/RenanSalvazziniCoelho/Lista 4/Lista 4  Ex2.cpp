/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 4 Exercício 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0; // controla o laço
    int vet[7]; // declaração de vetor de 7 números


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    // entrada de dados
    for (i = 0; i < 7; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }

     cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 7; i++)
    {
        cout << vet[i] << "\t";
    }

     // verifica existência de números multiplos de 2
      cout << "\n\nElementos multiplos de 2: ";
    for (i = 0; i < 7; i++)
    {
        if (vet[i] % 2 == 0 )
        {
            cout << vet[i]<<"\t";
        }
    }
       // verificar existência de números multiplos de 3
       cout << "\n\nElementos multiplos de 3: ";
    for (i = 0; i < 7; i++)
    {
        if (vet[i] % 3 == 0 )
        {
            cout << vet[i]<<"\t";
        }
    }
           // verificar existência de números multiplos de 2 e 3
       cout << "\n\nElementos multiplos de 2 e 3: ";
    for (i = 0; i < 7; i++)
    {
        if (vet[i] % 3 == 0 && vet[i] % 2 == 0 )
        {
            cout << vet[i]<<"\t";
        }
    }
    return 0;
}
