//6. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
//que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
//salário final.
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

