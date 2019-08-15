/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba três números, calcule e mostre a multiplicação desses números. 
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Digite o primeiro número: ";
    cin >> n1;
    cout << " dgite o segundo número: ";
    cin >> n2;
    cout << " digite o terceiro numero: ";
    cin >> n3;
    cout << "resultado da multiplicação dos numeros = " << n1 * n2 * n3;


    return 0;
}
