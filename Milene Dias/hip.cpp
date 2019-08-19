/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descrição: hipotenusa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int icateto1=0;
    int icateto2=0;
    int ihipotenusa=0;

    cout<<" insira o valor do primeiro cateto ";
    cin>>icateto1;

    cout<<" insira on valor do segundo cateto ";
    cin>>icateto2;

    ihipotenusa=pow(icateto1,2)+ pow(icateto2,2);

    cout<< "a hipotenusa vale: ";
    cout <<sqrt(ihipotenusa);




}
