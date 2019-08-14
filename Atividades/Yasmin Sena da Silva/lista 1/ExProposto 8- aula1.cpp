/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Conversão de unidades (kg para gramas)
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int ipesoKG = 0;
    int ipesogramas = 1000;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite seu peso em quilos: ";
    cin >> ipesoKG;
    cout << "Seu peso equivale a "
         << ipesoKG * ipesogramas
         << " gramas."
         << endl;


    return 0;
}
