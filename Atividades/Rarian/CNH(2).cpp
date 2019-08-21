/**********************************************************
- Autor:     Rarian
- Descrição: Pontos na CNH
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iPontos1 = 0;
    int iPontos2 = 0;
    int iPontos3 = 0;
    int iPontos4 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Programa para saber se sua CNH foi suspensa com a nova lei de Bolsonaro.\n";

    cout << "Digite quantas infrações leves você cometeu num período de 12 messe: ";
    cin >> iPontos1;

    cout << "Digite quantas infrações medias você cometeu num período de 12 messe: ";
    cin >> iPontos2;

    cout <<  "Digite quantas infrações graves você cometeu num período de 12 messe: ";
    cin >> iPontos3;

    cout <<  "Digite quantas infrações gravíssimas você cometeu num período de 12 messe: ";
    cin >> iPontos4;

    int iPontos5 = (iPontos1*3)+(iPontos2*4)+(iPontos3*5)+(iPontos4*7);

    cout << "Você possui " << iPontos5 << " na sua CNH.";

    if (iPontos5 < 40)
    {
        cout << " Então você não teve sua CNH suspensa e pode ter mais " << 40-iPontos5 << " pontos na CNH.";
    }

    else if (iPontos5 >= 40)
    {
        cout << " Então você teve sua CNH suspensa.";
    }

    return 0;
}
