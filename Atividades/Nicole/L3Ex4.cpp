/**********************************************************
- Autor:     Nicole Oska
- Descrição:  L3 Ex 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int iNum = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Digite um número: ";
    cin >> iNum;

    while (i <= 10)

    {
        cout << iNum << " X " << i << " = " <<  i * iNum << endl;
        i++;
    }


    return 0;
}
