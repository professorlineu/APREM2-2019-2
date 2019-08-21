/**********************************************************
- Autor:     Rarian
- Descrição: Alistamento militar
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iNascimento = 0;
    int iAno1 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Programa destinado a saber se você tem que fazer alistamento militar este ano.\n";

    cout << "Digite seu ano de nascimento: ";
    cin >> iNascimento;

    cout << "Digite o ano atual: ";
    cin >> iAno1;

    int iIdade = iAno1-iNascimento;

    cout << "No seu aniversário deste ano vc terá " << iIdade << " anos.\n";

    if (iIdade < 18)
    {
        cout << "Então você não tem que fazer o alistamento militar este ano.";
    }

    else if (iIdade <= 18)
    {
        cout << "Então você deve fazer o alistamento militar este ano. ";
    }

    else if (iIdade < 200 )
    {
        cout << "Então cocê já deve ter feito  o alistamento militar.";
    }

    return 0;
}
