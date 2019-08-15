/**********************************************************
- Autor:     Milene Dias
- Descrição: média ponderada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
      int imedia;
      int inumero1;
      int inumero2;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
     cout<< "inseria um número:";
     cin>> inumero1;
     cout<< "insira outo número:",
     cin>> inumero2;

     imedia=((inumero1*3)+(inumero2*4))/7;

     cout<< "sua média é:";
     cout<<imedia;

    return 0;
}
