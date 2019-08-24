#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fSalario1 = 0;
    float fSalario2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " calcule quantos salários mínimos você ganha.\n";

    cout << "Digite  valor do salário mínimo:";
    cin >> fSalario1;

    cout << "Digite o valor do seu salário: ";
    cin >> fSalario2;

    float fSalario3 = fSalario2/fSalario1;

    cout << "Você ganha " << fSalario3 << " salário mínimo.";

    return 0;
}
