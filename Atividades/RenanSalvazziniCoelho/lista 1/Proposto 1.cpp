/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Proposto 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float falturaatual = 0;
    float falturateto = 2.8;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite sua altura: ";
    cin >> falturaatual;

    cout << " considere a altura do teto:2.8 ";


    cout << " sua altura menos a altura do teto é "
         << falturateto - falturaatual
         << " metros "

         << endl;
    return 0;
}
