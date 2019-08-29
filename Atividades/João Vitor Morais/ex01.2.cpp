/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fn1 = 0;
    float fn2 = 0;
    float fn3 = 0;
    float fn4 = 0;
    float fmed = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite a primeira nota: ";

    cin >> fn1;

    cout << "digite a segunda nota: ";

    cin >> fn2;

    cout << "digite a terceira nota: ";

    cin >> fn3;


    cout << "digite a quarta nota: ";

    cin >> fn4;

    fmed = (fn1 + fn2 + fn3 + fn4)/4;

    if (fmed >= 7)
    {
        cout << "Essa é a sua nota final: "
             << fmed
             << ". Você esta aprovado!!"
             << endl;

    }

    else
    {
        cout << "Essa é a sua nota final: "
             << fmed
             << ". Você esta reprovado!!"
             << endl;



    }

    return 0;
}
