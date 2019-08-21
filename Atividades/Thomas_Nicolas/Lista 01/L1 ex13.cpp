/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fmultiplicador = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout    <<"Digite um número:" ;
    cin     >>fmultiplicador;

    cout    << fmultiplicador <<" x 0 = " << fmultiplicador*0 <<endl;
    cout    << fmultiplicador <<" x 1 = " << fmultiplicador*1 <<endl;
    cout    << fmultiplicador <<" x 2 = " << fmultiplicador*2 <<endl;
    cout    << fmultiplicador <<" x 3 = " << fmultiplicador*3 <<endl;
    cout    << fmultiplicador <<" x 4 = " << fmultiplicador*4 <<endl;
    cout    << fmultiplicador <<" x 5 = " << fmultiplicador*5 <<endl;
    cout    << fmultiplicador <<" x 6 = " << fmultiplicador*6 <<endl;
    cout    << fmultiplicador <<" x 7 = " << fmultiplicador*7 <<endl;
    cout    << fmultiplicador <<" x 8 = " << fmultiplicador*8 <<endl;
    cout    << fmultiplicador <<" x 9 = " << fmultiplicador*9 <<endl;
    cout    << fmultiplicador <<" x 10 = " << fmultiplicador*10 <<endl;
    return 0;
}
