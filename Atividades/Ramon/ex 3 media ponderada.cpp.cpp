/**********************************************************
- Autor:     ramon
- Descri��o: media ponderada de duas variaveis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fnota1=0;
    float fnota2=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

cout << "primeira nota com peso 2: ";
cin  >> fnota1;

cout << "segunda nota com peso 3: ";
cin  >> fnota2 ;

cout << "media final: "
     << (fnota1*2 + fnota2*3)/5
     << endl;

    return 0;
}
