/**********************************************************
- Autor:     Nicole Oska
- Descrição: Distância máxima a percorrer
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fQuantLitros = 0;
    float fEfic = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Quantos litros há no tanque?  : ";
    cin >> fQuantLitros;

    cout << "Qual é a eficiência do carro em km/l?: ";
    cin >> fEfic;


    cout << "Você consegue percorrer " << fQuantLitros * fEfic
         << " km.";


    return 0;
}
