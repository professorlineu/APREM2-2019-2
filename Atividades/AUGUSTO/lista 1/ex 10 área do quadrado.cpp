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


    //Configuracao da tela de saida
    setlocale(LC_ALL,"");
    system("color F1");

    //Codigo do programa
cout<< "digite o tamanho do lado do quadrado ";
cin>>iValor1;
cout<<"sua area é de" ;
cout<<iValor1*iValor1<< "Ua" ;
}
