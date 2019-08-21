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
    int iIdade = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite a sua idade : ";
    cin >> iIdade;

    if (iIdade>=18)
    {
        cout << "Voce é maior de idade!";
    }

    else
    {
        cout << "Voce é menor de idade!";

    }





    return 0;
}
