/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Proposto 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnumero1 = 0;
    float fnumeor2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite um número: ";
    cin >> fnumero1;

    cout << " Digite outro número: ";
    cin >> fnumeor2;


    cout << " A divião do primeiro número com o segundo é :  "
         << fnumero1 / fnumeor2


         << endl;
    return 0;
}

