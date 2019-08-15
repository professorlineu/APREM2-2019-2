/**********************************************************
- Autor:     Willian
- Descrição: Salário do João
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
    float fNum5 = 0;
    float fNum6 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Insira o valor do salário: ";
    cin >> fNum1;


    cout << "Insira o valor da 1ª Conta ";
    cin >> fNum2;

    fNum5 = fNum2 * 0.02;



    cout << "Insira o valor da 2ª Conta ";
    cin >> fNum3 ;

    fNum6 = fNum3 * 0.02;

   fNum4 = fNum1 - ((fNum5 + fNum2)+(fNum6 + fNum2));



    cout << "Você tem R$" << fNum4;


    return 0;
}
