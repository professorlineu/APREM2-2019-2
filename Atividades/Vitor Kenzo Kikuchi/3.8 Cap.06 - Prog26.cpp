/**********************************************************
- Autor:      Vitor Kenzo Kikuchi
- Descrição:  Exercício 11 - Programa que imprime dois vetores: um com numeros pares e outro com numeros impares.
**********************************************************/

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
    int i = 0;
    int inum[10];


    setlocale(LC_ALL,"");
    system ("Color F1");

    for (i=0; i<10; i+=1)
    {
    cout << "\nDigite o " << i+1 << "° número: ";
    cin  >> inum[i];
    }

    system("cls");

    cout << "\n\n\t\tNúmeros pares: \n" << endl;

    for (i=0; i<10; i++)
    {
        if (inum[i]%2 == 0)
        cout << inum[i] << "\t";
    }

    cout << "\n\n\t\tNúmeros impares: \n" << endl;

    for (i=0; i<10; i++)
    {
        if (inum[i]%2 != 0)
        cout << inum[i] << "\t";
    }

    cout << "\n\n" << endl;

    return 0;

}



