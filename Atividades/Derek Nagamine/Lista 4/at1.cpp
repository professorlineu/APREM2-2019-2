/**********************************************************
- Autor:      Lineu Lima
- Descrição:  Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
todos os números pares;
a quantidade de números pares;
todos os números ímpares;
a quantidade de números ímpares.
**********************************************************/

#include <iostream>

using namespace std;

int main()

{
int i=0,vet[i],pares=0,impares=0,qpares=0,qimpares=0,j=0,k=0;

for (i=0;i<6;i++)
{
cout << "informe o vetor " << i+1 << endl;
cin >> vet[i];
}

cout << "Os vetores sao: " << endl;

for (i=0;i<6;i++)
{
cout << vet[i] << endl;
if (vet[i]%2==0)
{
    qpares++;
}
else
{
    qimpares++;
}
}
cout << "Os vetores pares sao: " << endl;

for (i=0;i<6;i++)
{
   if (vet[i]%2==0)
   {
       cout << vet[i] << endl;
   }
}
   cout << "Os vetores impares sao: " << endl;
   for (i=0;i<6;i++)
   {
       if (vet[i]%2!=0)
        cout << vet[i] << endl;
   }
   cout << "A quantidade de vetores pares e: " << qpares << endl;
   cout << "A quantidade de vetores impares e: " << qimpares << endl;
}
