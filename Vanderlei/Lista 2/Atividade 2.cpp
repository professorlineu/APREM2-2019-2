/**********************************************************
- Autor:   vanderlei natanael
- Descrição: Média aluno com exame
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float iNo1 = 0;
    float iNo2 = 0;
    float imedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "digite o nota 1: ";
    cin >> iNo1;

    cout << "digite o nota 2: ";
    cin >> iNo2;

    imedia = (iNo1+iNo2)/2;

    cout << "a sua nota foi de " << imedia;

    if (imedia>=7)
      cout<< ", parabéns você foi aprovado!";

    if (7>imedia && imedia>=3)

        cout<< ", você foi para exame, estude bem.";

    if (imedia<3)
        cout << ", você foi reprovado!";


    return 0;
}
