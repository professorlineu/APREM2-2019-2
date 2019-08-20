/**********************************************************
- Autor:     Luiz Davi
- Descrição: Lista 1: exercício 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float  fpreconorm = 0;
    float  fprecocomdesc = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o preço sem desconto: ";
    cin  >> fpreconorm;

    fprecocomdesc = fpreconorm - fpreconorm * 10/100;

    cout << "Preco com 10% de desconto: "
         << fprecocomdesc
         << endl;
    return 0;
}
