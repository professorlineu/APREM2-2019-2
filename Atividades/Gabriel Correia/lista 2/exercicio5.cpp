//5. Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
//do usuário.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 2 - Exercício 5
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int inumero1 = 0;
    int inumero2 = 0;
    int inumero3 = 0;

    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "primeiro numero: ";
    cin  >> inumero1;
    cout << endl;
    cout << "segundo numero: ";
    cin  >> inumero2;
    cout << endl;
    cout << "insira o que voce deseja fazer com estes numeros: "<<endl<<"1-media entre os numero digitados;    "<<"2-diferença do maior pelo menor;"<<endl<<"3-produto dos numeros digitados;      "<<"4-divisão do primeiro pelo segundo"<<endl<<"campo de resposta:";
    cin  >> inumero3;
    cout << endl;

    if (inumero3>=1&&inumero3<5)
        {if (inumero3==1)
               {cout<<"media dos numeros digitados e:"<<(inumero1+inumero2)/2;}
        if  (inumero3==2)
            {if(inumero1>inumero2)
            {cout<<inumero1-inumero2;}
            else
            { cout<<inumero2-inumero1;}}
        if  (inumero3==3)
            {cout<<inumero1*inumero2;}
        if (inumero3==4)
            {if (inumero2>0)
            {cout<<inumero1/inumero2;}
            if (inumero2<0)
            {cout<<inumero1/inumero2;}
    else
        cout<<"sinto muito mas nao foi possivel fazer esta operacao";}}
    else
        cout<<"operacao innvalida";

}
