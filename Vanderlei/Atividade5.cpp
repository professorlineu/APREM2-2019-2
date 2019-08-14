/**********************************************************
- Autor:     Vandelei Natanael
- Descrição: Celsius para Fahrenheit
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float itempC = 0;
    float itempF = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Quantos graus em Celsius: ";
    cin >> itempC;

    itempF = 180*(32 + itempC)/100;

    cout << "A temperatura em Fahrenheit é de: " << itempF << " graus";
    //Código do programa



    return 0;
}
