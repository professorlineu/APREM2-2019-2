/**********************************************************
- Autor:     Luiz Davi
- Descrição: Recebe dois números e faz a subtração entre eles
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iNumero1 = 0;
    int iNumero2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digete dois número:" << endl;
    cin >> iNumero1;
    cin >> iNumero2;

    cout << "A subtração entre os números é:";
     cout << iNumero1 - iNumero2;


    return 0;
}
