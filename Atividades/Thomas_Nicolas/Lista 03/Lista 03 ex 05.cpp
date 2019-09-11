/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int i1 = 0;
    int i2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (i < 10)
    {
        i++;
        while (i1 < 11)
        {
            cout << "  " << i << " X " << i1 << " = " << i*i1 << "\n";
            i1++;
        }
        cout << "\n\n";
        i1 = 0;
    }

    return 0;
}
