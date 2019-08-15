/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas,
 considerando peso 2 para a primeira e peso 3 para a segunda.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fnot1 = 0;
float fnot2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "apresente o primeiro número: ";
cin  >> fnot1;

cout << "apresente o segundo número: ";
cin  >> fnot2;

cout << "resultado da média ponderada:  "
     << (fnot1*2+fnot2*3)/5
     << endl;

    return 0;
}
