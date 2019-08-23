/**********************************************************
- Autor:AUGUSTO
- Descricao: MUTPLICACAO DE 3 NUM
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaracao de variáveis
float FValor1=0;
float FValor2=0;
float FValor3=0;

    //Configuracao da tela de saida
    setlocale(LC_ALL,"");
    system("color F1");

    //Codigo do programa
cout<< "digite o primero numero";
cin>>FValor1;
cout<< "digite o segundo numero";
cin>>FValor2;
cout<< "digite o terceiro numero";
cin>>FValor3;
cout<< "o valor da multiplicacao =";
cout<<FValor1*FValor2*FValor3;




}
