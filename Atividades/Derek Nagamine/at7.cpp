/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição:Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

//declarando variaveis

int main()

{
float fpeso, frepeso1, frepeso2;

cout << "Digite seu peso atual." << endl ;
cin >> fpeso;
frepeso1 = 1.15*fpeso;
frepeso2 = 0.8*fpeso;
cout << "Voce pesara " << frepeso1 << "Kg caso engorde 15%" << endl;
cout << "Voce pesara " << frepeso2 << "Kg caso emagreca 20%";

}
