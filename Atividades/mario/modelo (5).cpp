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
    int inumero1=0;
    int inumero2=0;
    int isubtracao=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "escolha o primeiro numero";
cin >> inumero1;
cout << "escolha o segundo numero";
cin >> inumero2;
isubtracao = inumero1 - inumero2;
cout << "resultado " << isubtracao;


    return 0;
}
