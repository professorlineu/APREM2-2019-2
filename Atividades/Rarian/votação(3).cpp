/**********************************************************
- Autor:     Rarian
- Descrição: Votação
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 1;
    float fvoto = 0;
    int iA = 0;
    int iB = 0;
    int iC = 0;
    int iD = 0;
    int inulo = 0;
    int ibranco = 0;
    int izero = 0;
    int iPnulo = 0;
    int iPbranco = 0;
    int iInvalido = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
     while (i > izero)
     {
    cout << "Para votar no candidato Ramon, digite 1.\n";
    cout << "Para votar na candidata Nicole, digite 2.\n";
    cout << "Para votar no candidato Rarian, digite 3.\n";
    cout << "Para votar no candidato Thomas, digite 4.\n";
    cout << "Para votar nulo, digite 5.\n";
    cout << "para votar em branco, digite 6.\n";
    cout << "Para finalizar a votação, digite 0.\n";


        cout << "Voto " << i << ": ";
        cin >> fvoto;

        i++;

         if (fvoto == 1 )
         {
            iA += 1;
         }

         if (fvoto == 2)
         {
             iB += 1;
         }

         if (fvoto == 3)
         {
             iC += 1;
         }

         if (fvoto == 4)
         {
             iD += 1;
         }

         if (fvoto == 5)
         {
             inulo += 1;
         }

         if (fvoto == 6)
         {
             ibranco += 1;
         }

         if (fvoto > 6 || fvoto < 0)
         {
             cout << "Voto invalido.\n";
             iInvalido += 1;
             getch();
         }

         if (fvoto == 0)
         {
             izero += i;
         }
         system("cls");

    } //Fim do laco

    system("cls");
    if (i > 2)
    {
         iPnulo = (float)inulo/(i-2-iInvalido)*100;
    iPbranco = (float)ibranco/(i-2-iInvalido)*100;
    }


    cout << "O candidato Ramon teve " << iA << " votos.\n";
    cout << "A candidata Nicole teve " << iB << " votos.\n";
    cout << "O candidato Rarian teve " << iC << " votos.\n";
    cout << "O candidato Thomas teve " << iD << " votos.\n";
    cout << inulo << " votaram nulo.";
    cout << " Sendo " << iPnulo << " porcento do total dos votos.\n";
    cout << ibranco << " votaram em branco.";
    cout << " Sendo " << iPbranco << " porcento do total dos votos.\n";


    if (iA>iB && iA>iC && iA>iD)
    {
        cout << "\nSaudamos a Ramon, o novo Deus Supremo do Universo.\n";
    }

    if  (iB>iA && iB>iC && iB>iD)
    {
        cout << "\nSaudamos a Nicole, a nova Deusa Suprema do Universo.\n";
    }

    if (iC>iB && iC>iA && iC>iD)
    {
        cout << "\nSaudamos a Rarian, o novo Deus Supremo do Universo.\n";
    }

    if (iD>iB && iD>iC && iD>iA)
    {
        cout << "\nSaudamos a Thomas, o novo Deus Supremo do Universo.\n";
    }

    return 0;
}

