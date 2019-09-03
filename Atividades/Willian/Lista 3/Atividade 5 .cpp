/**********************************************************
- Autor:     Willian Paixao da Silva
- Descrição: Tabuada do 1 a 10
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
    int iNumero0 = 0;
    int iNumero1 = 1;
    int iNumero2 = 2;
    int iNumero3 = 3;
    int iNumero4 = 4;
    int iNumero5 = 5;
    int iNumero6 = 6;
    int iNumero7 = 7;
    int iNumero8 = 8;
    int iNumero9 = 9;
    int iNumero10 = 10;








    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa





         while (i < 11)
         {
              cout << "A Tabuada do " << i << endl;

         cout << i <<" * 1 = " <<iNumero1 * i << endl;

         cout << i <<" * 2 = " <<iNumero2 * i  << endl;
         cout << i <<" * 3 = " <<iNumero3 * i  << endl;
         cout << i <<" * 4 = " <<iNumero4 * i << endl;
         cout << i <<" * 5 = " <<iNumero5 * i << endl;
         cout << i <<" * 6 = " <<iNumero6 * i  << endl;
         cout << i <<" * 7 = " <<iNumero7 * i << endl;
         cout << i <<" * 8 = " <<iNumero8 * i << endl;
         cout << i <<" * 9 = " <<iNumero9 * i << endl;
         cout << i <<" * 10 = " <<iNumero10 * i << endl;

         i = i +1;


         }









    cout << fixed << setprecision(2);


    return 0;
}
