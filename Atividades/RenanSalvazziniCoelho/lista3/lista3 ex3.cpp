/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 3 Exercício 3
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
    int icontagem1 = 0;
    int icontagem2 = 0;
    int icontagem3 = 0;
    int icontagem4 = 0;
    int icontagem5 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Informe a idade de 8 pessoas,consecutivamente:  " <<endl;

    while (i < 8)
    {
        cout << "Digite a " << i + 1 << "° idade: ";
        cin >> iidade;
        i=i + 1;

    if(iidade < 16)
    {
        icontagem1++;
    }
    else if(iidade< 31)
    {
       icontagem2++;
    }
    else if(iidade< 46)
    {
       icontagem3++;
    }
    else if(iidade< 61)
    {
       icontagem4++;
    }
    else
    {
       icontagem5++;
    }
    }
    cout << "Existem " << icontagem1 << " pessoas na 1° faixa estária." <<endl;
    cout << "Existem " << icontagem2 << " pessoas na 2° faixa estária." <<endl;
    cout << "Existem " << icontagem3 << " pessoas na 3° faixa estária." <<endl;
    cout << "Existem " << icontagem4 << " pessoas na 4° faixa estária." <<endl;
    cout << "Existem " << icontagem5 << " pessoas na 5° faixa estária." <<endl;
    cout << " A porcentagem de pessoas na primeira faixa etária é de: " <<endl;
    cout << "1° faixa etária: " << (icontagem1/8)*100 <<" porcento" <<endl;
    cout << " A porcentagem de pessoas na quinta faixa etária é de: " <<endl;
    cout << "5° faixa etária: " << (icontagem5/8)*100 <<" porcento" <<endl;

    return 0;
}


