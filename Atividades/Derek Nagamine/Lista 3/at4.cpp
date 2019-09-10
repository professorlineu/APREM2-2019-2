/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descriзгo:Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
■■ o valor total das compras à vista;
■■ o valor total das compras a prazo;
■■ o valor total das compras efetuadas; e
■■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.
**********************************************************/

#include <iostream>
using namespace std;

int main()
{

char var1, var2;
double numt1,valort1,valort2,val1, val2, numt2,count1, prazo;

cout << "Esta transacao sera feita em codigo V, codigo P ou A (ambos)?"<< endl;
cin >> var1;

if ((var1=='V') || (var1=='v'))
{
cout << "Quantas transacoes serao realizadas?" << endl;
cin >> numt1;
val1=0;
count1= 1;
while (count1++<=numt1)
{
    cout << "Digite o valor das " << numt1 << " transacoes)" << endl;
    cin >> valort1;
    val1=val1+valort1;
}
cout << "O total das transacoes a vista " << val1;
}

else if ((var1=='P') || (var1=='p'))
{
cout << "Quantas transacoes serao realizadas?" << endl;
cin >> numt2;
val2=0;
count1 = 1;
while (count1++<=numt2)
{
    cout << "Digite o valor das " << numt2 << " transacoes)" << endl;
    cin >> valort2;
    val2=val2+valort2;
    prazo=val2/3;
}
cout << "O total das transacoes a prazo " << val2 << endl;
cout << "O valor total da primeira prestacao das transacoes a prazo e de $" << prazo;
}
else if ((var1=='A')||(var1=='a'))
{
    cout << "Quantas transacoes do tipo V serao realizadas? " << endl;
    cin >> numt1;
    cout << "Quantas transacoes do tipo P serao realizadas? " << endl;
    cin >> numt2;
    val1=0;
    count1=1;
    while (count1++<=numt1)
{
    cout << "Digite o valor das " << numt1 << " transacoes do tipo V" << endl;
    cin >> valort1;
    val1 = val1+valort1;

}
count1=1;
val2=0;
while (count1++<=numt2)
{
 cout << "Digite o valor das " << numt2 << " transacoes do tipo P"<< endl;
    cin >> valort2;
    val2 = val2+valort2;
    prazo=val2/3;
}
cout << "O valor total das transacoes a vista e de $" << val1 << endl;
cout << "O valor total das transacoes a prazo e de $" << val2 << endl;
    cout << "O valor total das transacoes e de $" << val1+val2 << endl;
    cout << "O valor total das prestracoes das transacoes a prazo e de $" << prazo;
}
else
{
     cout << "Erro";
}

}

