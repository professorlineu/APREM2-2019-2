/**********************************************************
- Autor:     ramon
- Descrição: Faça um programa que receba dois números e mostre o menor
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float  fnum1 = 0;
float  fnum2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "mostra o numero menor."
      << endl;

cout  << "digite o primeiro numero: ";
cin   >> fnum1;

cout  << "digite o segundo numero: ";
cin   >> fnum2;

if (fnum1 < fnum2 )
{
    cout  << "o numero menor é:"
          << fnum1;
}

else if (fnum1 > fnum2)
{
    cout << "o numero menor é: "
         << fnum2;
}

    return 0;
}
