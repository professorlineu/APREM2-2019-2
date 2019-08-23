/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição: Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.

**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{

// declarando variaveis

int inum1, inum2, iqo, ires;

cout << "Ola humano, escolha um numero." << endl;
cin >> inum1;
cout << "Escolha outro para calcularmos o quociente entre este numero e o primeiro." << endl;
cin >> inum2;
iqo = inum1/inum2;
cout << "O resultado e: " << "\n" << iqo << endl;
ires = inum1 - inum2*iqo;
cout << "O resto e: " << "\n" << ires;

}
