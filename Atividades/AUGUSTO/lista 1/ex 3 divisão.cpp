/**********************************************************
- Autor:AUGUSTO
- Descricao:divisao
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaracao de variaveis
float FValor1=0;
float FValor2=0;


    //Configuracao da tela de saida
    setlocale(LC_ALL,"");
    system("color F1");

    //Codigo do programa
cout<< "digite o primero numero";
cin>>FValor1;
cout<< "digite o segundo numero";
cin>>FValor2;
cout<<FValor1/FValor2;




}
