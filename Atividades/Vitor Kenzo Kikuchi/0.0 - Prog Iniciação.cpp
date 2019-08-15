/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Primeiro programa desenvolvido. Calcula o preço com desconto.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fPreco = 0;
float fDesconto = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Digite o preço do produto: ";
cin >> fPreco;

cout << "Digite o desconto: ";
cin >> fDesconto;

cout << "O valor do produto com desconto é de "
     << fPreco - fDesconto
     << " reais."
     << endl;


    return 0;
}
