/****************************************
- Autor:     Derek Nagamine Cavallari
- Descri��o: Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final.
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
  float item1, item2, item3, comis, salar;

cout << "Voce recebera um salario equivalente a 1000.00R$ + 4% do valor total de suas vendas. Press enter" << endl;
getch();
cout << "As possiveis vendas sao: Item 1: 100.00R$, Item 2: 200.00R$, Item 3: 300.00R$. Press enter" << endl;
getch();
cout << "Qual a quantidade de intes 1 vendidos?" << endl;
cin >> item1;
cout << "Qual a quantidade de intes 2 vendidos?" << endl;
cin >> item2;
cout << "Qual a quantidade de intes 3 vendidos?" << endl;
cin >> item3;
comis = 100*item1+200*item2+300item3;
salar = 1000.00 + 0,04*comis;
cout << "O valor total de sua comissão e de: " << comis << endl;
cout << "O salario a receber e: " << salar;
}
