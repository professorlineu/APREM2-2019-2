/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int inum = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Digite o número que você deseja saber a tabuada: ";
cin  >> inum;

cout << inum
     << "x1="
     << inum*1
     << endl;

cout << inum
     << "x2="
     << inum*2
     << endl;

cout << inum
     << "x3="
     << inum*3
     << endl;

cout << inum
     << "x4="
     << inum*4
     << endl;

cout << inum
     << "x5="
     << inum*5
     << endl;

cout << inum
     << "x6="
     << inum*6
     << endl;

cout << inum
     << "x7="
     << inum*7
     << endl;

cout << inum
     << "x8="
     << inum*8
     << endl;

cout << inum
     << "x9="
     << inum*9
     << endl;

cout << inum
     << "x10="
     << inum*10
     << endl;

    return 0;
}
