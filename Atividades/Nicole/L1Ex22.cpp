/**********************************************************
- Autor:     Nicole Oska
- Descrição: Ex 22
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

     int iNumLados = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o número de lados do polígono: ";
    cin >> iNumLados;

    cout << "O polígono tem "
         << iNumLados * ((iNumLados - 3)/2)
         << " diagonais."
         << endl;


    return 0;
}
