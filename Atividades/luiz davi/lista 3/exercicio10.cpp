/**********************************************************
- Autor:     Luiz Davi
- Descrição: Lista 3: Execício 10.
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
    cout << "\n\nA soma dos números pares é igual a "
     << iSomaPar
     << endl;

    cout << "\n\nA soma deos números primos é igual a "
     << iSomaPrimo
     << endl;

    return 0;
  }
