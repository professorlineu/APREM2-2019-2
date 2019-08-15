/**********************************************************
- Autor:AUGUSTO
- Descrição:sálario
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float FValor1=0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout<< "digite o salario ";
cin>>FValor1;
cout<< "com a bonificação seu salario é de ";
cout<<FValor1+((FValor1*4)/100);



}
