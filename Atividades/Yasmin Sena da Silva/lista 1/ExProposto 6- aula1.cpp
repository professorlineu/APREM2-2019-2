/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Salário e comissão
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fsalario = 0;
    float fvendas = 0;
    float fporc = 0.04;
    float fcomissao = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite seu salário base: ";
    cin  >> fsalario;
    cout << "Insira o total obtido em suas vendas: ";
    cin  >> fvendas;

    fcomissao = fvendas * fporc;

    cout << "Sua comissão é de: "
         << fcomissao
         << " reais."
         << " E seu salário final é: "
         << fcomissao + fsalario
         << " reais."

         << endl;


    return 0;
}
