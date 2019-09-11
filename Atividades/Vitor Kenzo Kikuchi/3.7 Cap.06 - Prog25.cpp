/**********************************************************
- Autor:      Vitor Kenzo Kikuchi
- Descrição:  Exercício 01 - Programa que determina os números pares e impares entre 6 elementos.
**********************************************************/

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
    int i = 0;

    int vet[6];

    int iContPar = 0;

    int iContImpar = 0;


    setlocale (LC_ALL,"");
    system ("color F1");

    for (i = 0; i < 6; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }

    system("cls");
    cout << "\n\n\tNúmeros Pares: \n" << endl;


    for (i = 0; i < 6; i++)
    {

    if (vet[i] % 2 == 0)
    {
    cout << vet[i] << "\t";

    iContPar += 1;
    }

    }

    cout << "\n\nQuantidade de números pares: "
         << iContPar
         << endl;


    cout << "\n\n\tNúmeros impares: \n" << endl;

    for (i = 0; i < 6; i++)
    {

    if (vet[i] % 2 != 0)
    {
    cout << vet[i] << "\t";

    iContImpar += 1;
    }

    }

    cout << "\n\nQuantidade de números impares: "
         << iContImpar
         << endl;






    return 0;
}



