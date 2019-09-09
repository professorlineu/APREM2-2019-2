/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 5 da lista 3.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    //Declaração de variáveis


    int i = 1;
    int iNum0 = 0;
    int iNum1 = 1;
    int iNum2 = 2;
    int iNum3 = 3;
    int iNum4 = 4;
    int iNum5 = 5;
    int iNum6 = 6;
    int iNum7 = 7;
    int iNum8 = 8;
    int iNum9 = 9;
    int iNum10 = 10;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color B");

    //Código do programa

    while (i < 11)

         {

         cout << "Tabuada do " << i << ":" << endl << endl;

         cout << i <<" x 1 = " <<iNum1 * i << endl;

         cout << i <<" x 2 = " <<iNum2 * i  << endl;
         cout << i <<" x 3 = " <<iNum3 * i  << endl;
         cout << i <<" x 4 = " <<iNum4 * i << endl;
         cout << i <<" x 5 = " <<iNum5 * i << endl;
         cout << i <<" x 6 = " <<iNum6 * i  << endl;
         cout << i <<" x 7 = " <<iNum7 * i << endl;
         cout << i <<" x 8 = " <<iNum8 * i << endl;
         cout << i <<" x 9 = " <<iNum9 * i << endl;
         cout << i <<" x 10 = " <<iNum10 * i << endl << endl;

         i = i + 1;


         }


    cout << fixed << setprecision(2);


    return 0;
}
