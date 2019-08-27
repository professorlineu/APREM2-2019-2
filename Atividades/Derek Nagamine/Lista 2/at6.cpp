/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição:Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
double dnum1, dnum2, dpot, drad1, drad2, drad3, drad4;
cout << "Digite um numero e pressione enter." << endl;
cin >> dnum1;
cout << "Digite outro numero e pressione enter." << endl;
cin >> dnum2;
dpot = pow(dnum1,dnum2);
drad1 = pow(dnum1,1.0/2);
drad2 = pow(dnum2,1.0/2);
drad3 = cbrt(dnum1);
drad4 = cbrt(dnum2);
cout << "O primeiro elevado ao segundo resulta em: " << dpot << endl;
if (dnum1<0)
{
cout << "O primeiro numero nao apresenta raizes quadradas reais." << endl;
}
else
{
cout << "A raiz quadrada do primeiro numero resulta em: " << drad1 << endl;
}
if (dnum2<0)
{
cout << "O segundo numero nao apresenta raizes quadradas reais." << endl;
}
else
{
cout << "A raiz quadrada do segundo numero resulta em: " << drad2 << endl;
}
cout << "A raiz cubica do primeiro numero resulta em: " << drad3 << endl;
cout << "A raiz cubica do segundo numero resulta em: " << drad4 << endl;
}
