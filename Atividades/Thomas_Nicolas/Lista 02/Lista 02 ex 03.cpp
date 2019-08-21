/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: Lista 02 ex 03
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

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout    <<"insira um numero: ";
    cin     >> fnum1;

    cout    <<"insira outro numero: ";
    cin     >> fnum2;

    if (fnum1<fnum2)
    {
    cout    <<"o primeiro numero é o menor"<<endl;
    }
    else if (fnum2<fnum1)
    {
    cout    <<"o segundo numero é o menor"<<endl;
    }
    else
    {
    cout    <<"ambos são iguais"<<endl;
    }

    return 0;
}
