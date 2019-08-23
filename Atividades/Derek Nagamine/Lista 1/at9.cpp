/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição:Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
//declarar variaveis

float baseM, basem, altura, area;

cout << "Vamos calcular a area de um trapezio. Press enter." << endl;
getch();
cout << "Digite o valor da base maior do trapezio" << endl ;
cin >> baseM;
cout << "Digite o valor da base menor do trapezio" << endl;
cin >> basem;
cout << "Digite o valor da altura do trapezio" << endl;
cin >> altura;
area = (baseM + basem)*altura/2;
cout << "A area do seu trapezio e: " << area << "u.a.";
}
