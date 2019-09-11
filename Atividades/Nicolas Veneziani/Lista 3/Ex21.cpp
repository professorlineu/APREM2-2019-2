/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 21 da lista 3.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>


using namespace std;

main()
{
    int iEscolha = 0;
    int iCand1 = 0;
    int iCand2 = 0;
    int iCand3 = 0;
    int iCand4 = 0;
    int iNulo = 0;
    int iBranco = 0;
    int i = 0;


    setlocale(LC_ALL,"");
    system("color F1");

    for (i = 1; i < 5; i++)
    {
        system("cls");
        cout << "----------------------------------------\n\n";
        cout << "1 - Candidato 1\n\n";
        cout << "2 - Candidato 2\n\n";
        cout << "3 - Candidato 3\n\n";
        cout << "4 - Candidato 4\n\n";
        cout << "5 - Nulo\n\n";
        cout << "6 - Branco\n\n";
        cout << "----------------------------------------\n\n";

        cout << "Voto: " ;
        cin >> iEscolha;
        cout << endl << endl;

        if (iEscolha == 1)
        {
            iCand1++;
        }

        if (iEscolha == 2)
        {
            iCand2++;
        }

        if (iEscolha == 3)
        {
            iCand3++;
        }

        if (iEscolha == 4)
        {
            iCand4++;
        }

        if (iEscolha == 5)
        {
            iNulo++;
        }

        if (iEscolha == 6)
        {
            iBranco++;
        }
    }

    cout << "    Resultado dos votos: \n\n\n";
    cout << "    Candidato 1: " << iCand1 << " votos " << endl;
    cout << "    Candidato 2: " << iCand2 << " votos " << endl;
    cout << "    Candidato 3: " << iCand3 << " votos " << endl;
    cout << "    Candidato 4: " << iCand4 << " votos " << endl;
    cout << "    Nulos: " << iNulo << " votos " << endl;
    cout << "    Brancos: " << iBranco << " votos " << endl << endl;
    cout << "    A porcentagem de votos nulos sobre o total é: " << ((float)iNulo / 4) * 100 << "%" << endl;
    cout << "    A porcentagem de votos em branco sobre o total é: " << ((float)iBranco / 4) * 100 << "%\n\n\n";



     return 0;
}



