/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: EX 10 - Este programa calcula a soma dos números pares e primos fornecidos.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int i = 1;
int iNumero = 0;
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
cin  >> iNumero;

i += 1;

if (iNumero%2==0)
{
iSomaPar += iNumero;
}
if (!(iNumero%2==0) || iNumero == 2)
{
iSomaPrimo += iNumero;
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
