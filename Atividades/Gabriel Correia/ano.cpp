#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ianoatual = 0;
    int iAnona = 0;

    setlocale (LC_ALL,"");
    system("COLOR F1");

    cout << "CALCULAR AREA QUADRADO"
         << endl;
    cout << "COMPRIMENTO:";
    cin  >> ianoatual;

    cout << "ALTURA:";
    cin  >> iAnona;

    cout <<"A AREA POSSUI "
         << iAnona*ianoatual
         << " UNIDADES DE COMPRIMENTO";

}
