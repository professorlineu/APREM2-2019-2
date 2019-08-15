/**********************************************************
- Autor:     Willian
- Descrição: Calcular área de um Quadrado
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNum1 = 0;
    float fNum2 = 0;
    float fNum3 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Insira o Base em metros: ";
    cin >> fNum1 ;
    cout << "Insira a Altura em metros ";
    cin >> fNum2 ;



     fNum3 = fNum1 * fNum2;

    cout << " A área do seu quadrado é " << fNum3;
    cout << "M²" ;


    return 0;
}
