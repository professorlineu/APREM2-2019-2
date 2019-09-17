/**********************************************************
- Autor:      Nicolas Veneziani
- Descrição:  Exercício 1 da lista 4.
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0; 
    int vet[6] =  {1, 2, 3, 4, 5, 6};  
    int iPar = 0; 
    int iImpar = 0;
    int iContPar = 0;
    int iContImpar = 0;


    cout << "\nElementos do vetor: " << endl;
    
    for (i = 0; i < 6; i++)
    {
        cout << vet[i] << "\t";


       
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
