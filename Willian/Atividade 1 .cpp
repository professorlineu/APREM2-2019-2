/**********************************************************
- Autor:     Willian
- Descrição: Entrada e saída de dados
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int inum1 = 0;
    int inum2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o 1ª numero: ";
    cin >> inum1 ;

    cout << "Digite o 2ª numero: ";
    cin >> inum2 ;


    cout << " resultado " << inum1 - inum2 ;


    return 0;
}
