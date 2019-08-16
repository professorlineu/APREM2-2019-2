;/**********************************************************
- Autor:     ramon macedo
- Descrição:. Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em grama.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float  fpesoemkg = 0;
float  fpesogr = 0;

    //Código do programa

cout  << "digite seu peso atual em gramas: ";
cin   >> fpesoemkg;

fpesogr = fpesoemkg * 1000;


cout << "seu peso atual em gramas: "
     << fpesogr
     << endl;



      return 0;
}
