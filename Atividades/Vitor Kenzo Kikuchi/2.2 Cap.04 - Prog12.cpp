/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 15 - Este programa calcula seu saldo depois de pagar suas contas.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fNum1 = 0;

float fNum2 = 0;

float fNum3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 5D");

    //Código do programa
cout << "Digite um número qualquer: ";
cin  >> fNum1;

cout << "Digite o segundo número: ";
cin  >> fNum2;

cout << "Digite o terceiro número: ";
cin >> fNum3;

if (fNum1 > fNum2 && fNum2 > fNum3)
{
cout << fNum1
     << " é o maior número!"
     << endl;
}
else if (fNum2 > fNum1 && fNum1 > fNum3)
{
cout << fNum2
     << " é o maior número!"
     << endl;
}
else
{
cout << fNum3
     << " é o maior número!"
     << endl;
}

 return 0;
}
