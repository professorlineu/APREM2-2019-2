/**********************************************************
- Autor:      gabriel correia soares
- Descri��o:  lista 4 exercicio
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0; // controla o la�o
    int ip = 0; // controla o la�o
    int vet1[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int vet2[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int iCont = 0; // contagem de n�meros pares
    for (i = 0; i < 15; i++)
        {
            cout <<"valor do vetor: ";
            cin >> vet1[i];
        }
    for (i = 0; i < 15; i++)
    {
         if (vet1[i] == 30)
        {
            iCont++;
            vet2[ip]=vet1[i];
            ip++;
        }
    }

    cout << "\n\nTotal = " << iCont<< endl;
    cout <<"o vetor de numeros iguais a 30:\n";
    for (i = 0; i < 15; i++)
       {
            if (vet2[i]!=0)
            {

            cout <<"posicao: "<<i<<" valor: "<<vet2[i] << ",\n";
            }
        }
}
