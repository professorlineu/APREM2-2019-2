/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 4 Exercício 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0; // controla o laço
    int vet[6]; // declaração de vetor de 6 números inteiros
    int iContpares = 0; // contagem de números pares
    int iContimpares = 0; // contagem de números impares

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    // entrada de dados
    for (i = 0; i < 6; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }

     cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 6; i++)
    {
        cout << vet[i] << "\t";
    }

     // verifica existência de números pares e mostra-los
      cout << "\n\nElementos pares: ";
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0 )
        {
            cout << vet[i]<<"\t";
            iContpares++;
        }
    }
       // verificar existência de números impares e mostrá-los
       cout << "\n\nElementos impares: ";
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 != 0 )
        {
            cout << vet[i]<<"\t";
            iContimpares++;
        }
    }


    cout << "\n\nTotal de pares = " << iContpares << endl;
    cout << "\n\nSoma de positivos = " << iContimpares << endl ;

    return 0;
}
