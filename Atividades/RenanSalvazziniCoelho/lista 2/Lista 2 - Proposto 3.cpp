/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 2 - Proposto 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnumero1 = 0;
    float fnumero2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite um número: ";
    cin >> fnumero1;
    cout << "Digite outro número: ";
    cin >> fnumero2;


    if   (fnumero1 < fnumero2)
    {
        cout << " O número  "
            << fnumero1
            << " é menor que o número "
            << fnumero2
             <<endl;
    }
    else
      {
        cout << " O número  "
            << fnumero2
            << " é menor que o número "
            << fnumero1
             <<endl;
    }
    return 0;
}


