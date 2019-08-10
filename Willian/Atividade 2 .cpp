/**********************************************************
- Autor:     Willian
- Descrição: Multiplicação de 3 números
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
    int inum3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o 1ª número: ";
    cin >> inum1 ;

    cout << "Digite o 2ª número: ";
    cin >> inum2 ;

    cout << "Digite o 3ª número: ";
    cin >> inum3 ;


    cout << " resultado " << inum1 * inum2 * inum3;


    return 0;
}
