//6. Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
//escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
//programa. As opções são:
//a) O primeiro número elevado ao segundo número.
//b) Raiz quadrada de cada um dos números.
//c) Raiz cúbica de cada um dos números.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 2 - Exercício 6
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float inumero1 = 0;
    float inumero2 = 0;
    int inumero3 = 0;

    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "primeiro numero: ";
    cin  >> inumero1;
    cout << endl;
    cout << "segundo numero: ";
    cin  >> inumero2;
    cout << endl;
    cout << "insira o que voce deseja fazer com estes numeros: "<<endl<<"1-o primeiro numero elevado pelo segundo;    "<<"2-raiz quadrada de ambos os numeros digitados;"<<endl<<"3-raiz cubica de ambos os numeros digitados;      "<<endl<<"campo de resposta: ";
    cin  >> inumero3;
    cout << endl;

    if (inumero3>=1&&inumero3<4)
        {if (inumero3==1)
               {cout<<"primeiro numero elevado pelo segundo:"<<pow(inumero1,inumero2);}}
        if  (inumero3==2)
           {if (inumero1>0 && inumero2>0)
             {cout<<"a raiz de "<<inumero1<<" e: "<<sqrt(inumero1)<<";"<<endl<<"a raiz de "<<inumero2<<" e: "<<sqrt(inumero2)<<";";}
        else  { cout<<"nao foi possivel realizar esta operacao" ;}}
        if  (inumero3==3)
             {cout<<"a raiz de "<<inumero1<<" e: "<<cbrt(inumero1)<<";"<<endl<<"a raiz de "<<inumero2<<" e: "<<cbrt(inumero2)<<";";}

    if (inumero3<1)
        cout<<"operacao innvalida";
    if (inumero3>3)
        cout<<"operacao innvalida";

}
