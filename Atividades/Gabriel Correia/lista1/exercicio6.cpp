//**********************************************************

//- Autor: Gabriel Correia Soares

//- Descrição: Lista 1 - Exercício 6

//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int isalario = 0;
    int ivendas = 0;
    int itotal =0;

    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mecânica; IFSP-SJC";
    cout <<endl;
    cout << "insira o valor do salario: ";
    cin  >>isalario;
    cout <<endl;
    cout << "insira o valor das vendas: ";
    cin  >>ivendas;
    cout <<endl;
    itotal=(ivendas*4)/100;
    cout <<"resultado:" << isalario+itotal <<"." << endl;
}

