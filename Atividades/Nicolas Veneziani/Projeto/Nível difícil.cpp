/**********************************************************
- Autor: Willian Paixão, Nicolas Veneziani e Leonardo Chagas
- Descrição: Nível difícil
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
   int iAleatorio4;
   int iAleatorio5;
   int iAleatorio6;
   int iResp = 0;
   int iResp2 = 0;
   int iCompa = 0;
   int iCompa2 = 0;
   int iPontos = 0;
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
    iAleatorio4 = rand() % 100 + 1;
    iAleatorio5 = rand() % 100 + 1;
    iAleatorio6 = rand() % 100 + 1;
    cout << "\n\n\t Sua pontuação atual é de: " << iPontos << endl << endl <<endl;
    cout << "\n\t\t\t\t\t  Qual é o valor de X e de Y? " << endl;
    iAleatorio = (iAleatorio /10) + 1;
    iAleatorio2 = (iAleatorio2 /10) + 1;
    iAleatorio3 = (iAleatorio3 /10) ;
    iAleatorio4 = (iAleatorio4 /10) ;
    iAleatorio5 = (iAleatorio5 /10) ;
    iAleatorio6 = (iAleatorio6 /10) ;



    iCompa = (iAleatorio * iAleatorio3)  + (iAleatorio2 *  iAleatorio4) ;
    cout << "\n\n\t\t\t\t\t\t " << iAleatorio << "x + " << iAleatorio2 << "y = " << iCompa;

    iCompa2 = (iAleatorio5 * iAleatorio3)  + (iAleatorio6 *  iAleatorio4) ;
    cout << "\n\n\t\t\t\t\t\t " << iAleatorio5 << "x + " << iAleatorio6 << "y = " << iCompa2;



    cout << "\n\n\n\n\n\t\t\t\t Digite a resposta: ";
    cout << " X = ";

    cin >> iResp;
    cout << "                                                     Y = ";

    cin >> iResp2;
    cout << "\n";



    if ( iResp == iAleatorio3 && iResp2 == iAleatorio4 )
    {
     cout <<  "\n\n\n\n\t\t\t\t\t  PARABÉNS, VOCÊ ACERTOU! ";
     iPontos = iPontos + 10;
     cout << "\n\n\n\n\t\t\t\t\t  Você ganhou 10 pontos!\n\n\n" << endl;
    }
   else

    {
       cout << "\n\n\t\t                           Você errou... Perdeu 5 pontos! :(\n\n\n";
       iPontos = iPontos - 5;
    }

    system("pause");
    system("cls");





}

    cout << fixed << setprecision(2);


    return 0;
}
