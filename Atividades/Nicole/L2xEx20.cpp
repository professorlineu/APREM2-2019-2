/**********************************************************
- Autor: Nicole Ooka
- Descrição: Exercício 20
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float  fVal = 0;
int    iTipo = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout  << " Você irá investir por poupança (1) ou fundos de renda fixa (2)? ";
cin   >> iTipo;

cout  << " Quanto você vai investir? ";
cin   >> fVal;

if (iTipo == 1)
    cout << " Você terá "
         << fVal * 1.03
         << " reais após um mês."
         << endl;

 else if  (iTipo == 2)
    cout << " Você terá "
         << fVal * 1.04
         << " reais após um mês."
         << endl;
else
    {cout << "Este banco só possui 2 tipos de investimento..."
         << endl;
}

    return 0;
}
