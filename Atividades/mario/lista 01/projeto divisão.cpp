/**********************************************************
- Autor:     Mário Neto
- Descrição: multiplicação de 3 variáveis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

int inumber1=0;
int inumber2=0;
int idivision=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout << "choose the first number ";
cin >> inumber1;
cout << " choose the second number ";
cin >> inumber2;
idivision = inumber1/inumber2;
cout << " the result is " << idivision;

    return 0;

}
