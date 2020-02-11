/**********************************************************
- Autor:     Vitor Kenzo, Clayton Cesar e Augusto
- Descrição:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
    int i=0;
    int iCont=0;
    float fPeso=1;
    float fAltura=0;
    int iMagrGrave=0;
    int iMagrMode=0;
    int iMagrLeve=0;
    int iNormal=0;
    int iObeLeve=0;
    int iObeMode=0;
    int iObeGrave=0;
    float fIMC=0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (fPeso != 0)
    {
    system("cls");

    cout << "\nDigite 0 para cancelar a entrada de dados.\n\n";

    cout << "Forneça o peso do " << i+1 << "° funcionário: ";
    cin  >> fPeso;

        if (fPeso != 0)
        {
        cout << "\nA altura: ";
        cin  >> fAltura;

        fIMC = fPeso / (fAltura*fAltura);

            if (fIMC <16)
            {
            iMagrGrave++;
            }
            else if (fIMC >= 16 && fIMC < 17)
            {
            iMagrMode++;
            }
            else if (fIMC >= 17 && fIMC < 18.5)
            {
            iMagrLeve++;
            }
            else if (fIMC >= 18.5 && fIMC < 25)
            {
            iNormal++;
            }
            else if (fIMC >= 25 && fIMC < 30)
            {
            iObeLeve++;
            }
            else if (fIMC >= 30 && fIMC < 35)
            {
            iObeMode++;
            }
            else
            {
            iObeGrave++;
            }

            i++;
            iCont++;

        }
        else
        {

        }

    }

    system("cls");

    cout << "\n\nO número de funcionários em cada classe de IMC é: \n\n"
         << "Magreza Grave:        " << iMagrGrave
         << "\nMagreza Moderada:     " << iMagrMode
         << "\nMagreza Leve:         " << iMagrLeve
         << "\nNormal:               " << iNormal
         << "\nObesidade Leve:       " << iObeLeve
         << "\nObesidade Moderada:   " << iObeMode
         << "\nObesidade Grave:      " << iObeGrave << "\n\n";

}
