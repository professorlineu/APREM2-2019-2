/**********************************************************
- Autor:     Rarian
- Descrição: L4 Ex7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iNeg = 0;
    float vet[10];
    float fSoma = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    for (i = 0; i < 10; i++)
    {
        cout << "Digite qualquer número para o valor "<< i + 1 << ": \n";
        cin >> vet[i];
        system("cls");
    }

    for (i = 0; i < 10; i++)
    {
        if (vet[i] < 0)
        {
            iNeg++;
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (vet[i] >= 0)
        {
            fSoma = fSoma + vet[i];
        }
    }

    cout << "Existe " << iNeg << " números negativos.\n";
    cout << "A soma dos números positivos é " << fSoma << ".";


    return 0;
}

