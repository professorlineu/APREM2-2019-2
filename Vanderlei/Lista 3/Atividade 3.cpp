/**********************************************************
- Autor:     Vanderlei Natanael
- Descrição: Lista 3 - Exercício 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main ()
{
    int in = 0;
    int i = 1;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o número: ";
    cin  >> in;

    cout <<"" << endl;

    while (i<11)
    {
    cout << "   " << in << "x" << i << "=" << in*i << endl;

    i++;}

    cout << "" << endl;

    return 0;
}
