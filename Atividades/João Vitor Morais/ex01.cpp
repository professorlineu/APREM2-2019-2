/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba dois números, calcule e mostre a soma do primeiro número pelo
segundo.
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

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Digite o primeiro número: ";
    cin  >> inum1;
    
    cout << " dgite o segundo número: ";
    cin  >> inum2;
    
    cout << "resultado da soma dos numeros = " 
         << inum1 + inum2;
    
    return 0;
}
