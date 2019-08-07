/**********************************************************
- Autor:     Lineu Lima
- Descrição: Entrada e saída de dados
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite num1: ";
    cin >> num1;

    cout << "Digite num2: ";
    cin >> num2;


    cout << "resultado " << num1 * num2;



    return 0;
}
