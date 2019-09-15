/**********************************************************
- Autor:     João vitor Morais 
- Descrição: Programa que calcula a soma de numeros pares e primos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int i = 1;
int iNum = 0;
int iSomaPar = 0;
int iSomaPrimo = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

while (i<11)
{
    system("cls");
cout << "\n       Digite o "
     << i
     << "° número: ";
cin  >> iNum;

i += 1;

if (iNum%2==0)
{
iSomaPar += iNum;
}
if (!(iNum%2==0) || iNum == 2)
{
iSomaPrimo += iNum;
}
}
cout << "\n\nA soma de números pares é igual a "
     << iSomaPar
     << endl;

cout << "\n\nA soma de números primos é igual a "
     << iSomaPrimo
     << endl;

    return 0;
}
