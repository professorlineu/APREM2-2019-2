/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 19 - Este programa determina qual deve ser seu peso ideal.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fheight = 0;
float fgender = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F0");

    //Código do programa
cout << "Qual é seu sexo? Digite 1 para masculino e 2 para feminino. ";
cin  >> fgender;

cout << "Qual é sua altura? ";
cin  >> fheight;

if (fgender == 1)
{
cout << "Seu peso ideal é de "
     << (72.7*fheight) - 58
     << " kg."
     << endl;
}
else
{
cout << "Seu peso ideal é de "
     << (62.1*fheight) - 44.7
     << " kg."
     << endl;
}
    return 0;
}
