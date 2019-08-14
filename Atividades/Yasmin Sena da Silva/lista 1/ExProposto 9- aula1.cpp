/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Área de um trapézio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fBasemaior = 0;
    float fbasemenor = 0;
    float faltura = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite os valores referentes a: Base maior: ";
    cin >> fBasemaior;
    cout << "Base menor: ";
    cin >> fbasemenor;
    cout << "Altura: ";
    cin >> faltura;
    cout << "A área do trapézio descrito é "
         << ((fBasemaior + fbasemenor) * faltura) / 2
         << " unidades de àrea."
         << endl;


    return 0;
}
