/**********************************************************
- Autor: Rarian
- Descrição: Tabuada de qualquer numero
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include<stdlib.h>


using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    float fnum = 0;
    float fresul = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Programa para mostrar a tabuada de qualquer numero.";
    cout << "\nDigite o numero que deseja saber a tabuada: ";
    cin >> fnum;

    system("cls");

    while (i<=10)
    {
        fresul = fnum*i;

        cout << fnum << " x " << i << " =" << fresul << endl;
        i++;
    }
    //Fim do laco



    return 0;

}

