/**********************************************************
- Autor:     Luiz davi
- Descrição: È um prgrama que calcula o seu peso em gramas.
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
    cout << "qual é seu peso em kg? ";
    cin >> fPeso;

    cout << "o seu peso em gramas é: ";
    cout << fPeso * 1000;


    return 0;
}
