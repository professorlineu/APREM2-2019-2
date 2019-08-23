/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição:Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:

0,0 ----- 3,0 Reprovado
3,0 ----- 7,0 Exame
7,0 ----- 10,0 Aprovado
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

float nota1, nota2, media;

cout << "Vamos calcular a media do aluno. Press enter" << endl;
getch();
cout << "Digite a primeira nota do aluno" << endl;
cin >> nota1;
cout << "Digite a segunda nota do aluno" << endl;
cin >> nota2;
media = (nota1 + nota2)/2;
cout << "A media do aluno e: " << media << endl;
if (media<3)

{
cout << "O aluno jubilou.";
}

else if (media >= 7)

{
cout << "Aprovado!";
}
else
{
cout << "O aluno esta de exame.";
}
}
