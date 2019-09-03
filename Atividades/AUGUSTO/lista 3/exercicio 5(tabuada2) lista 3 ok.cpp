/**********************************************************
- Autor:Augusto Nogueira Almeida
- Descrição: Tabuada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int i2 =1;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


while(i2<=9)
{
   while(i<=9)
   {
       i++;


       cout<< i2 <<"x"<< i<< "="<< (i*i2) <<endl;


   }

      cout<<endl<<endl;

      i2++;


    }





    return 0;

}

