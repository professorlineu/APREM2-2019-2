/**********************************************************
- Autor:     Willian
- Descrição: Calcular Area de um Trapézio
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
    float fNum4 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Insira o valor da Base em maior em metros: ";
    cin >> fNum1 ;

    cout << "Insira o valor da Base em menor em metros ";
    cin >> fNum2 ;

    cout << "Insira o valor da Altura em metros ";
    cin >> fNum3 ;

   fNum4 = ((fNum1 + fNum2) * fNum3) / 2;



    cout << "A área do seu Trapézio é " << fNum4;
    cout << "M²" ;


    return 0;
}
