/**********************************************************
- Autor:AUGUSTO
- Descricao:peso
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaracao de variaveis
float FValor1=0;



    //Configuracao da tela de saida
    setlocale(LC_ALL,"");
    system("color F1");

    //Codigo do programa
cout<< "digite seu peso ";
cin>>FValor1;
cout<< "se voce engordar 15% seu peso sera de ";
cout<<FValor1+((FValor1*15)/100)<<"Kg";
cout<< "se voce emagrecer 20% seu peso sera de ";
cout<<FValor1-((FValor1*20)/100)<<"Kg";



}
