/**********************************************************
- Autor:   vanderlei natanael
- Descrição: Lista 2 - Ex 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float iNo1 = 0;
    float iNo2 = 0;
    float iNo3 = 0;
    float iNo4 = 0;
    float imedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "digite o nota 1: ";
    cin >> iNo1;

    cout << "digite o nota 2: ";
    cin >> iNo2;

    cout << "digite o nota 3: ";
    cin >> iNo3;

    cout << "digite o nota 4: ";
    cin >> iNo4;

    imedia = (iNo1+iNo2+iNo3+iNo4)/4;

    cout << "a sua nota foi de " << imedia;

    if (imedia>=7)
      cout<< ", parabéns você foi aprovado!";

    else
        cout << ", você foi reprovado!";


    return 0;
}
