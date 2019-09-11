/**********************************************************
- Autor:        Raran
- Descrição:    L3 Ex3
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
    int iidade1 = 0;
    int iidade2 = 0;
    int iidade3 = 0;
    int iidade4 = 0;
    int iidade5 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


    while   (i<9)
    {
        system("cls");
        cout <<"digite a idade da pessoa " <<i <<": ";
        cin >> iidade;

            if (iidade<16)
                iidade1+=1;
            else if (iidade>16 && iidade<31)
                iidade2+=1;
            else if (iidade>30 && iidade<46)
                iidade3+=1;
            else if (iidade>45 && iidade<61)
                iidade4+=1;
            else
                iidade5+=1;

            i+=1;
    }
        system("cls");
        cout <<"Tem " <<iidade1 <<" pessoas na primeira faixa etária.\n";
        cout <<"Tem " <<iidade2 <<" pessoas na segunda faixa etária.\n";
        cout <<"Tem " <<iidade3 <<" pessoas na terceira faixa etária.\n";
        cout <<"Tem " <<iidade4 <<" pessoas na quarta faixa etária.\n";
        cout <<"Tem " <<iidade5 <<" pessoas na quinta faixa etária.\n";

        cout <<"Tem " <<(iidade1*100)/8 <<"% do total de pessoas na primeira faixa etária.\n";
        cout <<"Tem " <<(iidade5*100)/8 <<"% do total de pessoas na quinta faixa etária.\n";

    return 0;
}
