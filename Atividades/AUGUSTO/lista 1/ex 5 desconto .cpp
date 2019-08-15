/**********************************************************
- Autor:AUGUSTO
- Descrição:desconto
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
cout<< "digite o preço";
cin>>FValor1;
cout<<"com desconto de 10% seu produto vai custar";
cout<<FValor1-((FValor1*10)/100);





}
