//Fonte: http://www.codeincodeblock.com/2011/03/changing-text-color-in-codeblock.html
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <time.h>
#include <windows.h>
using namespace std;


void SetColor(int ForgC);

int main()
{
    int iCont = 0;
    int icont54 = 0;
    int ForgC = 0;
    setlocale(LC_ALL,"");
    //system("color F0");
    srand(time(NULL)); //Evita que o número sorteado seja sempre o mesmo a cada execução

    icont54 = rand() % 10 + 1; //Gera um número aleatório

    /*while (iCont < 16)
    {
        SetColor(iCont);
        cout << "Testando as Cores" << iCont << endl;
        iCont++;
    }

    return 0;
}
*/

        SetColor(icont54);
        cout << "Testando as Cores" << icont54 << endl;

    void SetColor(int ForgC);
    {
     WORD wColor;
                          //We will need this handle to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

                           //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                     //Mask out all but the background attribute, and add in the forgournd color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
    }

/*
Color	        Value
BLACK	        0
BLUE	        1
GREEN	        2
CYAN	        3
RED	            4
MAGENTA	        5
BROWN	        6
LIGHTGRAY	    7
DARKGRAY	    8
LIGHTBLUE	    9
LIGHTGREEN	    10
LIGHTCYAN	    11
LIGHTRED	    12
LIGHTMAGENTA	13
YELLOW	        14
WHITE	        15
*/
}

return 0;
