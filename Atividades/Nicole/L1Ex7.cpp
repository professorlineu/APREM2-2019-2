/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fPeso = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Qual seu peso em Kg? ";
    cin >> fPeso;


    cout << "Se você engordar 15% ficará com "
         << fPeso * 1.15
         << " Kg.";


    cout << " Já se emagrecer 20% ficará com "
         << fPeso * 0.8
         << " Kg."
         << endl;
    return 0;
}
