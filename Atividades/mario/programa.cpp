/**********************************************************
- Autor:     Lineu Lima
- Descrição: Entrada e saída de dados
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int idia1, idi2, idi3, idi4, isoma;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "calculador de gatsos diario" << endl;

    cout<< "dia 1: ";
    cin >> idia1 ;
    cout<< "\n";
    cout<< "dia 2:";
    cin >> idi2 ;
    cout<< "\n";
    cout<< "dia 3:";
    cin >>  idi3;
    cout<< "\n";
    cout<< "dia 4:";
    cin >> idi4 ;
    cout << "Você gastou " <<  idia1 + idi2 + idi3 + idi4 << " reais.";


    return 0;
}
