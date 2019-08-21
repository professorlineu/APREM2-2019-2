//**********************************************************
//- Autor:
//- Descrição: Maior numero EX04
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iNumero1 = 0;
    int iNumero2 = 0;
    int iNumero3 = 0;


    setlocale(LC_ALL,"");
    system("color F6");

    cout << "Insira o primeiro numero: ";
    cin  >> iNumero1;
    cout << endl;
    cout << "Inserir segundo numero: ";
    cin  >> iNumero2;
    cout << endl;
    cout << "Inserir terceiro numero: ";
    cin  >> iNumero3;
    cout << endl;

    if (iNumero1>iNumero2 && iNumero1>iNumero3)
        {cout << iNumero1 <<" é o maior numero. ";}
    if (iNumero2>iNumero1  && iNumero2>iNumero3)
        {cout << iNumero2 <<" é o maior numero. ";}
    if (iNumero3>iNumero2 && iNumero3>iNumero1)
        {cout << iNumero3 <<" é o maior numero. ";}
}
