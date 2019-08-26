/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descrição: Tabuada 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
      int inumero=0;
      int itab=0;
      int i=0;

      while(i<100)
      {




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout<< "insira um número " ;
    cin>> inumero;

    if(inumero>=1 && inumero<=10)
    {


    cout << "tabuada do número é: " << itab << endl;

    cout << inumero <<" x 1 = " <<inumero*1 <<endl;
    cout << inumero <<" x 2 = " <<inumero*2 <<endl;
    cout << inumero <<" x 3 = " <<inumero*3 <<endl;
    cout << inumero <<" x 4 = " <<inumero*4 <<endl;
    cout << inumero <<" x 5 = " <<inumero*5 <<endl;
    cout << inumero <<" x 6 = " <<inumero*6 <<endl;
    cout << inumero <<" x 7 = " <<inumero*7 <<endl;
    cout << inumero <<" x 8 = " <<inumero*8 <<endl;
    cout << inumero <<" x 9 = " <<inumero*9 <<endl;
    cout << inumero <<" x 10 = " <<inumero*10 <<endl ;

    }

    else
        cout << " operacao invalida \n";
        i=i+10;


i=i+1;
      }




    return 0;
}
