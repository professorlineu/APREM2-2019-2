/**********************************************************
- Autor:     Mario Neto
- Descrição: massa corporal.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variávei
float fbasemaior=0;
float fbasemenor=0;
float faltura=0;
float farea=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 5D");

    //Código do programa
    cout << " digite a base maior ";
    cin >> fbasemaior;
    cout << " digite a base menor ";
    cin >> fbasemenor;
    cout << " digite a altura ";
    cin >> faltura;

    farea= (fbasemaior + fbasemenor)*faltura/ 2;
    cout << "a area do trapezio é " << farea << endl;

    return 0;

}





