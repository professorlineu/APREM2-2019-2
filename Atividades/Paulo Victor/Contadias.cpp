/**********************************************************
- Autor: Paulo Victor Vicente Da Silva
- Descrição: Obter dias vividos durante 1 ano completo de vida
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ianosvividos = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Anos vividos: ";
    cin  >> ianosvividos;

    cout << "Dias Vividos: " << ianosvividos * 365;


    return 0;
}
