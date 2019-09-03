/**********************************************************
- Autor:     Gabriel Oliveira
- Descrição: Lista 3 - Ex 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <ctype.h>


using namespace std;

int main()
{


    int i = 0;
    int in1 = 1;
    int ir1 = 0;


    setlocale(LC_ALL,"");
    system("color F1");



    while (in1 <= 10)
    {

        while (i <= 10)
       {
        ir1 = (in1) * i;

       cout << in1 << " X " << i << " = " << ir1 << endl;

        i++;

       }
       cout << endl << endl;
        in1++;
        i = 0;
    }


}
