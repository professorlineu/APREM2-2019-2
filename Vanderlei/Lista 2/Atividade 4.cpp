//**********************************************************
//- Autor: Vanderlei Natanael
//- Descrição: Número menor
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int inumero1 = 0;
    int inumero2 = 0;
    
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "primeiro numero: ";
    cin  >> inumero1;
 
    cout << "segundo numero: ";
    cin  >> inumero2;
  
    
    if (inumero1>inumero2)
        cout << inumero1 <<" é maior que " <<inumero2;
        
        
    else
        cout << inumero2 <<" é maior que " <<inumero1;
        
}        
