/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: Lista 02 ex 18
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fidade = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a idade: ";
    cin >> fidade;

    if (fidade < 18)
        cout   <<"Não pode dirigir" <<endl;

    else
        cout   <<"Pode dirigir" <<endl;

    return 0;
}
