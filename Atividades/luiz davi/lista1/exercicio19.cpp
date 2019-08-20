/**********************************************************
- Autor:     Luiz Davi
- Descrição: É um programa que recebe duas dimensoês de um cômado , que calcula e mostra sua área metros ao quadrado.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fLado1 = 0;
    float fLado2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Para saber a potência necessária em watts no seu cômado, digite a medida em metros em um dos lados: ";
    cin >> fLado1;
    cout << "Digite a medida do outro lado: ";
    cin >> fLado2;

    cout << "A potência necessária  no seu crômado é de: ";
    cout << (fLado1*fLado2)*18;


    return 0;
}
