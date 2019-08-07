#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{


    int BaseTriangulo = 0;
    int AlturaTriangulo = 0;

    cout << "CALCULAR AREA DO TRIANGULO" <<endl;
    cout << "ALTURA:";
    cin  >> AlturaTriangulo;

    cout << "BASE:";
    cin  >> BaseTriangulo;

    cout << "AREA QUE POSSUI"
         << (AlturaTriangulo*BaseTriangulo)/2
         << "U.M" << endl;



}
