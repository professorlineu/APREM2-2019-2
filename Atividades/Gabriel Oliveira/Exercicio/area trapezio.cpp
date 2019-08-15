/**********************************************************
- Autor: Gabriel Guimarães
- Descrição: Lista 1 - Exercício 7
**********************************************************/



#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()

{
  int ibasemaior=0;
  int ibasemenor=0;
  int ialtura=0;
  int iarea=0;

  cout<<"insira a base maior";
  cin >> ibasemaior;
  cout<<"insira a base menor";
  cin >> ibasemenor;
  cout<<"insira altura";
  cin >> ialtura;

  iarea=((ibasemaior+ibasemenor)*ialtura)/2;

  cout<<"area do trapezio e:           ";
  cout<<iarea;
}
