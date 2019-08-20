/**********************************************************
- Autor:     Luiz Davi
- Descrição: Lista 1: exercício 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float  flado = 0;
    float  farea = 0;


    //Código do programa


    cout  << "Digite o lado do quadrado: ";
    cin   >> flado;


    farea = (flado * flado);



    cout << "A area do quadrado é: "
     << farea
     << endl;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
