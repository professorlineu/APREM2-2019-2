/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição: Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira e peso 3 para a segunda.

**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
// declarando variaveis
int inot1, inot2, inotas, imedia, idec;

cout << "Ola professor, digite as duas notas do seu aluno para que possamos calcular sua media ponderada" << endl;
cin >> inot1;
cin >> inot2;
inotas = 2*inot1 + 3*inot2;
imedia = inotas/5;
cout << "A media ponderada do aluno e:" << "\n" << imedia << endl;
idec = (inotas - imedia*5)*10/5;
cout << "A primeira casa decimal e: " << idec ;

}


