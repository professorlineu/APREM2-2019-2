/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Emagrecer e engordar
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fpeso = 0;
    float femagrece = 0;
    float fengorda = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite seu peso em quilogramas: ";
    cin  >> fpeso;
    femagrece = 0.8 * fpeso;
    fengorda = 1.15 * fpeso;
    cout << "Caso emagreça 20% do seu peso ficará com "
         << femagrece
         << " kg, e se engordar 15%, estará com: "
         << fengorda
         << "kg."
         << endl;


    return 0;
}
