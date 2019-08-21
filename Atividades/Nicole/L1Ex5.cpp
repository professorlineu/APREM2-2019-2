/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fValOrig = 0;
    float fValDesc = 0.9;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o preço original do produto: ";
    cin >> fValOrig;

    cout << "O preço do produto com 10% de desconto é de: "
         << fValOrig * fValDesc
         << endl;

    return 0;
}
