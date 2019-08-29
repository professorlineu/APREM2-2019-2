/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 03 - Este programa determina quantas pessoas estão em cada faixa etária, além da porcentagem.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    int i = 1;
    int iIdade = 0;
    int iSoma15 = 0;
    int iSoma1630 = 0;
    int iSoma60 = 0;
    int iSoma3145 = 0;
    int iSoma4660 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (i < 9)
    {

    system("cls");
    cout << " \n\nDigite a idade da "
         << i
         << "° pessoa: ";
    cin  >> iIdade;

    cout << "\n\n";

    i += 1;

    if (iIdade <= 15)
    {
    iSoma15 += 1;
    }
    else if (iIdade >= 16 && iIdade <= 30)
    {
    iSoma1630 += 1;
    }
    else if (iIdade >= 31 && iIdade <=45)
    {
    iSoma3145 += 1;
    }
    else if (iIdade >= 46 && iIdade <= 60)
    {
    iSoma4660 += 1;
    }
    else
    {
    iSoma60 += 1;
    }

    } // fim do laço

    system("cls");
    cout << "\n"
         << iSoma15
         << " pessoas tem menos de 15 anos;\n"
         << iSoma1630
         << " estão entre 16 a 30 anos; \n"
         << iSoma3145
         << " tem 31 a 45 anos; \n"
         << iSoma4660
         << " possuem 46 a 60 anos; \n"
         << iSoma60
         << " tem mais de 60 anos. \n"
         << endl;

    system("pause");

    cout << "\n\nA porcentagem de pessoas com menos de 15 anos é de "
         << (iSoma15 / 8.0)*100
         << "%; \n\n"
         << "Já a porcentagem de pessoas com mais de 60 anos, é de "
         << (iSoma60 / 8.0)*100
         << "%."
         << endl;

} // fim do main
