/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 3 da lista 3.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iIdade1 = 0, i = 1, iSoma = 0;
    int iCont1 = 0;
    int iCont2 = 0;
    int iCont3 = 0;
    int iCont4 = 0;
    int iCont5 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 0");

    //Código do programa
    while (i < 9)
    {
        cout << "Digite a idade da " << i << "ª pessoa: ";
        cin >> iIdade1;


        if (iIdade1 <= 15)
        {
            iCont1 = iCont1 + 1;
        }

        if (iIdade1 >= 16 && iIdade1 <= 30)
        {
            iCont2 = iCont2 + 1;
        }

        if (iIdade1 >= 31 && iIdade1 <= 45)
        {
            iCont3 = iCont3 + 1;
        }

        if (iIdade1 >= 46 && iIdade1 <= 60)
        {
            iCont4 = iCont4 + 1;
        }

        if (iIdade1 > 60)
        {
            iCont5 = iCont5 + 1;
        }


            i = i + 1;

    }


            iSoma = iCont1 + iCont2 + iCont3 + iCont4 + iCont5;


    cout << "A quantidade de pessoas em cada faixa etária é: " << endl;
    cout << "1ª: " << iCont1 << endl;
    cout << "2ª: " << iCont2 << endl;
    cout << "3ª: " << iCont3 << endl;
    cout << "4ª: " << iCont4 << endl;
    cout << "5ª: " << iCont5 << endl << endl;

    cout << "A porcentagem de pessoas na primeira faixa etária em relação ao total é: ";
    cout << ((float)iCont1 / 8) * 100 << "%" << endl;

    cout << "A porcentagem de pessoas na quinta faixa etária em relação ao total é: ";
    cout << ((float)iCont5 / 8) * 100 << "%" << endl;


    return 0;
}
