/**********************************************************
- Autor:     Rarian Setoguchi

- Descrição: Teste IMC
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

    int main()
{
    //Declaração de variáveis
    float fMassa = 0;
    float fAlt = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Teste para descobrir o seu Índice de Massa Corporal (IMC).\n";

    cout << "Qual a sua massa em quilograma? ";
    cin >> fMassa;

    cout << "Qual a sua altura em metros? ";
    cin >> fAlt;

    cout << "O seu IMC é " << fMassa/(fAlt*fAlt) << ".";


    return 0;

}
