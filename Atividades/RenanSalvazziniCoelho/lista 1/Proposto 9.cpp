/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Proposto 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fbasemaior = 0;
    float fbasemenor = 0;
    float faltura = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << " Digite o valor da base maior: ";
    cin >> fbasemaior;

    cout << " Digite o valor da base menor: ";
    cin >> fbasemenor;

    cout << " Digite o valor da altura: ";
    cin >> faltura;

    cout << " Área do trapézio é: "
          << ((fbasemaior + fbasemenor) * faltura) / 2
          << " Unidades de área."
          << endl;


    return 0;
}
