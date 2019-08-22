
//**********************************************************
//- Autor: Vanderlei Natanael
//- Descrição: Lista 2 - Ex 4
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int inumero1 = 0;
    int inumero2 = 0;
    int inumero3 = 0;


    setlocale(LC_ALL,"");
    system("color F1");

    cout << "primeiro numero: ";
    cin  >> inumero1;

    cout << "segundo numero: ";
    cin  >> inumero2;

    cout << "terceiro numero: ";
    cin  >> inumero3;
    

    if (inumero1>inumero2 && inumero1>inumero3)
        
        cout<<inumero1 <<" é o maior numero.";
        
    
    if (inumero2>inumero1  && inumero2>inumero3)
        
        cout<<inumero2 <<" é o maior numero.";
        
    
    if (inumero3>inumero2 && inumero3>inumero1)
        
        cout<<inumero3 <<" é o maior numero.";
}
