/**********************************************************
- Autor:     Nicole Oska
- Descrição: L3Ex22
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
        cout << " Qual é a idade da pessoa? ";
        cin >> fIdade;

        cout << " E a altura? ";
        cin >> fAltura;

            if (fIdade > 50)
               {
                i+=1;
                fSoma =(fAltura + fSoma);
               }
    }

        cout << "a média das alturas das pessoas com mais de 50 anos é " << (fSoma)/i << "anos";


    return 0;
}
