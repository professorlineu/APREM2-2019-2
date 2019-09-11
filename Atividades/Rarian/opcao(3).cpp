/**********************************************************
- Autor:     Rarian
- Descrição: Escolha a opção
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    //Declaração de variáveis
    int i = 0;
    int d = 0;
    int iopcao = 0;
    float fnota = 0;
    float fnota2 = 0;
    float fsoma = 0;
    float fsomapeso = 0;
    float fpeso = 0;
    float fmedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    while (d !=1)
    {
        cout << "Escolha uma das opções a seguir:\n";
        cout << "/********************************************************** \n";
        cout << "1. Media aritmética \n";
        cout << "2. Media ponderada \n";
        cout << "3. Sair \n";
        cout << "**********************************************************/ \n";
        cout << "Digite a opção escolhida: ";
        cin >> iopcao;



        switch (iopcao)
        {
        case 1:
            while (fnota !=-1)
            {
                system("cls");
                cout << "Você escolheu a opção de Media aritmética. Para finalizar digite -1. \n";
                cout << "Digite as notas: ";
                cin >> fnota;
                if (fnota !=-1)
                {
                fsoma = fsoma+fnota;
                i++;
                }
                if (fnota == -1)
                {
                    system("cls");
                    --i;
                    fmedia = fsoma/i;
                    cout << " A sua media é " << fmedia << ".\n";
                }

            } // fim do while 1
            break;

        case 2:
            while ( fnota2!= -1)
            {
                system("cls");
                cout << "Você escolheu a opção de Media ponderada. Para finalizar digite -1. \n";
                cout << "Digite as notas: ";
                cin >> fnota2;
                if (fnota2!= -1)
                {cout << "Digite o peso desta nota: ";
                cin >> fpeso;
                fsoma = fsoma+(fnota2*fpeso);
                fsomapeso = fsomapeso + fpeso;
                }
                 if (fnota2 == -1)
                {
                    system("cls");
                    fmedia = fsoma/fsomapeso;
                    cout << " A sua media é " << fmedia << ".\n";

                }
            }

             // fim do while 2
            break;

        case 3:
            system("cls");
            cout << "Obrigado pela preferência.";
            ++d;
            break;

        default:
            cout << "Opção inválida.\n";
            system("pause");
            system("cls");
            break;

        } // fim do switch

    } // fim do while



    return 0;
}
