/**********************************************************
- Autor:     ramon oliveira macedo
- Descrição: Programa para calcular prgresso de força.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iPesoinicial = 0;
    int iPesoatual = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "digite quanto peso esta levantando atualmente: ";
    cin >> iPesoatual;
    cout << "digite com quanto peso começou seu frango: ";
    cin >> iPesoinicial;
    cout << "resultado do seu esforço =" << iPesoatual - iPesoinicial;


    return 0;
}
