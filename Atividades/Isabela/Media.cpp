#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iNota1 = 0;
    int iNota2 = 0;
    int iNota3 = 0;
    int iMedia = 0;

    setlocale (LC_ALL,"");
    system("COLOR F1");

    cout << "inserir primeira nota ";
    cin  >> iNota1;

    cout << "inserir segunda nota ";
    cin  >> iNota2;

    cout << "inserir terceira nota ";
    cin  >> iNota3;

     iMedia = (iNota1+iNota2+iNota3)/3;
    cout << "a media das notas e " << iMedia;

}
