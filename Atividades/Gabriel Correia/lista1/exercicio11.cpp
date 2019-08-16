//11.Faça um programa que calcule e mostre a área de um losango.
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
    int inumero= 0;


    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mecânica; IFSP-SJC";
    cout <<endl;
    cout << "insira o numero para ser multiplicado: ";
    cin  >>inumero;
    cout <<endl;
    cout << "A tabuada do numero " << inumero << "e:"<<endl;
    cout <<inumero<<"*0: "<<(inumero*0)<<";"<<endl;
    cout <<inumero<<"*1: "<<(inumero*1)<<";"<<endl;
    cout <<inumero<<"*2: "<<(inumero*2)<<";"<<endl;
    cout <<inumero<<"*3: "<<(inumero*3)<<";"<<endl;
    cout <<inumero<<"*4: "<<(inumero*4)<<";"<<endl;
    cout <<inumero<<"*5: "<<(inumero*5)<<";"<<endl;
    cout <<inumero<<"*6: "<<(inumero*6)<<";"<<endl;
    cout <<inumero<<"*7: "<<(inumero*7)<<";"<<endl;
    cout <<inumero<<"*8: "<<(inumero*8)<<";"<<endl;
    cout <<inumero<<"*9: "<<(inumero*9)<<";"<<endl;
    cout <<inumero<<"*10: "<<(inumero*10)<<";"<<endl;


}
