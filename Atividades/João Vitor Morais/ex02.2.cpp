/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem
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
    float fmed = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite a primeira nota: ";

    cin >> fn1;

    cout << "digite a segunda nota: ";

    cin >> fn2;

    fmed = (fn1 + fn2)/2;

    if (fmed < 3)
    {
        cout << "Essa é a sua nota final: "
             << fmed
             << ". Você esta reprovado!!"
             << endl;

    }

    else if (fmed < 7 && fmed >= 3)
    {
        cout << "Essa é a sua nota final: "
             << fmed
             << ". Você esta de exame!!"
             << endl;

    }
    else
    {
         cout << "Essa é a sua nota final: "
             << fmed
             << ". Você esta aprovado!!"
             << endl;

    }
    return 0;
}
