/**********************************************************
- Autor:     teste
- Descrição: 
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float flado = 0;
    float fresultado = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Lado do quadrado: ";
    cin >> flado;

    fresultado = flado * flado;

    cout << "Área do quadrado: " << fresultado;

    return 0;
}
