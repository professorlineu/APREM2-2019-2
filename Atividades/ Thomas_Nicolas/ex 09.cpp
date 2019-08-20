/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: ex 09
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fbasem = 0;
    float fbaseM = 0;
    float faltura = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout    <<"insira a base menor do trapésio: ";
    cin     >> fbasem;

    cout    <<"insira a base maior do trapésio: ";
    cin     >> fbaseM;

    cout    <<"insira a altura do trapésio: ";
    cin     >> faltura;

    cout    <<"a área do trapésio é: " <<((fbaseM+fbasem)*faltura)/2;
    return 0;
}
