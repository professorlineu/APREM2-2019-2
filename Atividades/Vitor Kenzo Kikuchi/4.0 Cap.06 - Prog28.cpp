/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 06 - Este programa determina a materia em que 15 alunos estão matriculados
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

main()
{
    int i = 0;
    int iOpcao[15];
    string snome[15];
    int iSomaLog = 0;
    int iSomaProg = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    while (i<15)
    {

        system("cls");
    cout << "\nQual é seu nome? ";
    cin  >> snome[i];

    cout << "Está cursando qual matéria? Linguagem (1) ou Lógica (2) de programação? ";
    cin  >> iOpcao[i];

    if (iOpcao[i] == 1)
    {
    iSomaProg += 1;
    }
    else if (iOpcao[i] == 2)
    {
    iSomaLog += 1;
    }

    i+=1;

    }

    system("cls");

    cout << "\n\nOs alunos cursando linguagem de programação são: \n" << endl;

    for (i=0; i<15; i++)
    {
    if (iOpcao[i]==1)
    {
    cout << snome[i] << "\t";
    }
    }

    cout << "\n\nTotal: " << iSomaProg << endl;

    cout << "\n\nOs alunos em Lógica de programação são: \n" << endl;

    for (i=0; i<15; i++)
    {
    if (iOpcao[i]==2)
    {
    cout << snome[i] << "\t";
    }
    }

    cout << "\n\nTotal: " << iSomaLog << endl;


    return 0;
}
