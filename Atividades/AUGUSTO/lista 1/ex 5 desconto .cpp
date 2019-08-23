/**********************************************************
- Autor:AUGUSTO
- Descricao:desconto
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaracao de variaveis
float FValor1=0;



    //Configuração da tela de saida
    setlocale(LC_ALL,"");
    system("color F1");

    //Codigo do programa
cout<< "digite o preço";
cin>>FValor1;
cout<<"com desconto de 10% seu produto vai custar";
cout<<FValor1-((FValor1*10)/100);





}
