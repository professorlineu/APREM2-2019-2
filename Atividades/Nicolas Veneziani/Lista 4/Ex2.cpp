/**********************************************************
- Autor:      Nicolas Veneziani
- Descrição:  Exercício 2 da lista 4.
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0; 
    int vet[7] =  {1, 2, 3, 4, 5, 6, 7}; 
    int iMult2 = 0; 
    int iMult3 = 0;
    int iMult6 = 0;


    cout << "\nElementos do vetor: " << endl;
    
    for (i = 0; i < 7; i++)
    {
        cout << vet[i] << "\t";


        
        if (vet[i] % 2 == 0)
        {
            iMult2++;
        }
   
        if (vet[i] % 3 == 0)
        {
            iMult3++;
        }
        
        if (vet[i] % 2 == 0 && vet[i] % 3 == 0)
        {
            iMult6++;
        }    
    }
    
    cout << "\n\n\nOs números múltiplos de 2 são:  " << endl;
    cout << "1; ";

  for (i = 0; i < 7; i++)
  {
    if (vet[i] % 2 == 0)
    {
       cout << vet[i] << "; ";
    }
  }
   cout << "\n\nOs números múltiplos de 3 são:  " << endl;
   cout << "1; ";
   
  for (i = 0; i < 7; i++)
  {
       if (vet [i] % 3 == 0)
    {
        cout << vet[i] << "; ";
    }
  }
  
  cout << "\n\nOs números múltiplos de 2 e de 3 são:  " << endl;
  cout << "1; ";
  
  for (i = 0; i < 7; i++)
  {
       if (vet[i] % 2 == 0 && vet[i] % 3 == 0)
    {
        cout << vet[i] << "; ";
    }
  }
  


    return 0;
}
