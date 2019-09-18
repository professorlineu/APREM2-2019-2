/**********************************************************
- Autor:      gabriel correia soares
- Descrição:  lista 4 exercicio 2
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0; // controla o laço
    int ii = 0; // controla o laço
    int ip = 0; // controla o laço
    int i23 = 0; // controla o laço
    int vet1[7]={0,0,0,0,0,0,0}; // declaração de vetor de 5 posições
    int vet2[7]={0,0,0,0,0,0,0}; // declaração de vetor de 5 posições
    int vet3[7]={0,0,0,0,0,0,0}; // declaração de vetor de 5 posições
    int vet4[7]={0,0,0,0,0,0,0}; // declaração de vetor de 5 posições
    ///int iSoma = 0; // soma os elementos do vetor
    int iContdiv2 = 0; // contagem de números pares
    int iContdiv3 = 0; // contagem de números pares
    int iContdiv23 = 0; // contagem de números pares

    for (i = 0; i < 7; i++)
        {
            cout <<"insira 7 Valores: ";
            cin >> vet1[i];
        }
    for (i = 0; i < 7; i++)
    {
         if (vet1[i] % 2 == 0 && vet1[i] % 3 != 0)
        {
            iContdiv2++;
            vet2[ip]=vet1[i];
            ip++;
        }
        if  (vet1[i] % 3 == 0 && vet1[i] % 2 != 0)
        {
            iContdiv3++;
            vet3[ii]=vet1[i];
            ii++;
        }
        if  (vet1[i] % 3 == 0 && vet1[i] % 2 == 0)
        {
            iContdiv23++;
            vet4[i23]=vet1[i];
            i23++;
        }
    }

    cout << "\n\nTotal de numeros divisiveis por 2: = " << iContdiv2 << endl;
    cout <<"numeros par:\n";
    for (i = 0; i < 7; i++)
       {
            if (vet2[i]!=0)
            {
            cout <<vet2[i] << ", ";
            }
        }
    cout << "\n\nTotal de numeros divisiveis por 3: " << iContdiv3 << endl;
    cout <<"numeros impar:\n";
    for (i = 0; i < 7; i++)
       {
            if (vet3[i]!=0)
            {
            cout <<vet3[i] << ", ";
            }
        }
    cout << "\n\nTotal de numeros divisiveis por 2 e 3: " << iContdiv23 << endl;
    ///cout <<"numeros impar:\n";
    for (i = 0; i < 7; i++)
       {
            if (vet4[i]!=0)
            {
            cout <<vet4[i] << ", ";
            }
        }

    return 0;
}
