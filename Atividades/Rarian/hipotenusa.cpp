/**********************************************************
- Autor:    Rarian
- Descrição: Hipotenusa do triangulo retangulo
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    //Declaração de variáveis
    float FCatAdj = 0;
    float fCatOpos = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o cateto adjacente do triângulo retângulo: ";
    cin >> FCatAdj;

    cout << "Digite o cateto oposto do triângulo retângulo: ";
    cin >> fCatOpos;

    float fHip = (FCatAdj*FCatAdj+fCatOpos*fCatOpos);

    cout << "A hipotenusa do triângulo é de " << sqrt(fHip) << ".";



    return 0;
}
