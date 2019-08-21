/**********************************************************
- Autor:     Rarian
- Descrição: Lista 2 ex 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fN1 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Programa para calcular o reajuste de salário.\n";

    cout << "Digite o seu salário: ";
    cin >> fN1,

   cout << "Com o seu salário ";

   if(fN1<500)
    {
        cout << " você tem o direito ao reajuste, assim o seu novo salário é de " << fN1+(fN1*30/100) << ".";
    }

    else if (fN1 >= 500)
    {
        cout << "você não tem direito ao reajuste no salário.";
    }

    return 0;
}
