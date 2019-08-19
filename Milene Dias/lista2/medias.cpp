
/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descrição: media de passou
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color B8");


    float ialun1=0;
    float ialun2=0;
    float ialun3=0;
    float ialun4=0;
    float imedia=0;

    cout<<" insira o valor da primeira nota ";
    cin>>ialun1;

    cout<<" insira on valor da segunda nota ";
    cin>>ialun2;

    cout<<" insira on valor da terceira nota ";
    cin>>ialun3;

    cout<<" insira on valor da quarta nota ";
    cin>>ialun4;

    imedia=(ialun1+ialun2+ialun3+ialun4)/4;

    if (imedia>=7)
    {cout<< "parabens voce foi aprovadooo";}


    else

    cout<< " estuda mais parceiro ";
}
