/**********************************************************
- Autor:     João vitor Morais
- Descrição: Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    float fIdade = 1;
    float fAltura = 0;
    float fSoma = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (fIdade > 0)
    {
        fIdade = 0;
        cout << "digite a idade: ";
        cin >> fIdade;

        cout << "digite a altura: ";
        cin >> fAltura;

            if (fIdade > 50)
               {
                i+=1;
                fSoma =(fAltura + fSoma);
               }
    }

        cout << "a média das alturas das pessoas com mais de 50 anos é: " << (fSoma)/i;


    return 0;
}
