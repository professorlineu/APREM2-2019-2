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
cout<< "digite seu peso em Kg";
cin>>FValor1;
cout<< "seu peso em g e de ";
cout<<FValor1*1000<<"g";


}
