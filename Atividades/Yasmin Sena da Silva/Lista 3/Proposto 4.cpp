/**********************************************************
- Autor:     Yasmin Sena
- Descrição: tabuada simples
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int ivalor = 0;
    int iresultado = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite um valor: ";
    cin >> ivalor;

    while (i < 11)
    {

        iresultado = i * ivalor;

        cout << ivalor <<"x" << i << "=" << iresultado << endl;
         i++;

    }


    return 0;
}
