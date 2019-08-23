/**********************************************************

- Autor:     Derek Nagamine Cavallari
- Descri��o: Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro n�mero pelo
segundo.

**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{

int n1, n2, subtrair;

cout << "Ola humano, digite um valor para o minuendo" << endl;
cin >> n1;
cout << "Agora digite um valor para o subtraendo" << endl;
cin >> n2;
subtrair = n1 - n2;
cout << "O resultado e:" << "\n" << subtrair;

}
