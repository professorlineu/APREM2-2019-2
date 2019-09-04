/**********************************************************
- Autor:
- Descrição:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int inum = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout    <<"Digite um número:";
    cin     >>inum;

    while   (i<11)
    {
        cout <<inum <<" X " <<i <<" = " <<inum*i;
        cout << "\n";
            i+=1;
    }

    return 0;
}
