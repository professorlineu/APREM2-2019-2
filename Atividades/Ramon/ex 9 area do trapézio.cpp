;/**********************************************************
- Autor:     ramon macedo
- Descrição:. Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float  fbasmaio = 0;
float  fbasmen = 0;
float  fhalt   = 0;
float  farea   = 0;
    //Código do programa

cout  << "calculo do trapézio: "
      << endl;

cout  << "digite a base maior: ";
cin   >> fbasmaio;

cout  << "digite a base menor: ";
cin   >> fbasmen;

cout  << "digite a haltura: ";
cin   >> fhalt;


farea = (fbasmaio + fbasmen)* fhalt/ 2;



cout << "area do trapézio: "
     << farea
     << endl;



      return 0;
}
