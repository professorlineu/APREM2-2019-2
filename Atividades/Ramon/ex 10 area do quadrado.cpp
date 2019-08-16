;/**********************************************************
- Autor:     ramon macedo
- Descrição:. Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float  flado = 0;
float  farea = 0;
    //Código do programa

cout  << "calculo do quadrado: "
      << endl;

cout  << "digite o lado do quadrado: ";
cin   >> flado;


farea = (flado * flado);



cout << "area do quadrado: "
     << farea
     << endl;



      return 0;
}
