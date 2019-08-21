/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: Lista 02 ex 08
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fcusto = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o custo de fabrica: ";
    cin >> fcusto;

    if (fcusto <= 12000)
        cout   <<"O custo final do carro sera: " << fcusto*1.05 <<endl;

    else if (fcusto > 12000 && fcusto <= 25000)
        cout   <<"O custo final do carro sera: " << fcusto+fcusto*0.1+fcusto*0.15 <<endl;

    else
        cout   <<"O custo final do carro sera: " << fcusto+fcusto*0.15+fcusto*0.20 <<endl;

    return 0;
}
