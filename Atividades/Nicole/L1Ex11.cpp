/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fDiagMaior = 0;
    float fDiagMenor = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a diagonal maior: ";
    cin >> fDiagMaior;

    cout << "Digite a diagonal menor: ";
    cin >> fDiagMenor;


    cout << "O losango tem "
         << fDiagMaior * fDiagMenor/2
         << " unidades de área."
         << endl;


    return 0;
}
