/**********************************************************
- Autor:AUGUSTO
- Descrição:média
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float FValor1=0;
float FValor2=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout<< "digite o primero numero";
cin>>FValor1;
cout<< "digite o segundo numero";
cin>>FValor2;
cout<<(FValor1*2+FValor2*3)/5;




}
