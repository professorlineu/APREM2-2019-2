/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 07 - Esse programa determina se você deve ganhar um aumento dependendo com o seu salário.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    //Declaração de variáveis
float fSalario = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Qual é o valor de seu salário? R$";
cin  >> fSalario;

if (fSalario <= 500.00)
{
cout << "Você passará a receber R$"
     << fSalario*30/100 + fSalario
     << ". Parabéns!!"
     << endl;
}

else
{
cout << "De acordo com o seu salário, você não tem direito a um aumento."
     << endl;
}

    return 0;
}
