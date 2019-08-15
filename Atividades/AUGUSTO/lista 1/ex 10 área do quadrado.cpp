/**********************************************************
- Autor:AUGUSTO
- Descrição:Área
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int iValor1=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout<< "digite o tamanho do lado do quadrado ";
cin>>iValor1;
cout<<"sua área é de" ;
cout<<iValor1*iValor1<< "Ua" ;
}
