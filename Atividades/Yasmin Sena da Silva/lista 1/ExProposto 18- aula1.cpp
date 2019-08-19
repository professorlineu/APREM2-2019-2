/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Conversão de temperatura
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fcelsius = 0;
    float ffahrenheit = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Insira a temperatura em graus celsius: ";
    cin  >> fcelsius;

    ffahrenheit = (180*fcelsius + 3200) /100;

    cout << "A mesma temperatura corresponde a: "
         << ffahrenheit
         << " fahrenheit"
         << endl;

    return 0;
}
