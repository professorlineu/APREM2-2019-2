
/**********************************************************
- Autor: Willian Paixão, Nicolas Veneziani e Leonardo Chagas
- Descrição: Menu
**********************************************************/

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <time.h>
#include<windows.h>
using namespace std;

int main()
{

    //Declaração de variáveis

   int iOpc = 0;


    setlocale(LC_ALL,"");
    system("color F1");





    cout << "\n\n\n\t\t\t\t\t\t Bem-vindo ao jogo!\n\n\n";

    Sleep(3000); // 3000 milesegundos = 3 segundos

    system("cls");

    cout << "\n\n\n\t\t\t\t\t    Escolha a dificuldade: \n\n\n";
    cout << "\n\n\n\t\t\t\t\t\t1 - Fácil\n\n\n";
    cout << "\n\n\n\t\t\t\t\t\t2 - Médio\n\n\n";
    cout << "\n\n\n\t\t\t\t\t\t3 - Difícil\n\n\n";
    cin >> iOpc;


    switch (iOpc)

    {
    case 1:
        system("cls");
        cout << "\n\n\n\t\t\t\t\t\t Escolhido modo Fácil !\n\n\n";
        cout << "\n\n\n\t\t\t\t\t\t\tBom jogo !\n\n\n";


        break;
    case 2:
        system("cls");
        cout << "\n\n\n\t\t\t\t\t\t Escolhido modo Médio !\n\n\n";

        cout << "\n\n\n\t\t\t\t\t\t\tBom jogo !\n\n\n";


        break;

    case 3:
         system("cls");
        cout << "\n\n\n\t\t\t\t\t\t Escolhido modo Difícil !\n\n\n";

        cout << "\n\n\n\t\t\t\t\t\t\tBom jogo !\n\n\n";


        break;

    case 4:


    default:
        system("cls");
        cout << "\n\n\n\t\t\t\t\t\t Opção Inválida !\n\n\n";



        break;
    }







}
