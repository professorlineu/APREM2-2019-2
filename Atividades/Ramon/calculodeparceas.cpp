/**********************************************************
- Autor:     Ramon Macedo
- Descrição: calculo do valor final das parcelas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iValorparcela = 0;
    int iNumdeparcelas = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor das parcelas: ";
    cin >> iValorparcela;

    cout << "Digite quantidade de parcelas: ";
    cin >> iNumdeparcelas;


    cout << "Você pagará no fim "
         << iValorparcela * iNumdeparcelas
         << " reais."
         << endl;


    return 0;
}
