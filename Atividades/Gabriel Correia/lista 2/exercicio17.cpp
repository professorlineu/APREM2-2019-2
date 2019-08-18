//17. Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
//programa deve mostrar uma mensagem de permissão de acesso ou não.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 2 - Exercício 17
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float inumero1 = 0;
 //   int isenha = 4531;
    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "digite a sua senha: ";
    cin  >> inumero1;
    cout << endl;

    if (inumero1==4531)
       {cout<<"acesso concediido";}
    else
        {cout<<"acesso negado";}
}
