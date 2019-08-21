/**********************************************************
- Autor: Nicole Ooka
- Descrição: Exercício 19
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float  fAlt = 0;
int    iSex = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout  << " Se você for mulher digite 1, já se for homem digite 2: ";
cin   >> iSex;

cout  << " Qual sua altura? ";
cin   >> fAlt;

if (iSex == 1)
    cout << " Seu peso ideal é de: "
         << (62.1 * fAlt) - 44.7
         << endl;

 else if  (iSex == 2)
    cout << " Seu peso ideal é de: "
         << (72.7 * fAlt) - 58
         << endl;
else
    {cout << " Vá a um nutricionista. "
         << endl;
}

    return 0;
}
