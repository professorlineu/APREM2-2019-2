/**********************************************************
- Autor:     Vandelei Natanael
- Descrição: área do quadrado
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float ilado = 0;
    float iarea = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "qual o lado do quadrado? ";
    cin >> ilado;

    iarea = ilado * ilado;

    cout << "a área do quadrado é de " << iarea << " m.c.";
    //Código do programa



    return 0;

}
