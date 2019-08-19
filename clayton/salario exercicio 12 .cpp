/**********************************************************
- Autor:     clayton
- Descrição: salario exercicio 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

        int isalario = 0;
        int iresultado = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


    cout << "insira seu salario:";
    cin >> isalario;

    iresultado = (isalario/1200);

    cout<< " seu salario vale " <<iresultado << " salario minimos";

    return 0;

}
