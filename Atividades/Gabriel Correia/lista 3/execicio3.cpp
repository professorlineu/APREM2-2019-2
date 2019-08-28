//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 3 - Exercício 3
//**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iIdade = 0;
    int iG1 = 0;
    int iG2 = 0;
    int iG3 = 0;
    int iG4 = 0;
    int iG5 = 0;


    while(i<8)
    {
    cout<<"\n Digite uma idade: \n";
    cin>>iIdade;
    i=i+1;

    if (iIdade>60)
    {
    iG5=iG5+1;
    }
    if (iIdade>=46 && iIdade<=60)
    {
    iG4=iG4+1;
    }
    if (iIdade>=31 && iIdade<=45)
    {
    iG3=iG3+1;
    }
    if (iIdade>16 && iIdade<=30)
    {
    iG2=iG2+1;
    }
    if (iIdade<=15)
    {
    iG1=iG1+1;
    }
  ///opcao para varificacao do operador se o programa esta funcionando corretamente:///  cout<<"\n op: "<<iG5<<iG4<<iG3<<iG2<<iG1;
    }
    ///a-)
    cout<<"\n faixa etaria '1': "<<iG1;
    cout<<"\n faixa etaria '2': "<<iG2;
    cout<<"\n faixa etaria '3': "<<iG3;
    cout<<"\n faixa etaria '4': "<<iG4;
    cout<<"\n faixa etaria '5': "<<iG5;
    ///b-)
    cout<<"\n %grupo 1 com o total de pessoas: "<<(iG1*100)/8<<"%";
    ///c-)
    cout<<"\n %grupo 5 com o total de pessoas: "<<(iG5*100)/8<<"%";



    }
