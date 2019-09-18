//***********************************************
//Nome: Isabela ap de souza
//Descrição: Exercicio 11 -  L4
//***********************************************

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
    int i = 0; // controla o laço
    int iVet [5];
    int iSoma = 0;

    setlocale(LC_ALL,"");
    system ("Color F8");

    for (i=0; i<5; i+=1)
    {
    cout << "Digite o " << i+1 << "° numero: ";
    cin  >> iVet[i];

    //cout << iVet [i] <<"\t";
    iSoma = iSoma + iVet[i];
    }
    cout << "\n\n Os numeros digitados foram: " << iSoma << endl;
}

