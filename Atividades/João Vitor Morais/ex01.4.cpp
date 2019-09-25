/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■■ todos os números pares;
■■ a quantidade de números pares;
■■ todos os números ímpares;
■■ a quantidade de números ímpares.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    //Declaração de variáveis

int i = 0;
int vet[6];
int iContPar = 0;
int iContImpar = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

for (i = 0; i < 6; i++)
{
    cout << "Valor " << i+1 << ": ";
    cin >> vet[i];
}
for (i = 0; i < 6; i++)
{
   if (vet[i] % 2 == 0)
    {
        iContPar++;
    }

   else
    {
        iContImpar++;
    }
}
   cout << "Quantidade de numeros pares: " << iContPar;

   cout << "\n\nOs numeros pares sao: ";

for (i=0;i<6; i++)
{
   if (vet[i] % 2 == 0)

   cout << "\t" << vet[i];
                   }
   cout << "\n\nQuantidade de numeros impares = "<< iContImpar;

   cout << "\n\nOs numeros impares sao = ";

for (i=0;i<6; i++)
{
   if (vet[i] % 2 != 0)

   cout << "\t" << vet[i];
}

     return 0;
}
