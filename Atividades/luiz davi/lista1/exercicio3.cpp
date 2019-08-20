/**********************************************************
- Autor:     Luiz Davi
- Descrição: Lista 1: exercício 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNumero1 = 0;
    float fNumero2 = 0;
    float fResultado = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o primeiro número: ";
    cin >> fNumero1;

    cout << "Digite o segundo número: ";
    cin >> fNumero2;

    fResultado = fNumero1/fNumero2;

    cout << "O resultado da divisão dos números digitados é: " << fResultado;



    return 0;
}
