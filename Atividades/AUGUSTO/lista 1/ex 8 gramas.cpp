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
cout<< "digite seu peso em Kg";
cin>>FValor1;
cout<< "seu peso em g é de ";
cout<<FValor1*1000<<"g";


}
