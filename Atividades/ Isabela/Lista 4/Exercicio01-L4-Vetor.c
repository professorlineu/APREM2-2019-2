//**********************************************************
// Autor:  Isabela Ap de Souza
// Descrição:  ex01 par, impar
//**********************************************************

#include <iostream>

using namespace std;

int main()
{
    int i = 0; // controla o laço
    int vet[6]; // declaração de vetor de 6 posições
    int iContPar = 0; // contagem de números pares

       cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 6; i++)
    {
        cout << vet[i] << "\t";
    }
    // verifica existência de números pares no vetor
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }
    }
    cout << "\n\nTotal de pares : " << iContPar << endl;

return 0;
}

