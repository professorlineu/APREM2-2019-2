//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 3 - Exercício 7
//**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 1;
    float fp = 0;
    float fp4 = 0;
    float fa = 0;
    float fi = 0;
    float fi5 = 0;
    float fit = 0;
    float fito = 0;


    while (i<5)
        {
        cout<<"diga sua idade:                                    " <<"\n";
        cin>>fi;
        cout<<"diga seu peso:                                    " <<"\n";
        cin>>fp;
        cout<<"diga sua altura:                                    " <<"\n";
        cin>>fa;



    if (fi>50)
        {
        fi5++;
        }
    if (fi>10 && fi<20)
        {
        fit=fi+fit;
        fito++;
        }
    if (fp<40)
        {
        fp4++;
        }

        i++;
        cout<<i   <<" numero de vezes \n";
        cout<<fp  <<" numero peso \n";
        cout<<fp4 <<" numero pessoas < peso 40 \n";
        cout<<fa  <<" numero altura\n";
        cout<<fi  <<" numero idade \n";
        cout<<fi5 <<" numero pessoas maior que 50\n";
        cout<<fit <<" numero para idade 10<>20\n";
        cout<<fito<<" numero de pessoas com incremento\n";
        system("pause");
        system("cls");

        }

        cout<<"numero de pesssoas com a idade superior a 50 anos:  "<<fi5<<endl;
        cout<<"porcentagem de pessoas com o pesso inferior a 40kg: "<<(fito*100)/i<<"\n";

        if (fito!=0)
    {
        cout<<"media das pessoas que tem idade entre 10 e 20:      "<<(fito*100)/i;
    }
        if (fito=0)
    {
        cout<<"media das pessoas que tem idade entre 10 e 20:       0";
    }
}
