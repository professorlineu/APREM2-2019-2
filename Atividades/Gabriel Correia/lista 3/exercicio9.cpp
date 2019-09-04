//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 3 - Exercício 9
//**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    //float fidade = 0;
    //float fp4 = 0;
    float fi5 = 1;
    float fito = 0;
    float fit = 0;
    float fp = 0;
    float fa = 0;
    float fi = 0;
    int i = 1;



    while (i<=10)
        {
        cout<<i;
        cout<<"\ndiga sua idade:                                    " <<"\n";
        cin>>fi;
        cout<<"diga seu peso:                                    " <<"\n";
        cin>>fp;
        cout<<"diga sua altura:                                    " <<"\n";
        cin>>fa;
    fit=(fit+fi);
        if (fp>90&&fa<150)
        {
           fito++;
        }
        if (fi>10&&fi<30&&fa>190)
        {

           fi5==0;
           fi5++;
        }



    system("pause");
    system("cls");
        i++;
        }
        cout<<"A media das idadas recebidas eh:"<<(fit/10)<<"\n";
        cout<<"qtd de pessoas com peso>90 e altura<150:"<<fito<<"\n";
        cout<<"porcentagem de pessoas com idade entre 10 e 30 e altura>190:"<<(fi5*100)/10<<"\n";

}
