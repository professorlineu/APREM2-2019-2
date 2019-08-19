/**********************************************************
- Autor:     Mário Neto
- Descrição: salario de joão
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float fcelcius=0;
float ffah=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 0b");

    //Código do programa

cout << " digite a temperatura em graus celcius ";
cin >> fcelcius;
ffah= 180*(fcelcius+32)/100;
cout << " sua temperatura em Fahrenheit é " << ffah;



    return 0;
}
