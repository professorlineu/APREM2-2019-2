//**********************************************************
//- Autor: Isabela Aparecida de Souza
//- Descrição: Media arit Ex02
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iNota1 = 0;
    int iNota2 = 0;
    int iMedia =0;

    setlocale(LC_ALL,"");
    system("color F6");

    cout << "Inserir primeira nota: ";
    cin  >> iNota1;
    cout << endl;

    cout << "Inserir segunda nota: ";
    cin  >> iNota2;
    cout << endl;

    iMedia = (iNota1+iNota2)/2;

    if (iMedia >= 7)
        cout << "Voce foi aprovado.";
    if (iMedia >= 3 && iMedia < 7)
        cout <<"Voce esta de exame.";
    if (iMedia < 3)
        cout <<"Voce foi reprovado.";
}
