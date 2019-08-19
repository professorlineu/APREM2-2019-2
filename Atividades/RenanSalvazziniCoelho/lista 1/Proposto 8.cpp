/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Proposto 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int ipesoKg = 0;
    int ipesoGramas= 1000;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite seu peso em quilos: ";
    cin >> ipesoKg;

    cout << " seu peso é  "
         << ipesoKg * ipesoGramas
         << " gramas"

         << endl;
    return 0;
}
