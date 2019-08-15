/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int inu1 = 0;
int inu2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "apresente o primeiro número: ";
cin  >> inu1;

cout << "apresente o segundo número: ";
cin  >> inu2;

cout << "resultado da subtração:  "
     << inu1/inu2
     << endl;

    return 0;
}
