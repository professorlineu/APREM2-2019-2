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
    int inum1 = 0;
    int inum2 = 0;
    int inum3 = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Digite o primeiro número: ";
    cin  >> num1;
    
    cout << " dgite o segundo número: ";
    cin  >> num2;
    
    cout << " digite o terceiro numero: ";
    cin  >> num3;
    
    cout << "resultado da multiplicação dos numeros = " 
         << num1 * num2 * num3;
    
    return 0;
}
