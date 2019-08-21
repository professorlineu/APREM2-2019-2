/**********************************************************
- Autor:     Vandelei Natanael
- Descrição: salário mínimo
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float ifunc = 0;
    float ivezes = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "qual o salário do funcionário? ";
    cin >> ifunc;

    ivezes = ifunc/998;

    cout << "esse funcionário ganha " << ivezes << " vezes um salário mínimo atual";
    //Código do programa



    return 0;

}
