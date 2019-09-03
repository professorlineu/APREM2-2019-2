/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int i = 0;
int iidade = 0;
int isoma15 = 0;
int isoma1630 = 0;
int isoma3145 = 0;
int isoma4660 = 0;
int isoma60cima = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

while (i<8)
{
cout << "digite a sua idade: ";
cin  >> iidade;

i = i + 1;

if (iidade <= 15)
{
    isoma15 += 1;
}
else if ( iidade >= 16 && iidade <= 30)
{
    isoma1630 += 1;
}
else if ( iidade >= 31 && iidade <= 45)
{
    isoma3145 += 1;
}
else if ( iidade >= 46 && iidade <= 60)
{
    isoma4660 += 1;
}
else
{
    isoma60cima += 1;
}

} // Fim do laço

system("cls");
cout << isoma15
     << " pessoas tem menos que 15 anos de idade, ";

cout << isoma1630
     << " pessoas tem idade de 16 a 30 anos, ";

cout << isoma3145
     << " pessoas tem idade de 31 a 45 anos, ";

cout << isoma4660
     << " pessoas tem idade de 46 a 60 anos, ";

cout << isoma60cima
     << " pessoas tem mais do que 60 anos."
     << endl;

cout << "A porcentagem de pessoas com menos de 15 anos é de: "
     << (isoma15 / 8.0)*100
     << "%;"
     << " Já a porcentagem de pessoas com mais de 60 anos, é de "
     << (isoma60cima / 8.0)*100
     << "%."
     << endl;

    return 0;
}
