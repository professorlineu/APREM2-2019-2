/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Reprovado, aprovado e exame
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnota1 = 0;
    float fnota2 = 0;
    float fmedia  = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite: Sua primeira nota: ";
    cin >> fnota1;

    cout << "Segunda nota: ";
    cin >> fnota2;

    fmedia = (fnota1 + fnota2) / 2;

    cout << "Sua média é "
         << fmedia
         << endl;

    if (fmedia < 3)
    {
        cout << "Você está reprovado! =(" << endl;
    }
    else if (fmedia < 7)
    {
        cout << "Você está de exame!" << endl;
    }
    else
    {
        cout << "Você está APROVADO! =)" << endl;
    }


    return 0;
}
