/**********************************************************
- Autor:      YASMIN SENA
- Descrição:  PROPOSTO 13
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>

using namespace std;

int main()
{
    int i = 0;
    float vetnota[8];
    string vetnome[8];
    float fmedia = 0;
    float fsoma=0;


    // entrada de dados
    for (i = 0; i < 8; i++)
    {
        cout <<"Digite o nome do "<< i+1 << " º Aluno: ";
        cin >> vetnome[i];
        cout << "\n Digite a nota do "<< vetnome[i] <<" : ";
        cin >> vetnota[i];
    }

    cout << "\n Relatórios de notas: \n" << endl;
    // imprime o vetor
    for (i = 0; i < 8; i++)
    {
        cout << vetnome[i] << " " << vetnota[i]<<"\n";
        fsoma= fsoma+ vetnota[i];
    }

    fmedia = fsoma/8;
    cout << "\n Média da classe = \n"<< fmedia;

    return 0;
}



