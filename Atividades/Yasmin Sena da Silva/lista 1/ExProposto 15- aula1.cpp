/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Dividas do João
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fconta1 = 0;
    float fconta2 = 0;
    float fsalario = 0;
    float fmulta = 1.02;

   //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o salário de João: ";
    cin  >> fsalario;
    cout << "Insira o valor da primeira e segunda conta respectivamente: ";
    cin  >> fconta1;
    cout << "e ";
    cin  >> fconta2;
    cout << "Sabendo que cada conta possui uma multa de 2%, resta do salário de João "
         << fsalario - ( fconta1 * fmulta ) - (fconta2 * fmulta)
         << " reais."
         << endl;


    return 0;
}
