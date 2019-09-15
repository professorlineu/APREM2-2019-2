/**********************************************************
- Autor:      Leonardo Silva
- Descrição:  Vetor
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0; // controla o laço

    int vet[6]; // declaração de vetor de 5 posições

    int iSoma = 0; // soma os elementos do vetor

    int iContPar = 0; // contagem de números pares

    float fcontimpar = 0;

    float fsomaimp = 0;



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
        cout << vet[i] << "\t";

        // soma os elementos do vetor
        iSoma = iSoma + vet[i];

        // verifica existência de números pares no vetor
        if (vet[i] % 2== 0)
        {
            iContPar++;
        }

        // verifica existência de números pares no vetor
        if (vet[i] % 2 == 1)
        {
            fcontimpar++; 
        }

       // fsomaimp = (vet[i] / 2==1);


        


        
    }

    cout << "\n\nTotal = " << iSoma << endl;

    //cout << "\n\nTotal = " << iSoma << endl;



    cout << "\n\nTotal de pares = " << iContPar << 
   endl;

   cout << "\n\nTotal de impares = " << fcontimpar++<< endl;
    

    return 0;
}
