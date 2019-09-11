
/**********************************************************
- Autor:     Nicole Oska
- Descrição:  L3 Ex 21
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int iVoto = 0;
    int id = 0;
    int iS1 = 0;
    int iS2 = 0;
    int iS3 = 0;
    int iS4 = 0;
    int iS5 = 0;
    int iS6 = 0;
    int iSTotal = 0;

    setlocale(LC_ALL,"");
    system("color 1f");


    while (id != 1)

    {

    cout << "----------------------------------------\n\n";
    cout << "1 - Candidato 1\n\n";
    cout << "2 - Candidato 2\n\n";
    cout << "3 - Candidato 3\n\n";
    cout << "4 - Candidato 4\n\n";
    cout << "5 - Nulo\n\n";
    cout << "6 - Branco \n\n";
    cout << "0 - Encerrar votação\n\n";
    cout << "----------------------------------------\n\n";

        cout << "Qual seu voto?";
        cin >> iVoto;

        switch (iVoto)
        {
        case 1:
            iS1 += 1;
            break;

        case 2:
            iS2 += 1;
            break;
        case 3:
            iS3 += 1;
            break;

        case 4:
            iS4 += 1;
            break;

        case 5:
            iS5 += 1;
            break;

        case 6:
            iS6 += 1;
            break;

        case 0 :
            cout << "Votação encerrada.\n";
            id++;
            break;

        default:
            cout << "Valor Inválido!\n";
            system("pause");
            break;


        }
        system("cls");
    }

 iSTotal = iS1 + iS2 + iS3 + iS4 + iS5 + iS6;

    cout << "\n A quantidade de votos para o candidato 1 é de " << iS1 << "!";
    cout << "\n A quantidade de votos para o candidato 2 é de " << iS2 << "!";
    cout << "\n A quantidade de votos para o candidato 3 é de " << iS3 << "!";
    cout << "\n A quantidade de votos para o candidato 4 é de " << iS4 << "!";
    cout << "\n A quantidade de votos nulos é de " << iS5 << " e representa " << (iS5 * 100)/ iSTotal << " %. ";
    cout << "\n A quantidade de votos brancos é de " << iS6 << " e representa " << (iS6 * 100)/ iSTotal << " %. ";

    return 0;
}
