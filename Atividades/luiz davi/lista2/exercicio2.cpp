/**********************************************************
- Autor:     Luiz Davi
- Descrição: listata 2: exercicio 2
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

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << endl <<"Digite o primeiro numero: ";
    cin>>iN1;

    cout << endl << "Digite o segundo numero: ";
    cin >> iN2;

    if (iN1<iN2)
    {
       cout << endl << "numero1 é menor que o numero2:" << endl;

    }

    else
    {
    cout << "numero1 é maior que o numero2:";
    }


    return 0;
}
