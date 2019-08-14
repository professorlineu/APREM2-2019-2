/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 13 - Este programa determina a tabuada de qualquer número fornecido.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int inumber = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Digite o número que você deseja saber a tabuada: ";
cin >> inumber;

cout << inumber
     << "x1="
     << inumber*1
     << endl;

cout << inumber
     << "x2="
     << inumber*2
     << endl;

cout << inumber
     << "x3="
     << inumber*3
     << endl;

cout << inumber
     << "x4="
     << inumber*4
     << endl;

cout << inumber
     << "x5="
     << inumber*5
     << endl;

cout << inumber
     << "x6="
     << inumber*6
     << endl;

cout << inumber
     << "x7="
     << inumber*7
     << endl;

cout << inumber
     << "x8="
     << inumber*8
     << endl;

cout << inumber
     << "x9="
     << inumber*9
     << endl;

cout << inumber
     << "x10="
     << inumber*10
     << endl;

    return 0;
}
