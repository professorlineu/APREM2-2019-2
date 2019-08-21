/**********************************************************
- Autor:     ramon
- Descrição: Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float  fnot1 = 0;
float  fnot2 = 0;
float  fmed  = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "media de duas notas que mostra se esta aprovado ou nao."
      << endl;

cout  << "digite a primeira nota: ";
cin   >> fnot1;

cout  << "digite a segunda nota: ";
cin   >> fnot2;

fmed = (fnot1 + fnot2)/2;

if (fmed < 3)
{


cout << "sua nota foi de "
     << fmed
     << ", portanto esta reprovado.";

}
else if (fmed >= 3 && fmed < 7)

{
    cout << "sua nota foi de "
         << fmed
         << ", portanto voce vai para exame.";
}
else
    cout << "sua nota foi de "
         << fmed
         << ", parabens voce foi aprovado.";

    return 0;
}
