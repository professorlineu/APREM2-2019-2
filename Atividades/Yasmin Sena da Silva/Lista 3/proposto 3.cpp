/**********************************************************
- Autor:     Yasmin Sena
- Descrição: PROPOSTO 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int idade = 0;
    int icount1 = 0;
    int icount2 = 0;
    int icount3 = 0;
    int icount4 = 0;
    int icount5 = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "informe a idade de oito pessoas:  \n ";
    while (i < 8)
    {
        cout << "Digite a " << i + 1 << "º idade: ";
        cin >> idade;
        i = i + 1;

    if (idade<16)
    {
      icount1++;
    }
    else if (idade<31)
    {
        icount2++;
    }
    else if (idade<46)
    {
        icount3++;
    }
    else if (idade<61)
    {
        icount4++;
    }
    else
    {
        icount5++;
    }
    }
    cout << "Existem " << icount1 << " pessoas na 1° Faixa Etária. \n";
    cout << "Existem " << icount2 << " pessoas na 2° Faixa Etária. \n";
    cout << "Existem " << icount3 << " pessoas na 3° Faixa Etária. \n";
    cout << "Existem " << icount4 << " pessoas na 4° Faixa Etária. \n";
    cout << "Existem " << icount5 << " pessoas na 5° Faixa Etária. \n";
    cout << " Porcentagem de pessoas na primeira faixa etária: \n";
    cout << "1° Faixa etária: " << ((float)icount1/8)*100 << "% \n";
    cout << " Porcentagem de pessoas na última faixa etária: \n";
    cout << "5° Faixa etária: " << ((float)icount5/8)*100 << "% \n";

    return 0;
}
