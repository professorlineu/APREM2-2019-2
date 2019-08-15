/**********************************************************

- Autor: Gabriel Guimarães


- Descrição: Lista 1 - Exercício 7

**********************************************************/



#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()

{
    int ipeso = 0;
    int iganha = 0;
    int iperde1 = 0;
    int iperde2 = 0;

    cout << "insera seu peso:        ";
    cin >> ipeso;

    iganha = (ipeso/1500)+ ipeso;
    iperde1 =(ipeso/2000);
    iperde2 =ipeso - iperde1;

    cout << "se ganhar 15 por cento:     ";
    cout << iganha;
   cout << "se perder 20 por cento:     ";
    cout << iperde2;








}
