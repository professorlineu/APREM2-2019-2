/**********************************************************
- Autor:     Vandelei Natanael
- Descrição:
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float ipeso = 0;
    float ipesog = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Quantos quilos você pesa? ";
    cin >> ipeso;

    ipesog = ipeso*1000;

    cout << "Seu peso em gramas é: " << ipesog;
    //Código do programa



    return 0;
}
