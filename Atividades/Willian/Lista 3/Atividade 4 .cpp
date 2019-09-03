/**********************************************************
- Autor:     Willian Paixao da Silva
- Descrição: Tabuada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iNumero0 = 0;
    int iNumero1 = 0;
    int iNumero2 = 0;
    int iNumero3 = 0;
    int iNumero4 = 0;
    int iNumero5 = 0;
    int iNumero6 = 0;
    int iNumero7 = 0;
    int iNumero8 = 0;
    int iNumero9 = 0;
    int iNumero10 = 0;








    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

        cout << "\nDigite um número ";
        cin >> iNumero0 ;


         iNumero1 = iNumero0 * 1;
         iNumero2 = iNumero0 * 2;
         iNumero3 = iNumero0 * 3;
         iNumero4 = iNumero0 * 4;
         iNumero5 = iNumero0 * 5;
         iNumero6 = iNumero0 * 6;
         iNumero7 = iNumero0 * 7;
         iNumero8 = iNumero0 * 8;
         iNumero9 = iNumero0 * 9;
         iNumero10 = iNumero0 * 10;


         cout << "A Tabuada do número digitado é:" << endl;

         cout << iNumero0 <<" * 1 = " <<iNumero1 << endl;

         cout << iNumero0 <<" * 2 = " <<iNumero2 << endl;
         cout << iNumero0 <<" * 3 = " <<iNumero3 << endl;
         cout << iNumero0 <<" * 4 = " <<iNumero4 << endl;
         cout << iNumero0 <<" * 5 = " <<iNumero5 << endl;
         cout << iNumero0 <<" * 6 = " <<iNumero6 << endl;
         cout << iNumero0 <<" * 7 = " <<iNumero7 << endl;
         cout << iNumero0 <<" * 8 = " <<iNumero8 << endl;
         cout << iNumero0 <<" * 9 = " <<iNumero9 << endl;
         cout << iNumero0 <<" * 10 = " <<iNumero10 << endl;







    cout << fixed << setprecision(2);


    return 0;
}
