/**********************************************************
- Autor:     Luiz Davi
- Descrição: listata 2: exercicio 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iN1 = 0;
    int iN2 = 0;
    int iN3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << endl <<"Digite o primeiro numero: ";
    cin>> iN1;

    cout << endl << "Digite o segundo numero: ";
    cin >> iN2;

    cout << endl << "Digite o terceiro numero";
    cin >> iN3;

    if (iN1>iN2&& iN1>iN3)
    {
       cout << endl << "O numero1 é menor que o numero2 e maior que o numero 3:" << endl;

    }

    if (iN2>iN1&& iN2>iN3)
    {
    cout << endl <<"O numero2 é maior que o numero1 e maior que numero 3:" << endl;
    }

    else
    {
        cout << endl <<"O numero3 é maior que o numero1 e maior que o numero2:" << endl;
    }



    return 0;
}
