/**********************************************************
- Autor:     clayton
- Descrição: area do losango exercicio 11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

        int idiagonalmaior = 0;
        int idiagonalmenor = 0;
        int iarea = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    cout << " digite a diagonal maior:";
    cin >> idiagonalmaior;

    cout << " digite a diagonal menor:";
    cin >> idiagonalmenor;

    iarea=(idiagonalmaior*idiagonalmenor)/2;

    cout << " a area do seu losango e:";
    cout << iarea;

    return 0;

}
