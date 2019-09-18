
/**********************************************************
- Autor:     Nicole Oska
- Descrição:  L3 Ex 23
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int iEscolha = 0;
    int id = 0;
    float fSal = 0;
    int iMeses = 0;

    setlocale(LC_ALL,"");
    system("color 1f");


    while (id != 1)

    {

    cout << "----------------------------------------\n\n";
    cout << "1 - Novo salário\n\n";
    cout << "2 - Férias\n\n";
    cout << "3 - Décimo terceiro\n\n";
    cout << "4 - Sair\n\n";
    cout << "----------------------------------------\n\n";

        cout << "O que você deseja calcular?";
        cin >> iEscolha;

        cout << " Qual seu salário atual?";
            cin >> fSal;

        switch (iEscolha)
        {
        case 1:

          if (fSal < 210) 
          {
          cout << "\n O seu salário será de" << fSal * 1.15;
          system("pause");
          }
          else if ( fSal <= 600)
          {
          cout << "\n O seu salário será de" << fSal * 1.1;
          system("pause");
          }
          else 
        {
          cout << " O seu salário será de" << fSal * 1.05
          << endl;
        system("pause");
        }
        break;

      case 2:
        cout << "\n O valor das férias será de" << fSal + (fSal/3);
        system("pause");
        break;

      case 3:
       cout << "Quantos meses você trabalhou na empresa?";
        cin >> iMeses;

      if (iMeses < 12)
      cout << "\n O décimo terceiro equivale a " << fSal * (iMeses/12);

      else 
      cout << " Não é possível ultrapassar 12 meses!!";
        break;

      case 4:
            cout << "Programa encerrado.\n";
            id++;
            break;

        default:
            cout << "Valor Inválido!\n";
            system("pause");
            break;


        }
        system("cls");
    }

    return 0;
}
