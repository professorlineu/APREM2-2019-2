/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Proposto 18
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fcelsius= 0 ;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a temperatura atual em graus Celsius : ";
    cin >> fcelsius;

    cout << "A temperatura em Fahrenheit é:"
        << (180* fcelsius + 3200) / 100
        << " Graus "
         << endl;
    return 0;
}
