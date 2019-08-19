/**********************************************************
- Autor:     Mário Neto
- Descrição: multiplicação de 3 variáveis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

int iprecodoproduto=0;
int imultiplicao=0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout << " preço original do produto ";
cin >> iprecodoproduto;
imultiplicao = iprecodoproduto*10/100;
cout << " o preco do produto é" <<iprecodoproduto-imultiplicao;


}
