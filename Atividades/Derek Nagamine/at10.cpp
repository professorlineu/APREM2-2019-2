/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição:Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
// declara variaveis
 float lado, area;

 cout << "Vamos calcular a area do quadrado. Press enter." << endl;
 getch();
 cout << "Digite o lado do quadrado" << endl;
 cin >> lado;
 area = lado*lado;
 cout << "A area do quadrado e: " << area << "u.a.";
 }



