/**********************************************************
- Autor:     Milene Caroline Dias
- Descrição: Maior numero
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


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color E1");

    cout << " Digite um numero: ";
    cin >> inumero1;

    cout << " Digite outro numero: ";
    cin >> inumero2;

    if (inumero1<inumero2)
    {
        cout<<" numero "<< inumero1 <<" é menor que o " <<inumero2;
    }

    if (inumero1>inumero2)
    {
        cout<<" numero "<< inumero2 <<" é menor que o " <<inumero1;
    }
    }
