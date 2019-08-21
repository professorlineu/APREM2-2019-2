/**********************************************************
- Autor:     ramon
- Descrição: 17. Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float  fsenha = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "programa de permissao de acesso"
      << endl;

      cout  << " digite a senha: ";
      cin   >> fsenha;

if (fsenha == 4531)
{
    cout  << "acesso permitido";
}
else
{


 cout  << " acesso negado, tente outra vez :( ";
}
    return 0;
}
