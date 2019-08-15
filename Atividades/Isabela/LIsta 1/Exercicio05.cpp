#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iValor = 0;
    int iTotal = 0;

    setlocale(LC_ALL,"");
    system("color 7E");


    cout << "Valor do carro: R$";
    cin  >> iValor;

    iTotal = (iValor*10)/100;
    cout << "Com 10% de desconto: R$" << iTotal ;


}

