
/**********************************************************
- Autor: Willian Paixão, Nicolas Veneziani e Leonardo Chagas
- Descrição: Nível médio
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include<windows.h>

using namespace std;

int main()
{
    //Declaração de variáveis

   int iAleatorio;
   int iAleatorio2;
   int iAleatorio3;
   int iResp = 0;
   int iCompa = 0;
   int iPontos = 0;
   int iNivel = 1;
   int i;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

for ( i = 0; i < 5; i ++)

{
    srand(time(0));
    iAleatorio = rand() % 100 + 1;
    iAleatorio2 = rand() % 100 + 1;
    iAleatorio3 = rand() % 100 + 1;
    cout << "\n\n\n\tSua pontuação atual é de: " << iPontos << "                                    Fase: " << iNivel << endl << endl <<endl;
    cout << "\n\t\t\t\t\t Qual é o valor de X? " << endl;
    iAleatorio3 = (iAleatorio3 /10) +1;

    iCompa = (iAleatorio * iAleatorio3);
    cout << "\n\n\n\t\t\t\t\t    " << iAleatorio << "x  "  << " = " << iCompa;



    cout << "\n\n\n\n\t\t\t\t\t  Digite a resposta: ";

    cin >> iResp;
    cout << "\n";



    if ( iResp == iAleatorio3)
    {
     cout <<  "\n\n\n\n\t\t\t\t\t  PARABÉNS, VOCÊ ACERTOU! ";
     iPontos = iPontos + 10;
     cout << "\n\n\n\n\t\t\t\t\t  Você ganhou 10 pontos!" << endl;
    }
    if  (iResp != iAleatorio3)

    {
       cout << "\n\n Você errou... Perdeu 5 pontos! :(\n";
       iPontos = iPontos - 5;
    }

    system("pause");
    system("cls");





}

if (iPontos >= 30 )
{
    iNivel = iNivel +1;
    for ( i = 0; i < 5; i ++)

{
    srand(time(0));
    iAleatorio = rand() % 100 + 1;
    iAleatorio2 = rand() % 100 + 1;
    iAleatorio3 = rand() % 100 + 1;
    cout << "\n\n\n\tSua pontuação atual é de: " << iPontos << "                                    Fase: " << iNivel << endl << endl <<endl;
    cout << "\n\t\t\t\t\t Qual é o valor de X? " << endl;
    iAleatorio3 = (iAleatorio3 /10) +1;

    iCompa = (iAleatorio * iAleatorio3)  + iAleatorio2;
    cout << "\n\n\n\t\t\t\t\t    " << iAleatorio << "x + " << iAleatorio2 << " = " << iCompa;



    cout << "\n\n\n\n\t\t\t\t\t  Digite a resposta: ";

    cin >> iResp;
    cout << "\n";



    if ( iResp == iAleatorio3)
    {
     cout <<  "\n\n\n\n\t\t\t\t\t  PARABÉNS, VOCÊ ACERTOU! ";
     iPontos = iPontos + 10;
     cout << "\n\n\n\n\t\t\t\t\t  Você ganhou 10 pontos!" << endl;
    }
    if  (iResp != iAleatorio3)

    {
       cout << "\n\n Você errou... Perdeu 5 pontos! :(\n";
       iPontos = iPontos - 5;
    }

    system("pause");
    system("cls");
}

}

    cout << fixed << setprecision(2);


    return 0;
}
