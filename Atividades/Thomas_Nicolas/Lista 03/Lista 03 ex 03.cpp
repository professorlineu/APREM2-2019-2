/**********************************************************
- Autor:
- Descrição:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 1;
    int iidade = 0;
    int i15 = 0;
    int i1630 = 0;
    int i3145 = 0;
    int i4660 = 0;
    int i60 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


    while   (i<9)
    {
        cout <<"digite a " <<i <<"º idade: ";
        cin >> iidade;

            if (iidade<16)
                i15+=1;
            else if (iidade>16 && iidade<31)
                i1630+=1;
            else if (iidade>30 && iidade<46)
                i3145+=1;
            else if (iidade>45 && iidade<61)
                i4660+=1;
            else
                i60+=1;

            i+=1;
    }

        cout <<"\ntem " <<i15 <<" pessoas na 1º faixa etária.";
        cout <<"\ntem " <<i1630 <<" pessoas na 2º faixa etária.";
        cout <<"\ntem " <<i3145 <<" pessoas na 3º faixa etária.";
        cout <<"\ntem " <<i4660 <<" pessoas na 4º faixa etária.";
        cout <<"\ntem " <<i60 <<" pessoas na 5º faixa etária.";

        cout <<"\n\ntem " <<(i15*100)/8 <<"% do total de pessoas na 1º faixa etária";
        cout <<"\n\ntem " <<(i60*100)/8 <<"% do total de pessoas na 5º faixa etária";

    return 0;
}
