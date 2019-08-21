/**********************************************************
- Autor: Isabela Aparecida de Souza
- Descrição: Maior idade EX18
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
    system("color F6");

    //Código do programa
    cout << "Digite sua idade: ";
    cin >> iIdade;

    cout << "Você tem " << iIdade
         << " anos de idade." << endl;

    if (iIdade < 18)
        cout << "Você é menor de idade!" << endl;

    else if (iIdade > 18)
        cout << "Você é maior de idade!" << endl;
    }
