/**********************************************************
- Autor: João Pedro Neves Baldin
- Descrição: Lista 02 - Exercício 02
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

int isenha=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color b0");

    //Código do programa
cout << " Digite uma senha de 4 números ";
cin >> isenha;

if (isenha==4531)
cout << " Senha Correta " << isenha << endl;

 else
cout << " Senha inválida " << isenha << endl;


    return 0;
}
