/**********************************************************
- Autor:     Milene Caroline Dias
- Descrição: medias dois
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float inota1=0;
    float inota2=0;
    float imedia =0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << " Sua primeira nota: ";
    cin >> inota1;

    cout << " Sua segunda nota: ";
    cin >> inota2;

    imedia=(inota1+inota2)/2;

    if (imedia<3)
    {
        cout<<" reprovado :( ";
    }
    if (imedia>=3&&imedia<7)
    {
        cout<< " exame :| ";
    }
     if (imedia>=7)
     {
         cout<< " parabens!! :) ";
     }

}
