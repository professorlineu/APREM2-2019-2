/**********************************************************
- Autor:     Vandelei Natanael
- Descrição: Tempo de vida
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float iano = 0;
    float inasc = 0;
    int ivida = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Em que ano você está? ";
    cin >> iano;

    cout << "Qual seu ano de nascimento? ";
    cin >> inasc;

    ivida = iano-inasc;

    cout << "você tem " << ivida << " anos de idade." << endl;

    cout << "você tem " << (iano-inasc)*12 << " meses vividos." << endl;

    cout << "você tem " << (iano-inasc)*52 << " semanas vividas."<< endl;

    cout << "você tem " << (iano-inasc)*365 << " dias vividos." << endl;
    //Código do programa



    return 0;

}
