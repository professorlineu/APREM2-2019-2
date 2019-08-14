/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 25 - Este programa determina o número de ingressos que você deve vender para cobrir o custo de seu evento.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fcusto=0;

float fconv=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Qual é o preço total de seu evento? ";
cin >> fcusto;

cout << "Qual é o preço de cada convite? ";
cin >> fconv;

cout << "Você terá que vender pelo menos "
     << fcusto/fconv
     << " convites para cobrir seus custos."
     << endl;

    return 0;

}
