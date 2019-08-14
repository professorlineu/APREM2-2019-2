/**********************************************************
- Autor:     Thomas Nicolas
- Descrição:    ex 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fpeso = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout    << "insira seu peso em kilos: ";
    cin     >> fpeso;

    cout    << "seu peso em gramas: " <<fpeso*1000 <<"g";

    return 0;
}
