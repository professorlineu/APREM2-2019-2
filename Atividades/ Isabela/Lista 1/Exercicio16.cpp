#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    int iCatAdj = 0 ;
    int iCatOpos = 0 ;
    int iHip = 0 ;



    setlocale(LC_ALL,"");
    system("color 7E");


    cout << " Inserir o valor do cateto adjacente do triangulo retangulo: ";
    cin  >> iCatAdj;

    cout << " Inserir o valor do cateto oposto ao triangulo retangulo: ";
    cin  >> iCatOpos ;

    iHip = (iCatAdj * iCatAdj + iCatOpos * iCatOpos );

    cout << " A hipotenusa do triangulo é " << iHip << " . " ;


}
