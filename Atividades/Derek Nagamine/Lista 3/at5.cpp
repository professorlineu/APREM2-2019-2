/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descriзгo:Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos;
■■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
**********************************************************/

#include <iostream>
using namespace std;

int main()
{

double altura, Atotal, Med,porcen, idade, peso,count,i=0,j=0,k=0;
char resposta;

cout << "Digite a idade das cinco pessoas" << endl;
count = 1;
while (count++<=5)
{
cin >> idade;
if (idade>50)
{
    ++i;
}
else if (idade>=10 && idade<=20)
{
    ++j;
}
}
count = 1;
cout << "Digite a altura de cada pessoa" << endl;
while (count++<=5)
{
 cin >> altura;
 cout << "Essa pessoa tem idade entre 10 e 20 anos S ou N? " << endl;
 cin >> resposta;
 if ((resposta=='s')||(resposta=='S'))
 {
     cout << "Altura da proxima pessoa" << endl;
          Atotal=Atotal+altura;
 }
else if ((resposta=='n')||(resposta=='N'))
{
    cout << "Altura da proxima pessoa " << endl;
}
else
{
    cout << "Sua resposta podera gerar um erro no programa " << endl << endl;
}
}
count = 1;
cout << "Digite o peso de cada pessoa" << endl;

while (count++<=5)
{
    cin >> peso;
    if (peso<40)
    {
        ++k;
    }
}
porcen=100*k/5;
Med=Atotal/j;
cout << "A quantidade de pessoas com idade superior a 50 anos e " << i << endl;
cout << "A media das alturas das pessoas com idade entre 10 e 20 anos e " << Med << endl;
cout << "A porcentagem das pessoas com peso inferior a 40kg e de " << porcen << "%" << endl;
}
