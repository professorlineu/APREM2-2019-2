//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 1 - Exercício 10
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ia11= 0;
    int ia12= 0;
    int ia13= 0;
    int ia21= 0;
    int ia22= 0;
    int ia23= 0;
    int ia31= 0;
    int ia32= 0;
    int ia33= 0;
    int ico=0;
    int idi=0;
    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mecânica; IFSP-SJC";
    cout <<endl;
    cout << "insira o numero de posicao A11: ";
    cin  >>ia11;
    cout <<endl;
    cout << "insira o numero de posicao A11: ";
    cin  >>ia12;
    cout <<endl;
    cout << "insira o numero de posicao A11: ";
    cin  >>ia13;
    cout <<endl;
    cout << "insira o numero de posicao A11: ";
    cin  >>ia21;
    cout <<endl;
    cout << "insira o numero de posicao A11: ";
    cin  >>ia22;
    cout <<endl;
    cout << "insira o numero de posicao A11: ";
    cin  >>ia23;
    cout <<endl;
    cout << "insira o numero de posicao A11: ";
    cin  >>ia31;
    cout <<endl;
    cout << "insira o numero de posicao A11: ";
    cin  >>ia32;
    cout <<endl;
    cout << "insira o numero de posicao A11: ";
    cin  >>ia33;
    cout <<endl;

    ico= (ia11*ia22*ia33)+(ia12*ia23*ia31)+(ia13*ia21*ia32);
    idi= (ia31*ia22*ia31)+(ia12*ia21*ia33)+(ia11*ia23*ia32);
    cout<<"det=" <<ico-idi << endl;



}
