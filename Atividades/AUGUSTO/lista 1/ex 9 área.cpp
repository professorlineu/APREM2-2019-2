/**********************************************************
- Autor:AUGUSTO
- Descricao:area
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaracao de variaveis
int iValor1=0;
int iValor2=0;
int iValor3=0;

    //Configuracao da tela de saida
    setlocale(LC_ALL,"");
    system("color F1");

    //Codigo do programa
cout<< "digite a base maior ";
cin>>iValor1;
cout<< "digite a base menor ";
cin>>iValor2;
cout<< "digite a altura ";
cin>>iValor3;
cout<<"Area =";
cout<<(((iValor1+iValor2)*iValor3)/2);
}
