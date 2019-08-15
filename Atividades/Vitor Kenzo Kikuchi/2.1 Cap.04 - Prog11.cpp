/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: EX 01 - Programa que calcula a média aritmética e determina se você está aprovado ou não.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fNota1 = 0;

float fNota2 = 0;

float fNota3 = 0;

float fNota4 = 0;

float fNotaFinal = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout << "Quanto você tirou na primeira prova? ";
cin  >> fNota1;

cout << "Segunda prova? ";
cin  >> fNota2;

cout << "Terceira prova? ";
cin  >> fNota3;

cout << "E na última? ";
cin  >> fNota4;

fNotaFinal = (fNota1 + fNota2 + fNota3 + fNota4)/4;

cout << "A sua média aritmética final é "
     << fNotaFinal
     << endl;

if (fNotaFinal > 7)
{
    cout << "Você está aprovado!"
         << endl;
}

else if (fNotaFinal < 3)
{
    cout << "Quem é capaz de tirar esse tipo de nota? "
         << endl;
}
else
{
    cout << "Você está reprovado. Ou vai pra recuperação, eu não sei, sou só um programa."
         << endl;
}
    return 0;
}
