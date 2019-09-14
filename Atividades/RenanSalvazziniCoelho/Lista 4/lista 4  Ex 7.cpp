/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 4 Exercício 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0; // controla o laço
    int vet[10]; // declaração de vetor de 10 números reias
    int iContneg = 0; // contagem de números negativos
    int iContpos = 0; // soma dos números positivos

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    // entrada de dados
    for (i = 0; i < 10; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }

     cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 10; i++)
    {
        cout << vet[i] << "\t";

      // verifica existência de números netativos e contar
        if (vet[i] < 0 )
        {
            iContneg++;
        }
       // verificar existência de números positivos  e somar
        else
        {
            iContpos=iContpos + vet[i];
        }
    }
    cout << "\n\nTotal de negativos = " << iContneg << endl;
    cout << "\n\nSoma de positivos = " << iContpos << endl ;

    return 0;
}



