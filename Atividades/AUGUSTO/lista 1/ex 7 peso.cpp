/**********************************************************
- Autor:AUGUSTO
- Descrição:peso
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
cout<< "digite seu peso ";
cin>>FValor1;
cout<< "se você engordar 15% seu peso será de ";
cout<<FValor1+((FValor1*15)/100)<<"Kg";
cout<< "se você emagrecer 20% seu peso será de ";
cout<<FValor1-((FValor1*20)/100)<<"Kg";



}
