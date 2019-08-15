/**********************************************************
- Autor:     Willian
- Descrição: Aplicar desconto
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNum1 = 0;
    float fNum2 = 0.10;
    float fNum3 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Insira o Valor do Produto: ";
    cin >> fNum1 ;



     fNum3 = fNum1 * fNum2;

    cout << " O Novo Preço é R$" << fNum3;


    return 0;
}
