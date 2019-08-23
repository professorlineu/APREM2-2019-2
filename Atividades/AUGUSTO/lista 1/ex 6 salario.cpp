/**********************************************************
- Autor:AUGUSTO
- Descricao:salario
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variaveis
float FValor1=0;



    //Configuracao da tela de saida
    setlocale(LC_ALL,"");
    system("color F1");

    //Codigo do programa
cout<< "digite o salario ";
cin>>FValor1;
cout<< "com a bonificacao seu salario passara a ser de ";
cout<<FValor1+((FValor1*4)/100);



}
