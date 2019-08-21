/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 25
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iHoras = 0;
    int iMin = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << " Qual a quantidade de horas? ";
    cin >> iHoras;

    cout << "Qual a quantidade de minutos? ";
    cin >> iMin;

    cout << "A hora equivale a "
         << iHoras * 60
         << " minutos. ";

    cout << "Sendo assim, o total de minutos é de "
         << (iHoras * 60) + iMin;

    cout << " Ou "
         << ((iHoras * 60) + iMin)  * 60
         << " segundos. "
         << endl;

    return 0;
}
