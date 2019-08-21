#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iDinheiro = 0;

    setlocale (LC_ALL,"");
    system("COLOR F1");

    cout << "Quantos reais você pretende levar a sua viagem R$";
    cin  >> iDinheiro;

    cout << " Com a cotação do dólar em R$4.01, você terá "
         << iDinheiro/4.01
         << " dólares.";

    cout << " Com a cotação do euro em R$4.45, você terá "
         << iDinheiro/4.45
         << " euros.";

    cout << " Com a cotação da libra estelina em R$4.86, você terá "
         << iDinheiro/4.86
         << " libras esterlina.";

}
