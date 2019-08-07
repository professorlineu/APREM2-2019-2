/**********************************************************
- Autor:     Bárbara Marques
- Descrição: Cálculo de porcentagem
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
        int iValor = 0;
        int iPorc = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

       cout << "Digite um valor: ";
       cin >> iValor;

       cout << "Digite a porcentagem (%): ";
       cin >> iPorc;

       cout << iPorc << "% de " << iValor << " vale: " << iValor * iPorc/100;



    return 0;



}
