/**********************************************************
- Autor:     Thomas Nicolas
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
    float idade = 1;
    float itotal = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (idade != 0)
    {
        idade = 0;
        cout << "Digite a idade: ";
        cin >> idade;

            if (idade != 0)
               {
                i+=1;
                itotal = idade+itotal;
               }
    } //fim do while

        cout << "A média das idades é: " << (itotal3)/i;

    return 0;
} //fim do programa
