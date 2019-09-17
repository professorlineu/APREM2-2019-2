/**********************************************************
- Autor:      Nicolas Veneziani
- Descrição:  Exercício 1 da lista 4.
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0; // controla o laço
    int vet[6] =  {1, 2, 3, 4, 5, 6}; // declaração de vetor de 5 posições
    int iSoma = 0; // soma os elementos do vetor
    int iPar = 0; // contagem de números pares
    int iImpar = 0;
    int iContPar = 0;
    int iContImpar = 0;


    cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 6; i++)
    {
        cout << vet[i] << "\t";


        // verifica existência de números pares no vetor
        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }
        
        else
        {
            iContImpar++;
        }
    }
    
    cout << "\n\n\nOs números pares são:  " << endl;

  for (i = 0; i < 6; i++)
  {
    if (vet[i]%2==0)
    {
       cout << vet[i] << "; ";
    }
  }
   cout << "\n\nOs números ímpares são:  " << endl;
   
  for (i = 0; i < 6; i++)
  {
       if (vet [i] % 2 != 0)
    {
        cout << vet[i] << ";";
    }
  }
  



    cout << "\n\n\nO total de números pares são:  " << iContPar << endl;


    cout << "\n\nO total de números ímpares são:  " << iContImpar << endl;





    return 0;
}
