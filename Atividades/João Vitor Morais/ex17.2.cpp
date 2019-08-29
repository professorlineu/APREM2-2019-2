/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int isen = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite a senha: ";

    cin >> isen;

    if (isen == 4531)
    {

                 cout << "Acesso permitido"
             << endl;

             }

    else
    {
        cout << "acesso negado"
             << endl;

    }

    return 0;
}
