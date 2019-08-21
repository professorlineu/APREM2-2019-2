/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 15
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fSal = 0;
float fCont1 = 0;
float fCont2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Quanto é seu salário? ";
    cin  >> fSal;

    cout << "Qual o valor, em reais, da primeira conta a pagar? ";
    cin  >> fCont1;

    cout << "E da segundda? ";
    cin  >> fCont2;

    cout << "Restará "
         << fSal - ((fCont1 * 1.02)+ (fCont2 * 1.02))
         << " reais de seu salário."
         << endl;

    return 0;
}
