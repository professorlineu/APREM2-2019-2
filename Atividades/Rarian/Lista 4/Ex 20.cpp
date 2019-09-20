/**********************************************************
- Autor:     Rarian
- Descrição: L4 Ex20
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    float vet[10];


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


    for (i = 0; i < 10; i++)
    {
        cout << "Digite qualquer número para o valor "<< i + 1 << ": \n";
        cin >> vet[i];
        system("cls");
    }



    for (i = 0; i < 10; i++)
    {
        if (vet[i] > 0)
        {

            cout << vet[i] << "\t";

        }
    }

    cout << "são os númeors positivos.";



    return 0;
}
