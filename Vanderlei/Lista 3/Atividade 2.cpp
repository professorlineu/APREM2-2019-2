//**********************************************************
//- Autor: Vanderlei Natanael
//- Descrição: Lista 3 - Exercício 1
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float in1 = 0;
    float in2 = 0;
    float in3 = 0;
    float in4 = 0;
    int i = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "iniciando o programa:"<<endl;

     while (i<5)

    {
    cout << "primeiro numero: ";
    cin  >> in1;

    cout << "segundo numero: ";
    cin  >> in2;

    cout << "terceiro numero: ";
    cin  >> in3;

    cout << "quarto numero: ";
    cin  >> in4;

    if (in1>in2 && in1>in3 && in1>in4)
        {cout<<in1 <<" é o maior numero "<< endl;}

    if (in2>in1  && in2>in3 && in2>in4)
        {cout<<in2 <<" eh o maior numero "<< endl;}

    if (in3>in2 && in3>in1 && in3>in4)
        {cout<<in3 <<" eh o maior numero "<< endl;}

    if (in4>in1 && in4>in2 && in4>in3)
        {cout<<in4 <<" eh o maior numero " << endl;}

    i++;

    cout<< "reiniciando o programa" << endl;

}
    cout<<"fim do programa";
}
