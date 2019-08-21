/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: Lista 02 ex 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fnum1 = 0;
    float fnum2 = 0;
    float fnum3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout    <<"insira o primeiro numero: ";
    cin     >> fnum1;

    cout    <<"insira o segundo numero: ";
    cin     >> fnum2;

    cout    <<"insira o terceiro numero: ";
    cin     >> fnum3;

    if (fnum1>fnum2 && fnum1>fnum3)
    {
    cout    <<"o primeiro numero é o maior"<<endl;
    }
    else if(fnum2>fnum1 && fnum2>fnum3)
    {
    cout    <<"o segundo numero é o maior"<<endl;
    }
    else
    {
    cout    <<"o terceiro numero é o maior"<<endl;
    }
    return 0;
}
