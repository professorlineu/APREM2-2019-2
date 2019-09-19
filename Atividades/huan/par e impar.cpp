/**********************************************************
- Autor:     Huan oliveira
- Descrição: par e impar
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int vet[6];
    int iContPar = 0;
    int iContImp = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
        for (i = 0; i < 6; i++)
    {
        cout << "Valor " << i << ": ";

        cin >> vet[i];
    }

    for (i = 0; i < 6; i++)
    {
        cout << vet[i]<<"\t";
        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }

        if (vet[i] % 2 != 0)
        {
            iContImp++;
        }
    }

    cout << "\n\nTotal de numeros pares: " << iContPar << endl;
    cout << "\n\nTotal de numeros ímpares: "<< iContImp << endl;
}


