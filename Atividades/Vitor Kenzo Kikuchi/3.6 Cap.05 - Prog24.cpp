/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 17 - Programa que determina a porcentagem de pessoas assistindo a cada um dos 4 canais diferentes.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int iCanal = 1;
    int iPessoas = 0;
    int iGlobo = 0;
    int iSBT = 0;
    int iRecord = 0;
    int iBand = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " 1 = Globo\n\n"
         << " 2 = SBT\n\n"
         << " 3 = Record TV\n\n"
         << " 4 = BAND TV\n"
         << endl;

    system("pause");

    while (iCanal!=0)
    {
    system("cls");

    cout << "Digite o número ZERO para encerrar a entrada de dados."
         << endl;

    cout << "\n\nQual Canal você está assistindo? ";
    cin  >> iCanal;

    cout << "\nQuantas pessoas estão assistindo? ";
    cin  >> iPessoas;

    if (iCanal == 1)
    {
    iGlobo += iPessoas;
    }
    else if (iCanal == 2)
    {
    iSBT += iPessoas;
    }
    else if (iCanal == 3)
    {
    iRecord += iPessoas;
    }
    else if (iCanal == 4)
    {
    iBand += iPessoas;
    }
    else if (iCanal > 4)
    {
    cout << "\n\nCanal inválido!\n" << endl;
    system("pause");
    }
    cout << "\n" << endl;
    }

    system("cls");

    cout << "\nA porcentagem de pessoas assistindo a Globo é de "
         << ((float)iGlobo/(iGlobo+iSBT+iBand+iRecord))*100
         << "%.\n"
         << endl;

    cout << "A porcentagem de pessoas assistindo a SBT é de "
         << ((float)iSBT/(iGlobo+iSBT+iBand+iRecord))*100
         << "%.\n"
         << endl;

    cout << "A porcentagem de pessoas assistindo a Record é de "
         << ((float)iRecord/(iGlobo+iSBT+iBand+iRecord))*100
         << "%.\n"
         << endl;

     cout << "A porcentagem de pessoas assistindo a Band é de "
         << ((float)iBand/(iGlobo+iSBT+iBand+iRecord))*100
         << "%.\n\n"
         << endl;

    return 0;
}
