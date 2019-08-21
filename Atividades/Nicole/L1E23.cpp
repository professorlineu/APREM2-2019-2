/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 23
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

     float fAng1 = 0;
     float fAng2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Qual o valor do primeiro ângulo? ";
    cin >> fAng1;

    cout << "E do segundo? ";
    cin >> fAng2;

    cout << "O terceiro ângulo é de "
         << 180 - (fAng1 + fAng2)
         << "°."
         << endl;


    return 0;
}
