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

float fsalariodejoao=0;
float fsalarioliquidodejoao=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout << " informe o salário de João ";
cin >> fsalariodejoao;

fsalarioliquidodejoao=fsalariodejoao*1/50;

cout << " o salário líquido de João é " << fsalariodejoao-fsalarioliquidodejoao;




    return 0;
}
