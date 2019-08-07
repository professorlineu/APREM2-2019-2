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
    int n1 = 0;
    int n2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Digite o primeiro número: ";
    cin >> n1;
    cout << " dgite o segundo número: ";
    cin >> n2;
    cout << "resultado da soma dos numeros = " << n1 + n2;


    return 0;
}
