/**********************************************************
- Autor:     Vandelei Natanael
- Descrição: Salário depois das contas
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float isalario = 0;
    float iconta1 = 0;
    float iconta2 = 0;
    float ifinal = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "O salário que João recebeu foi de: ";
    cin >> isalario;

    cout << "O valor da conta 1 é: ";
    cin >> iconta1;

    cout << "O valor da conta 2 é: ";
    cin >> iconta2;

    ifinal = isalario - (iconta1+iconta1*0.02 + iconta2+iconta2*0.02);

    cout << "O salário final de João é de " << ifinal << " reais";
    //Código do programa



    return 0;

}
