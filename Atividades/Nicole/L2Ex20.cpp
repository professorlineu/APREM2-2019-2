/**********************************************************
- Autor: Nicole Ooka
- Descrição: Exercício 20
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

int    iIdade = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout  << " Quantos anos você tem? ";
cin   >> iIdade;

if (iIdade < 5)
    cout << " Você ainda não é classificado como nadador. "
         << endl;

 else if  (iIdade <= 7)
    cout << " Nadador infantil. "
         << endl;

         else if  (iIdade <= 10)
    cout << " Nadador juvenil. "
         << endl;

         else if  (iIdade <= 15)
    cout << " Nadador adolescente. "
         << endl;
         else if  (iIdade <= 30)
    cout << " Nadador adulto. "
         << endl;
else
    {cout << " Nadador sênior. "
         << endl;
}

    return 0;
}
