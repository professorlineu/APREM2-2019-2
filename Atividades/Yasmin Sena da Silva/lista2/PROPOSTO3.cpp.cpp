/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Menor Número
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int inumero1 = 0;
    int inumero2 = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite um número: ";
    cin >> inumero1;
    cout << "Digite outro número: ";
    cin  >> inumero2;

    if (inumero1 <inumero2)
    {
        cout << "O menor número é: "
        << inumero1
        << endl;
    }

    else
    {
       cout << "O menor número é: "
        << inumero2
        << endl;
    }

    return 0;
}
