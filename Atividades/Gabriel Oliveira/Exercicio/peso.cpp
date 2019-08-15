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

    cout << "insera seu peso:            ";
    cin >> ipeso;

    iganha = (ipeso*15/100)+ ipeso;
    iperde1 =ipeso-(ipeso*20/100);

    cout << "se ganhar 15%:      ";
    cout << iganha;
    cout<<endl;
   cout << "se perder 20% :      ";
    cout << iperde1;








}
