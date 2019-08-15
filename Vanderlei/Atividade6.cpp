/**********************************************************
- Autor:   vanderlei natanael
- Descrição: preço
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float ip = 0;
    float invp = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "digite o preço do produto: ";
    cin >> ip;

    invp = ip - (ip*0.1);

    cout << "após 10% de desconto o novo preço do produto é de " << invp << " reais.";

    return 0;
}
