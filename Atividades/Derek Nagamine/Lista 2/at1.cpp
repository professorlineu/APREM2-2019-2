/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descri��o:Fa�a um programa que calcule e mostre a �rea de um quadrado. Sabe-se que: A = lado * lado.
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{

// declara variaveis

float fnota1, fnota2, fnota3, fnota4, fmedia;

cout << "Vamos calcular a media do aluno. Press enter." << endl;
getch();
cout << "Digite a primeira nota do aluno" << endl;
cin >> fnota1;
cout << "Digite a segunda nota do aluno" << endl;
cin >> fnota2;
cout << "Digite a terceira nota do aluno" << endl;
cin >> fnota3;
cout << "Digite a quarta nota do aluno" << endl;
cin >> fnota4;
fmedia = (fnota1 + fnota2 + fnota3 + fnota4)/4;
cout << "A media do aluno e: " << fmedia << endl;
if (fmedia < 7)
{
cout << "O aluno jubilou";
}
else
{
cout << "Aprovado!";

}
}
