/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição:Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.
Salario
Até R$ 300,00 recebe aumento de 35%
Acima de R$ 300,00 recebe aumento de 15%

**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
float fsal, faum1, faum2;

cout << "Houve um reajuste salarial em nossa empresa." << "\n"
<< "A seguir voce deve informar seu salario e pressionar enter. " << endl;
cin >> fsal;
faum1 = fsal*1.35;
faum2 = fsal*1.15;
if (fsal<=300)
{
cout << "Seu salario passara a ser: " << faum1 << " reais";
}
else
cout << "Seu salario passara a ser: " << faum2 << " reais";
}
