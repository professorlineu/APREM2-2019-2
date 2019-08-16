//8. Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 1 - Exercício 8
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
    cout << "seu peso atual em gramas e: " <<ipeso*1000<<"g."<<endl;

}
