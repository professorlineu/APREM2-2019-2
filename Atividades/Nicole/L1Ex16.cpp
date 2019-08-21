/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 16
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    //Declaração de variáveis
    float fCat1 = 0;
    float fCAt2 = 0;
    float fhip = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o cateto 1: ";
    cin >> fCat1;

    cout << "Digite o cateto 2: ";
    cin >> fCAt2;

    fhip = sqrt((fCat1*fCat1)+(fCAt2*fCAt2));

    cout << "A hipotenusa corresponde a:  "
         << fhip
         << " unidades de medida. "
         << endl;

    return 0;
}
