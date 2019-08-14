/**********************************************************
- Autor:     Willian
- Descrição: Subtração de Números
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iNum1 = 0;
    int iNum2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o 1ª Número: ";
    cin >> iNum1 ;

    cout << "Digite o 2ª Número: ";
    cin >> iNum2 ;


    cout << " Resultado " << iNum1 - iNum2 ;


    return 0;
}
