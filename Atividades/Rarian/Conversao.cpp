/**********************************************************
- Autor:     Rarian
- Descrição: Conversão de dinheiro
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fDinheiro1 = 0;
    float fDinheiro2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor que deseja ser convertido: ";
    cin >> fDinheiro1;



    cout << "Digite a cotação atual da moeda que deseja adquirir: ";
    cin >>  fDinheiro2;



    cout << "Vale " << fDinheiro1*fDinheiro2  <<".";
    return 0;
}
