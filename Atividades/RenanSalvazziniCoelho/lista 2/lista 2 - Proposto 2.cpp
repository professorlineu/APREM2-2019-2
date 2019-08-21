/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 2 - Proposto 2
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
    float fnotafim = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite sua primeira nota: ";
    cin >> fnota1;

    cout << "Digite sua segunda nota: ";
    cin >> fnota2;

    cout << "Digite sua terceira nota: ";
    cin >> fnota3;

    fnotafim = ( fnota1 + fnota2 + fnota3 ) / 3;

    cout << "Sua nota final é " << fnotafim
        << endl;

    if (fnotafim < 3)
    {
        cout << "Você está REPROVADO!" << endl;
    }
    else if (fnotafim < 7)
    {
        cout << "Você está de EXAME!" << endl;
    }
    else
    {
       cout << "Você está APROVADO! Parabéns..." << endl;
    }
    return 0;
}

