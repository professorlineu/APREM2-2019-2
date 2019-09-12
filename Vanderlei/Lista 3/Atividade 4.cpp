/**********************************************************
- Autor:     Vanderlei Natanael
- Descrição: Lista 3 - Ex 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iNum = 1;
    int iResult = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (iNum < 11) 
    {

        while (i < 11) 
       {
        iResult = (iNum) * i;

       cout << iNum << " x " << i << " = " << iResult << endl;

        i++;
       }
        
       cout << endl;
        iNum = iNum + 1;
        i = 0;
    }

    return 0;
}
