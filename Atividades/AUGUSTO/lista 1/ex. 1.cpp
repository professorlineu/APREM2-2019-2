/**********************************************************
- Autor:     Seu nome
- Descri��o: SUBTRACAO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float Fvari1=0;
    float Fvari2=0;
    float Fresult=0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout<<"Digite a primeira variavel";
cin>>Fvari1;


cout << "Digite a segunda variavel";
cin >> Fvari2;


cout << "resulatdo = "
    << Fvari1 - Fvari2
     << endl;


    return 0;
}
