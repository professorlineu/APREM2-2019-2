/**********************************************************
- Autor: Gabriel Guimarães
- Descrição: Lista 1 - Exercício 1
**********************************************************/



#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int in1 = 0;
    int in2 = 0;
    int isubtracao = 0;

  setlocale(LC_ALL,"");

    cout << "primeiro numero:      ";
    cin >> in1;
    cout << "segundo numero:       ";
    cin >> in2;
    isubtracao = in1-in2;
    cout << "Resultado:            ";

    cout << isubtracao;

}
