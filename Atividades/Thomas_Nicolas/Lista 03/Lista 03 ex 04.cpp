/**********************************************************
- Autor:     Thomas Nicolas
- Descrição:
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

main()
{
    //Declaração das variáveis

    int i = 0;
    float fvalor = 0;

    //Configuração da tela de saída

    setlocale(LC_ALL,"");
    system("color F1");

    //código do programa

    cout << "Digite um número: ";
    cin >> fvalor;

    while (i<11)
    {
        cout << fvalor <<" X " << i <<" = " <<i*fvalor <<"\n";
        i++;
    }
}
