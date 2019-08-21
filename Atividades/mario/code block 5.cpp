/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float fsaldomedio=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color b0");

    //Código do programa
cout << " insira o saldo médio do último ano ";
cin >> fsaldomedio;


if ( fsaldomedio>400)
cout << " Seu crédito será de " <<(fsaldomedio*3/10)+fsaldomedio <<endl;

else if ( 400>=fsaldomedio>=300)
cout << " Seu crédito será de " << (fsaldomedio*25/100)+fsaldomedio <<endl;

else if ( 300>=fsaldomedio>=200)
cout << " Seu crédio será de " << (fsaldomedio*20/100)+fsaldomedio <<endl;

else
cout << " Seu crédito será de " << (fsaldomedio*10/100)+ fsaldomedio <<endl;


    return 0;
}
