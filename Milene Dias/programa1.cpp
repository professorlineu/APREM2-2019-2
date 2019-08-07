/**********************************************************
- Autor:     Milene Dias
- Descrição: resultado de soma e multiplicação 
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int inumero1 = 0;
    int inumero2 = 0;
    int inumero3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o numero 1: ";
    cin >> inumero1;

    cout << "Digite o numero 2: ";
    cin >> inumero2;

    cout << "Digite o numero 3: ";
    cin >> inumero3;


    cout << "Resultado " << inumero1 + inumero2 + inumero3<< endl;
    cout << "Resultado " << inumero1 * inumero2 * inumero3 << endl;




    return 0;
}
