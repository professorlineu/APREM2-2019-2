/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição: Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

**********************************************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()

{

// declarando as variaveis

int inum1, inum2, iprod;

cout << "Ola humano, escolha um numero." << endl;
cin >> inum1;
cout << "Escolha outro para que possamos calcular o produto" << endl;
cin >> inum2;
cout << "O resultado e: ";
iprod = inum1*inum2;
cout << "\n" << iprod;

}
