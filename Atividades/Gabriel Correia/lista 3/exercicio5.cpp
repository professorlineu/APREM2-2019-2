//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 3 - Exercício 9
//**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    char cn1;
    float fi = 0;
    int i = 0;


    while (toupper(cn1)!='N')
    {

    cout<<"\ndiga um o numero ai:                                    " <<"\n";
    cin>>fi;
    i=0;
    while (i<=10)
        {
        cout<<fi<<" x "<<i<<"="<<fi*i<<"\n";
        i++;
        }
    cout<<"\ndesejar continuar? S/N                                    " <<"\n";
    cin>>cn1;
        system("pause");
        system("cls");
        }
        }
