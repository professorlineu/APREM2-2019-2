/**********************************************************
- Autor:     Vanderlei Natanael
- Descrição: Lista 2 - Ex 19
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    //Declaração de variáveis
    float igenero = 0;
    float ialtura = 0;
    
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F0");

    //Código do programa
    cout << "Qual é seu sexo? 1 para masculino e 2 para feminino. ";
    cin  >> igenero;

    cout << "Qual é sua altura? ";
    cin  >> ialtura;

    if (igenero == 1)
    {
    cout << "Seu peso ideal é de " << (72.7*ialtura) - 58 << " kg.";
    }

    else
    {
    cout << "Seu peso ideal é de " << (62.1*ialtura) - 44.7 << " kg.";
    }
    
    return 0;
}
