/**********************************************************
- Autor:     Ramon Macedo
- Descrição:  2. Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
■■ os números múltiplos de 2;
■■ os números múltiplos de 3;
■■ os números múltiplos de 2 e de 3.
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0; // controla o laço

    int vet[7]; // declaração de vetor de 7 posições

    int icont2 = 0;

    int icont3 = 0;

    int icont2e3 = 0;


    // entrada de dados

  cout << "Programa que mostra os multiplos de 2, 3 e simulteneamente 2 e 3  ";


  for(i=0;i<7;i++)
  {
    cout << "\n\ndigite o " << i+1 <<" numero: ";

    cin >> vet[i];

  }
 system("cls");
   cout << "numeros escolhidos: "<<endl;
  for (i=0;i<7;i++)
  {

      cout<<vet[i]<< "\t";


      if(vet[i] % 2 == 0)
      {
       icont2++;
      }
      if(vet[i] % 3 == 0)
      {
          icont3++;
      }
      if(vet[i] % 2==0 && vet[i] % 3==0)
      {
          icont2e3++;
      }
  }
      cout <<"\n\n\nnumero de numeros multiplos de 2 ="<< icont2<<endl;
      cout << "\n\nnos multiplos de 2 sao: ";
      for (i=0;i<7;i++)
      {
      if (vet[i] % 2==0)
      {


        cout<<"\t" <<vet[i];
      }
      }
      cout<<"\n\n\n numero de numeros multiplos de 3 sao: "<< icont3;
      cout<< "\n\n os multiplos de 3 sao: ";
      for (i=0;i<7;i++)
      {
          if(vet[i]% 3==0)
          {
              cout<<"\t" <<vet[i];
          }
      }
      cout<<"\n\n\nnumero de numeros mltiplos de 2 e 3 = "<< icont2e3;
      cout<< "\n\nnumeros multiplos de 2 e 3: ";
      for(i=0;i<7;i++)
      {
          if(vet[i] % 2 ==0 && vet[i]% 3==0)
          {
              cout<<"\t"<<vet[i];
          }
      }

    return 0;
}



