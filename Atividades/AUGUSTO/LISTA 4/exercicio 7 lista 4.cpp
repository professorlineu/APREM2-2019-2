/**********************************************************
- Autor: Augusto N Almeida
- Descrição: exercicio 7 lista 4
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0; // controla o laço

    int vet[10]; // declaração de vetor de 5 posições

    int iSoma = 0; // soma os elementos do vetor

    int  iContneg =0;

    int iContpos =0;



    cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 10; i++)
    {
        cout<< "valor :"<<i+1<< endl;
        cin >> vet[i];
    }

    // vetores par

 for (i = 0; i < 10; i++)
 {
     if  (vet[i]<= -1)
    {
     cout << "\nElemento negativo : \n" << vet[i] << "\t" <<endl;
    }

}

 // contagem

    for (i = 0; i < 10; i++)
    {
        if (vet[i]<= -1)
        {
            iContneg++;
        }

        if (vet[i]<= 1)
        {
            iContpos=iContpos+vet[i];
        }


    }

cout<< " numero de elementos negativos:"<<iContneg<< endl;
cout<< "soma dos elementos positivos :"<<iContpos<< endl;

    return 0;
}
