/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: Lista 02 ex 17
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fsenha = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a senha: ";
    cin >> fsenha;

    if (fsenha == 5135)
        cout   <<"Acesso liberado" <<endl;

    else
        cout   <<"Acesso Negado" <<endl;

    return 0;
}
