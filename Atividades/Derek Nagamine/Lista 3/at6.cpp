/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descriзгo:Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
■■ a média das idades das dez pessoas;
■■ a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
■■ a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de
1,90 m.
**********************************************************/

#include <iostream>
using namespace std;

int main()
{
double idade, Itotal, peso, altura, count, medI, porc, i=0,j=0,k=0, l=0;
char resposta, resposta2;

cout << "Digite a idade das 10 pessoas " << endl;
count = 1;
Itotal=0;
while (count++<=10)
{
    cin >> idade;
    if (idade>=10 && idade<=30)
    {
        i++;
    }
    Itotal=Itotal+idade;
}
cout << "Digite o peso das 10 pessoas em Kg " << endl;
count = 1;
while (count++<=10)
{
    cin >> peso;
    if (peso>90)
    {
        cout << "Essa pessoa mede menos de 1.5m de altura? ";
        cin >> resposta;

if (resposta=='s')
{
    j++;
    cout << "Digite o peso da proxima pessoa. " << endl;
}
else if (resposta=='n')
{
cout << "Digite o peso da proxima pessoa. " << endl;
    }
    }
}
cout << "Digite a altura das 10 pessoas em metros. " << endl;
count = 1;
while (count++<=10)
{
    cin >> altura;
    if (altura>=1.9)
    {
        k++;
        cout << "Essa pessoa tem entre 10 e 30 anos? ";
        cin >> resposta2;
        if (resposta2=='s')
        {
            l++;
            cout << "Digite a altura da proxima pessoa. " << endl;
        }
            else if (resposta2=='n')
            {
                cout << "Digite a idade da proxima pessoa. " << endl;
            }
        }

}
medI=Itotal/10;
porc=100*l/k;
cout << "A media da idade das 10 pessoas e " << medI << endl;
cout << "A quantidade de pessoas com peso superior a 90 kg \n" <<
 "e altura inferior a 1,50 metro e " << j << endl;
cout << "A porcentagem de pessoas com idade entre 10 e 30 anos \n" <<
 "entre as pessoas que medem mais de 1,90m e " << porc <<"%";
    }


