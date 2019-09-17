/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 7 da lista 3.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int iIdade = 0;
    int iIdade2 = 0;
    int iIdade3 = 0;
    int iIdade4 = 0;
    int iIdade5 = 0;
    int iPeso = 0;
    int iPeso2 = 0;
    int iPeso3 = 0;
    int iPeso4 = 0;
    int iPeso5 = 0;
    float fAlt = 0;
    float fAltura = 0;
    float fAltura2 = 0;
    float fAltura3 = 0;
    float fAltura4 = 0;
    float fAltura5 = 0;
    float fCont = 0;
    float fCont2 = 0;
    float fCont3 = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

        cout << "Por favor, informe a idade, o peso e a altura de 5 pessoas \n";

    while (i < 1)
    {
        cout << "Digite a idade: ";
        cin >> iIdade;

        cout << "Digite o peso: ";
        cin >> iPeso;

        cout << "Digite a altura: ";
        cin >> fAltura;
        cout << "\n\n";

        i = i + 1;

        if (iIdade > 50)
    {
        fCont = fCont + 1;
    }

    if (iIdade <= 20 && iIdade >= 10)
    {
        fCont2 = fCont2 + 1;
        fAlt = fAlt + fAltura;

    }

    if (iPeso < 40)
    {
        fCont3 = fCont3 + 1;
    }

    }

    i = 0;

    while (i < 1)
    {
        cout << "Digite a idade: ";
        cin >> iIdade2;

        cout << "Digite o peso: ";
        cin >> iPeso2;

        cout << "Digite a altura: ";
        cin >> fAltura2;
        cout << "\n\n";

        i = i + 1;

        if (iIdade2 > 50)
    {
        fCont = fCont + 1;
    }

    if (iIdade2 <= 20 && iIdade2 >= 10)
    {
        fCont2 = fCont2 + 1;
        fAlt = fAlt + fAltura2;

    }

    if (iPeso2 < 40)
    {
        fCont3 = fCont3 + 1;
    }

    }

    i = 0;

    while (i < 1)
    {
        cout << "Digite a idade: ";
        cin >> iIdade3;

        cout << "Digite o peso: ";
        cin >> iPeso3;

        cout << "Digite a altura: ";
        cin >> fAltura3;
        cout << "\n\n";

        i = i + 1;

        if (iIdade3 > 50)
    {
        fCont = fCont + 1;
    }

    if (iIdade3 <= 20 && iIdade3 >= 10)
    {
        fCont2 = fCont2 + 1;
        fAlt = fAlt + fAltura3;

    }

    if (iPeso3 < 40)
    {
        fCont3 = fCont3 + 1;
    }

    }

    i = 0;

    while (i < 1)
    {
        cout << "Digite a idade: ";
        cin >> iIdade4;

        cout << "Digite o peso: ";
        cin >> iPeso4;

        cout << "Digite a altura: ";
        cin >> fAltura4;
        cout << "\n\n";

        i = i + 1;

        if (iIdade4 > 50)
    {
        fCont = fCont + 1;
    }

    if (iIdade4 <= 20 && iIdade4 >= 10)
    {
        fCont2 = fCont2 + 1;
        fAlt = fAlt + fAltura4;

    }

    if (iPeso4 < 40)
    {
        fCont3 = fCont3 + 1;

    }

    }

    i = 0;

    while (i < 1)
    {
        cout << "Digite a idade: ";
        cin >> iIdade5;

        cout << "Digite o peso: ";
        cin >> iPeso5;

        cout << "Digite a altura: ";
        cin >> fAltura5;
        cout << "\n\n";

        i = i + 1;

        if (iIdade5 > 50)
    {
        fCont = fCont + 1;
    }

    if (iIdade5 <= 20 && iIdade5 >= 10)
    {
        fCont2 = fCont2 + 1;
        fAlt = fAlt + fAltura5;

    }

    if (iPeso5 < 40)
    {
        fCont3 = fCont3 + 1;
    }

    }





    cout << "A quantidade de pessoas com idade maior de 50 é: " << fCont << " pessoas" << endl;
    cout << "A média das alturas das pessoas entre 10 e 20 anos é: " <<  fAlt / fCont2 << endl;
    cout << "A porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas é de: " << (fCont3 / 5) * 100 << "%" << endl;



    return 0;
}
