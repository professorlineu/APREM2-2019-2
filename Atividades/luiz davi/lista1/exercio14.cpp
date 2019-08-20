/**********************************************************
- Autor:     Luiz Davi
- Descrição: Lista 01: Exercício 14
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
   int iNascimento = 0;
   int iAnoatual = 0;
    int iAno = 0;
    int iMeses = 0;
    int iDias = 0;
    int iSemanas = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o seu ano de nascimento: ";
    cin >> iNascimento;

    cout << "Digite o ano atual: ";
    cin >> iAnoatual;

    iAno = iAnoatual-iNascimento;

    cout << "Sua idade é: " << iAno << endl;

    iMeses = iAno*12;

    cout << "Sua idade em meses é: " << iMeses << endl;

    iDias = iAno*365;

    cout << "Sua idade em dias é: " << iDias << endl;

    iSemanas = iAno*52;

    cout << "Sua idade em semana é: " << iSemanas;



    return 0;
}
