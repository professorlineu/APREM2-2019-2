//**********************************************************
//- Autor: Vanderlei Natanael
//- Descrição: Lista 2 - Ex 17
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float inumero1 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "digite a senha: ";
    cin  >> inumero1;

    if (inumero1==4531)
    
       cout << "Acesso permitido!";
       
    else
        cout << " Acesso negado, tente novamente!";
}
