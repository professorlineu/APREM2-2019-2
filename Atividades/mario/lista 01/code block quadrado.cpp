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
float fraio=0;
float fvolumedaesfera=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 5D");

    //Código do programa

cout << "digite o valor do raio da esfera em metros ";
cin >> fraio;

fvolumedaesfera= (3*3.14*fraio*fraio*fraio)/4;

cout << "o volume da esfera é em metros cubicos " << fvolumedaesfera << endl;

    return 0;

}





