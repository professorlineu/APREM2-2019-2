/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: Lista 02 ex 08
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int isalario = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor do seu salario: ";
    cin >> isalario;

    if (isalario<300)
        cout   <<"voce recebera um aumento de 35%, e seu salario final é: " <<isalario*1.35 <<endl;

    else
        cout   <<"voce recebera um aumento de 15%, e seu salario final é: " <<isalario*1.15 <<endl;

    return 0;
}
