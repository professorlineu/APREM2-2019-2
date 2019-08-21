//**********************************************************
//- Autor: Vanderlei Natanael
//- Descrição: 30% Salário
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
    system("color 7E");

    cout << "digite o seu salario: "<<"R$ ";
    cin  >> inumero1;

    if (inumero1<500.00&&inumero1>0)
        {cout<<"seu novo salario com o reajuste de 30% e de:"<<"R$ "<<inumero1+(inumero1*30)/100;}

    if (inumero1>=500.00)
        {cout<<"sinto em dizer que voce nao tem direito a este reajuste de 30%";}

    if (inumero1<=0)
        {cout<<"operacao invalida";}

}
