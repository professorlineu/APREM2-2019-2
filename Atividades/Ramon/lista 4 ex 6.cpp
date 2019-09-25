/**********************************************************
- Autor:      Ramon Macedo
- Descrição:  6. Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
loja. Calcule e mostre:
■■ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
■■ o total das vendas de todos os vendedores;
■■ o maior valor a receber e o nome de quem o receberá;
■■ o menor valor a receber e o nome de quem o receberá.
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int i = 0; // controla o laço

    string snome[10];
    float vet[10]; // declaração de vetor de 10 posições

    float vetc[10];

    float ftotal = 0;

    // entrada de dados


    for (i = 0; i < 10; i++)
{
    cout << "\n escreva o nome do vendedor "<< i+1<< " : ";
    cin >> snome[i];
}


    for (i = 0; i < 10; i++)
    {
        cout << "\nquantidade de vendas do vendedor " << i+1 << ": ";
        cin >> vet[i];
    }


    for (i = 0; i < 10; i++)
    {
        cout << "\n comissao do vendedor " << i+1<< ": ";
        cin >> vetc[i];
    }



system("cls");


    cout << "\nnomes dos vendedores: \n";


      for (i = 0; i < 10; i++)
      {
          cout<<snome[i]<<"\t";
      }


    cout << "\nvalor de venda vendedores: " << endl;



    for (i = 0; i < 10; i++)
    {
        cout << vet[i] << "\t";
    }


     cout<<"\ncomissao de cada vendedor: \n";
     for (i = 0; i < 10; i++)
     {
         cout<< vetc[i]<<"%"<<"\t";
     }

      cout<< "\n\nvalor da comissao de cada vendeodor\n";

      for (i = 0; i < 10; i++)
      {
          cout << snome[i]<< " = " <<"R$"<< vet[i]*(vetc[i]/100.0)<<"\t";
      }

      for (i=0; i<10; i++)
      {
          ftotal= ftotal+vet[i];
      }

      cout <<"\n\nTotal de vendas dos vendedores: "<< ftotal;


    return 0;
}



