/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fpreco = 0;
float fdesc = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "apresente o preço do produto: ";
cin  >> fpreco;

fdesc = fpreco - 10/100*fpreco
cout << "apresente o desconto feito: ";
cin  >> fdesc;

cout << "o preço do produto com o desconto é:  "
     << fpreco - fdesc
     << endl;

    return 0;
}
