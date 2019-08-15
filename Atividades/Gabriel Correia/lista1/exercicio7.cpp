//**********************************************************

//- Autor: Gabriel Correia Soares

//- Descrição: Lista 1 - Exercício 7

//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ipeso = 0;
    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mecânica; IFSP-SJC";
    cout <<endl;
    cout << "insira o seu peso atual: ";
    cin  >>ipeso;
    cout <<endl;
    cout << "se voce emagracer 20%, seu peso atual sera: " <<ipeso-(ipeso*20)/100<<endl;
    cout <<"se voce engordar  15%, seu peso atual sera: " <<ipeso+(ipeso*15)/100<< endl;
}

