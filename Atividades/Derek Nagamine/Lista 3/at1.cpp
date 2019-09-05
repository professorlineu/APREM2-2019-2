/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descri��o:Fa�a um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa et�ria;
b) a porcentagem de pessoas na primeira faixa et�ria com rela��o ao total de pessoas.
c) a porcentagem de pessoas na �ltima faixa et�ria com rela��o ao total de pessoas

1a At� 15 anos
2a De 16 a 30 anos
3a De 31 a 45 anos
4a De 46 a 60 anos
5a Acima de 60 anos
**********************************************************/

#include <iostream>
using namespace std;

int main()
{

    double id=8, idade, i=0, j=0, k=0, l=0, porcentag;

    cout << "digite a idade das oito pessoaos" << endl;

    while (id>0)
    {
cin >> idade;
        id--;
if (idade<=15)
        {
            i++;
        }
        else if (idade>=16 && idade<=45)
        {
            j++;
        }
        else if (idade>=46&&idade<=60)
            {
                k++;
                }
        else if (idade>60)
        {
            l++;
        }
    }
cout << "Existem " << i << " pessoas com idade menor ou igual a 15 anos." << endl
<< j << " pessoas com idade entre 45 e 16 anos." << endl
<< k << " pessoas com idade entre 46 e 60 anos." << endl
<< l << " pessoas com idade superior a 60 anos." << endl;
porcentag = (l)*100/(i+j+k+l);
cout << "A porcentagem de pessoas com idade superior a 60 anos e " << porcentag << "%";
}

