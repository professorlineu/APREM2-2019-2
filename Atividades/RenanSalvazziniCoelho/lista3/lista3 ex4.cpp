/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 3 Exercício 4
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

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << " digite um valor de entre 0 a 10 e saiba a tabuada:";
    cin >>  i0;

    //Código do programa
 while (i < 11)

{
        cout << i0 ;
        cout<< "X";
        cout << i;
        cout <<"=" ;
        cout <<  i*i0 <<endl ;
        i++;

}
}
