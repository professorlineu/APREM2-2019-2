/**********************************************************
- Autor:     Thomas nicolas
- Descrição: Lista 03 ex 21
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

main()
{
    int iEscolha;

    //Declaração de variáveis

    int i = 0;
    int ia = 0;
    int icand1 = 0;
    int icand2 = 0;
    int icand3 = 0;
    int icand4 = 0;
    int inulo = 0;
    int ibranco = 0;

    //Configuração da tela de saída

    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (ia !=1)
    {
        system("cls");
    cout << "----------------------------------------\n\n";
    cout << "1 - Candidato 1\n\n";
    cout << "2 - Candidato 2\n\n";
    cout << "3 - Candidato 3\n\n";
    cout << "4 - Candidato 4\n\n";
    cout << "5 - Voto Nulo \n\n";
    cout << "6 - Voto em branco \n\n";
    cout << "0 - Para encerrar a votação \n\n";
    cout << "----------------------------------------\n\n";

    cout << "Opção: ";
    cin >> iEscolha;
        i++;
    switch(iEscolha)
    {
        case 1:
            cout << "Você votou no candidato 1\n";
            icand1++;
            cout << "Pressione enter para confirmar.";
            getch();
            break;
        case 2:
            cout << "Você votou no candidato 2!\n";
            icand2++;
            cout << "Pressione enter para confirmar.";
            getch();
            break;
        case 3:
            cout << "Você votou no candidato 3!\n";
            icand3++;
            cout << "Pressione enter para confirmar.";
            getch();
            break;
        case 4:
            cout << "Você votou no candidato 4!\n";
            icand4++;
            cout << "Pressione enter para confirmar.";
            getch();
            break;
        case 5:
            cout << "Você votou nulo!\n";
            inulo++;
            cout << "Pressione enter para confirmar.";
            getch();
            break;
        case 6:
            cout << "Você votou em branco!\n";
            ibranco++;
            cout << "Pressione enter para confirmar.";
            getch();
            break;
        case 0:
            cout << "Votação encerrada\n";
            ia++;
            break;
        default:
            cout << "Valor Inválido!\n";
            i--;
            break;
    }   //fim do switch
    }   //fim do while

    cout <<"O candidato 1 ficou com " << icand1 <<" votos.\n";
    cout <<"O candidato 2 ficou com " << icand2 <<" votos.\n";
    cout <<"O candidato 3 ficou com " << icand3 <<" votos.\n";
    cout <<"O candidato 4 ficou com " << icand4 <<" votos.\n\n";
    cout <<inulo <<" Pessoas votaram nulo. Sendo " <<(inulo*100)/i <<"% do total de votos\n\n";
    cout <<ibranco <<" Pessoas votaram em branco. Sendo "<<(inulo*100)/i <<"% do total de votos\n\n";
}
