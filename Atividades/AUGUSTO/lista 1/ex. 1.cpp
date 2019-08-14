/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float Fvari1=0;
    float Fvari2=0;
    float Fresult=0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout<<"Digite a primeira variável";
cin>>Fvari1;


cout << "Digite a segunda variável";
cin >> Fvari2;


cout << "resulatdo = "
    << Fvari1 - Fvari2
     << endl;


    return 0;
}
