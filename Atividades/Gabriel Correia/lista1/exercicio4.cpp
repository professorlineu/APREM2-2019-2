//4.Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, consi-
//derando peso 2 para a primeira e peso 3 para a segunda.
//**********************************************************

//- Autor: Gabriel Correia Soares

//- Descrição: Lista 1 - Exercício 4

//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ipe = 0;
    int ise = 0;
    int iseg = 0;
    int ip = 0;
    int ipeso1 =0;
    int ipeso2 = 0;
    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mecânica; IFSP-SJC";
    cout <<endl;
    cout << "primeira nota: ";
    cin  >>ip;
    cout <<endl;
    cout<< "insira o peso dessa nota: ";
    cin  >>ipeso1;
    cout <<endl;
    ipe = ip*ipeso1;
    cout << "segunda nota: ";
    cin  >>iseg;
    cout <<endl;
    cout<< "insira o peso dessa nota: ";
    cin  >>ipeso2;
    cout <<endl;

    ise = iseg*ipeso2;
    cout <<"resultado:"
         << (ise+ipe)/(ipeso1+ipeso2)
         <<"."
         << endl;
}
