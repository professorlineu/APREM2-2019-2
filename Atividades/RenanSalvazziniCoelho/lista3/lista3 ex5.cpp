/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 3 Exercício 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int i0 = 0;
  int i1 = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
 while (i1 < 11)
        {
i=0;

    while (i < 11)
{

        cout << i0 ;
        cout<< "X";
        cout << i;
        cout <<"=" ;
        cout <<  i*i0 <<endl ;
        i++;

}
  i0++;
   i1++;
   cout << endl ;   }

}
