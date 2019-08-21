/**********************************************************
- Autor:     Rarian
- Descrição: Produto com desconto
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fValor = 0;
    float fDesconto = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Programa para saber o valor de um produto com desconto.\n";

    cout << "Digite o preço do produto: ";
    cin >> fValor;

    cout << "Digite apenas o número do desconto em porcentagem: ";
    cin >> fDesconto;

    cout << "O preço do produto com desconto é " << fValor-(fValor*fDesconto/100) << ".";

    return 0;
}
