/**********************************************************
- Autor:     Rarian
- Descrição: Área de um trapézio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fAltura = 0;
    float fBase1 = 0;
    float fBase2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Programa para calcular a área de um trapézio.\n";

    cout << "Digite a altura do trapézio:";
    cin >> fAltura;

    cout << "Digite o comrpimento da base maior: ";
    cin >> fBase1;

    cout << "Digite o comprimento da base menor: ";
    cin >> fBase2;

    float fArea = (fBase1+fBase2)*fAltura/2;

    cout << "A área do trapézio é de " << fArea << ".";

    return 0;
}
