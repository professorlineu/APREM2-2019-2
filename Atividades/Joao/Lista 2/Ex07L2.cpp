  
/**********************************************************
- Autor: João Pedro Neves Baldin
- Descrição: Lista 02 - Exercício 07
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float fsalario=0;
float fsalarioreajustado=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color b0");

    //Código do programa
cout << " digite o salário do funcionário ";
cin >> fsalario;

fsalarioreajustado=fsalario*3/10;

if ( fsalario<500 )

cout << " o salário real é " << fsalarioreajustado <<endl;

else
cout << " o funcionário não tem direito a receber o benefício " <<endl;





    return 0;
}
