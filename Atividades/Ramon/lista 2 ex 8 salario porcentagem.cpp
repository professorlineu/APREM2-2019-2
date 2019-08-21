/**********************************************************
- Autor:     ramon
- Descrição: 8. Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

float  fsala = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "calcula o salario atual co aumento de 35% e 15%"
      << endl;

cout  << "digite seu salario atual: ";
cin   >> fsala;

if (fsala <= 300)
{


    cout << "seu salario tera um aumento de 35% e sera de: "
         << fsala* 1.35;
}
else if (fsala > 300)
{

cout << "seu salario tera um aumento de 15% e sera de:"
     << fsala * 1.15;
}
    return 0;
}
