/**********************************************************
- Autor:  Isabela Aparecida de Souza
- Descrição: EX04 tabuada 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0;
    int iValor = 0;

    setlocale(LC_ALL,"");
    system("color F3");

    cout << "Digite um número: ";
    cin >> iValor;
    while (i < 11)
    {
        cout << iValor << " x " << i << " = " << iValor*i << endl;
        i = i + 1;
    }
    return 0;
}
