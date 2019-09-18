/**********************************************************
- Autor:      YASMIN SENA
- Descrição:  PROPOSTO 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>

using namespace std;

int main()
{
    int i = 0;
    int vet[10];
    int icontarnegativo = 0;
    int isomapositivo = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    // entrada de dados
    for (i = 0; i < 10; i++)
    {
        cout << i+1 << " º Valor: ";
        cin >> vet[i];
    }

    cout << "\n Elementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 10; i++)
    {
        cout << vet[i] << "\t";
    }

    cout << "\n Quantidade de elementos negativos: \n";
    for (i = 0; i < 10; i++)
    {
       if (vet[i] < 0)
        {
            icontarnegativo++;
        }
    }
        cout << icontarnegativo;
        cout << "\n\n Soma dos elementos positivos: \n";

        for(i = 0; i < 10; i++)
    {
        if (vet[i] > -1)
        {

            isomapositivo = isomapositivo + vet[i];
        }
    }


    cout << isomapositivo << endl;

    return 0;
}



