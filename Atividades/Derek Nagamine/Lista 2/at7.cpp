/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição:Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.

**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
    float fsal, faum;
cout << "Nossa empresa esta dando um aumento de 30% para todos os funcionarios mal pagos." <<
"A seguir voce deve informar seu salario e pressionar enter." << endl;
cin >> fsal;
faum = fsal*1.3;
if (fsal<500)
{
     cout << "Seu novo salario e de: " << faum << " reais";
}
    else
    {
        cout << "Voce nao tem direito a um aumento.";
    }


}

