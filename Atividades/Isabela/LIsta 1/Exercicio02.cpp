#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iNumero1 = 0;
    int iNumero2 = 0;
    int iNumero3 = 0;
    int iMultiplicacao = 0;

    setlocale (LC_ALL,"");
    system("COLOR F1");

    cout << "inserir primeiro numero ";
    cin  >> iNumero1;

    cout << "inserir segundo numero ";
    cin  >> iNumero2;

    cout << "inserir terceiro numero ";
    cin  >> iNumero3;

     iMultiplicacao = (iNumero1*iNumero2*iNumero3);
    cout << "a multiplicacao dos numeros e " << iMultiplicacao;

}
