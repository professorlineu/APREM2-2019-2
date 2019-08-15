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
int iValor2=0;
int iValor3=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout<< "digite a base maior ";
cin>>iValor1;
cout<< "digite a base menor ";
cin>>iValor2;
cout<< "digite a altura ";
cin>>iValor3;
cout<<"sua área é de";
cout<<(((iValor1+iValor2)*iValor3)/2);
}
