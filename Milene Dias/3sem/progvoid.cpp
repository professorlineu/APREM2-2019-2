/**********************************************************
//- Autor: Milene Caroline, Isabela Ap, Luiz Davi
// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando, dados
// sobre o salario e o numero de filhos. Faca uma sub rotina que leia esses dados para um
// numero nao determinado de pessoas e retorne a média de salário da populacao, a media do
// numero de filhos, o maior salário e o porcentual de pessoas com salario inferior a 380.
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;


 void fMediaSalario( float fSalario ,float fMediasalario);
 void iMediaFilhos ( int iNumFilhos , )



int main()
{
    int i = 0;
    float fSalario = 0;
    float fMediaSalario = 0;
    float fPorcentu = 0;
    int iNumFilhos = 0;
    int iMediaFilhos = 0;
    float fmaiorsala = 0;


    setlocale(LC_ALL,"");
    system("color F6");

    while (i < 3)
    {
    cout << "Informe seu salario mensal: ";
    cin  >> fSalario;
    cout << endl;

    cout << "Quantos filhos tem: ";
    cin  >> iNumFilhos;
    cout << endl;

    fMediaSalario = fMediaSalario + fSalario;


    iMediaFilhos = iMediaFilhos + iNumFilhos;
    i++;


    if (fPorcentu = fSalario < 380.0)
    {

        fPorcentu++;
    }}


    if ( fmaiorsala<fSalario)
    {
        fmaiorsala=fSalario;
    }



    cout << "A media dos salarios e: " << fMediaSalario/3 ;
    cout << endl;

    cout << "A media dos filhos: " << iMediaFilhos/3;
    cout<< endl;

    cout << "A porcentagem de pessoas com salario inferior a 380 reais e : " << (fPorcentu*100)/3;
    cout << endl;


    cout << " O maior salario e: " << fmaiorsala;
    cout << endl;


}
