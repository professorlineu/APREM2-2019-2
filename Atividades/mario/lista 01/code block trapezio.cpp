/**********************************************************
- Autor:     Mario Neto
- Descrição: massa corporal.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variávei
float fladoquadrado;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 5D");

    //Código do programa

cout << "digite o lado do quadrado em metros  ";
cin >> fladoquadrado;

fladoquadrado = fladoquadrado*fladoquadrado;

cout << " a area do quadrado é em metros quadrados  " << fladoquadrado << endl;


    return 0;

}





