/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Proposto 2
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
    float fnumero3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << " Digite o valor de um primeiro número: ";
    cin >> fnumero1;

    cout << " Digite o valor do segundo número: ";
    cin >> fnumero2;

    cout << " Digite o valor do terceiro número: ";
    cin >> fnumero3;

    cout << " A multiplicação dos três numeros é: "
          << fnumero1 * fnumero2 * fnumero3
          << endl;


    return 0;
}
