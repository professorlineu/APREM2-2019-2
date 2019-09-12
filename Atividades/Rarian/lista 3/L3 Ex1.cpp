/**********************************************************
- Autor: Rarian
- Descrição: L3 Ex1
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    //Declaração de variáveis
    float inumero1 = 0;
    float inumero2 = 0;
    float inumero3 = 0;
    float inumero4 = 0;
    int i = 0;

    //Configuração da tela de saída

    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (i<5)
    {
        system("cls");
        cout << "Primeiro numero: ";
        cin  >> inumero1;
        cout << "Segundo numero: ";
        cin  >> inumero2;
        cout << "Terceiro numero: ";
        cin  >> inumero3;
        cout << "Quarto numero: ";
        cin  >> inumero4;

        if (inumero1>inumero2 && inumero1>inumero3 && inumero1>inumero4)
        {
            cout<<inumero1 <<" é o maior numero.\n ";
            system("pause");
        }

        if (inumero2>inumero1  && inumero2>inumero3 && inumero2>inumero4)
        {
            cout<<inumero2 <<" é o maior numero.\n ";
            system("pause");
        }

        if (inumero3>inumero2 && inumero3>inumero1 && inumero3>inumero4)
        {
            cout<<inumero3 <<" é o maior numero.\n ";
            system("pause");

        }

        if (inumero4>inumero1 && inumero4>inumero2 && inumero4>inumero3)
        {
            cout<<inumero4 <<" é o maior numero.\n ";
            system("pause");
        }
        i++;
    }
    return 0;
}
