/**********************************************************
- Autor:     Yasmin Sena
- Descrição: 4 notas para aprovação
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
    float fnota3 = 0;
    float fnota4 = 0;
    float fmedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite: Sua primeira nota: ";
    cin >> fnota1;

    cout << "Segunda nota: ";
    cin >> fnota2;

    cout << "Terceira nota: ";
    cin >> fnota3;

    cout << "Quarta nota: ";
    cin >> fnota4;

    fmedia = (fnota1 + fnota2 + fnota3 + fnota4) / 4;

    cout << "Sua nota final é "
         << fmedia
         << endl;

    if (fmedia < 7)
    {
        cout << "Você está reprovado!=(" << endl;
    }

    else
    {
        cout << "Você foi aprovado. Parabéns!=)" << endl;
    }

    return 0;
}
