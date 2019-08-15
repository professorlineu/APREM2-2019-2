//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 1 - Exercício 9
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ibasem = 0;
    int ibaseM =0;
    int ialtura=0;

    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mecânica; IFSP-SJC";
    cout <<endl;
    cout << "insira a base menor do trapezio: ";
    cin  >>ibasem;
    cout <<endl;
    cout << "insira a base maior do trapezio: ";
    cin  >>ibaseM;
    cout <<endl;
    cout << "insira a altura do trapezio: ";
    cin  >>ialtura;
    cout <<endl;
    cout << "a area do trapezio é de:" <<((ibasem+ibaseM)*ialtura)/2 <<endl;

}
