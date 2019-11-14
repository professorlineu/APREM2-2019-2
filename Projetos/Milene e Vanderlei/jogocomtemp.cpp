#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <time.h>
#include<windows.h>
using namespace std;

void interfacil (int iNumero, int iAleatorio );
void internormal (int iNumero, int iAleatorio);
void interdificil (int iNumero, int iAleatorio);
void inter(int iJR, int iEscolha,int iNumero, int iAleatorio);
void REGRA(int iEscolha);
void timeover();

int main(void)
{
    int iEscolha = 0;
    int iAleatorio = 0;
    int iNumero = 0;
    int iJR =0;

    setlocale(LC_ALL,"");
    system("color b5");

    inter(iJR, iEscolha, iNumero, iAleatorio);

}


void inter(int iJR, int iEscolha, int iNumero, int iAleatorio)
{
system("cls");
cout<< " 1-Jogar \n 2-Regras\n ";
    cin>> iJR;

     if (iJR == 1)
    {
    cout << "Escolha seu n�vel de dificuldade:\n";
    cout << "1- F�cil \n2-Normal \n3- Dif�cil\n";
    cin >> iEscolha;

    if(iEscolha==1)
    {
        interfacil(iNumero, iAleatorio);
    }

    else if(iEscolha==2)
    {
        internormal(iNumero, iAleatorio);
    }

    else
    {
        interdificil(iNumero, iAleatorio);
    }
    }

     if ( iJR ==2)
    {
         REGRA(iJR);
    {
        system("pause");

        inter(iJR, iEscolha, iNumero, iAleatorio);
    }
    }
}

void REGRA(int iEscolha)
{
 system("cls");

cout<<"REGRAS:"
    <<"\n1- Voc� ter� um determinado tempo para advinhar um n�mero escolhido aleatoriamente"
    <<"\n2- Deve-se escrever n�meros dentro dos pr�-definidos"
    <<"\n3- Caso n�o consiga advinhar o n�mero antes do tempo acabar, voc� ter� de refazer o n�vel\n\n";
    }


 void interfacil (int iNumero, int iAleatorio)
 {

    srand(time(NULL)); //Evita que o n�mero sorteado seja sempre o mesmo a cada execu��o

    iAleatorio = rand() % 50 + 1; //Gera um n�mero aleat�rio

    //cout << "O n�mero sorteado foi: " << iAleatorio << endl;
    clock_t tInicio;
    tInicio=clock();
    do
    {

        cout << "SEU TEMPO ATUAL: \t"<<(clock()-tInicio)/1000<<" Seg";
        cout << "\nInforme um valor de 1 a 50: ";

        cin >> iNumero;

        if((clock()-tInicio)>15000){timeover();}

        if (iAleatorio > iNumero)
        {
            cout << "Pensei em um n�mero MAIOR!" << endl;
        }
        else if (iAleatorio < iNumero)
        {
            cout << "Pensei em um n�mero MENOR!" << endl;
        }
        else
        {
            cout << "Parab�ns, voc� acertou!" << endl;
        }
    }
    while (iAleatorio != iNumero&&(clock()-tInicio)<15000);
}


 void internormal (int iNumero, int iAleatorio)
 {
    srand(time(NULL)); //Evita que o n�mero sorteado seja sempre o mesmo a cada execu��o

    iAleatorio = rand() % 250 + 1; //Gera um n�mero aleat�rio

    //cout << "O n�mero sorteado foi: " << iAleatorio << endl;
    clock_t tInicio;
    tInicio=clock();
    do
    {

        cout << "SEU TEMPO ATUAL: \t"<<(clock()-tInicio)/1000<<" Seg";
        cout << "\nInforme um valor de 1 a 250: ";

        cin >> iNumero;

        if((clock()-tInicio)>15000){timeover();}

        if (iAleatorio > iNumero)
        {
            cout << "Pensei em um n�mero MAIOR!" << endl;
        }
        else if (iAleatorio < iNumero)
        {
            cout << "Pensei em um n�mero MENOR!" << endl;
        }
        else
        {
            cout << "Parab�ns, voc� acertou!" << endl;
        }
    }
    while (iAleatorio != iNumero&&(clock()-tInicio)<15000);
}


 void interdificil (int iNumero, int iAleatorio)
 {
    srand(time(NULL)); //Evita que o n�mero sorteado seja sempre o mesmo a cada execu��o

    iAleatorio = rand() % 500 + 1; //Gera um n�mero aleat�rio

    //cout << "O n�mero sorteado foi: " << iAleatorio << endl;
    clock_t tInicio;
    tInicio=clock();
    do
    {

        cout << "SEU TEMPO ATUAL: \t"<<(clock()-tInicio)/1000<<" Seg";
        cout << "\nInforme um valor de 1 a 500: ";

        cin >> iNumero;

        if((clock()-tInicio)>15000){timeover();}

        if (iAleatorio > iNumero)
        {
            cout << "Pensei em um n�mero MAIOR!" << endl;
        }
        else if (iAleatorio < iNumero)
        {
            cout << "Pensei em um n�mero MENOR!" << endl;
        }
        else
        {
            cout << "Parab�ns, voc� acertou!" << endl;
        }
    }
    while (iAleatorio != iNumero&&(clock()-tInicio)<15000);
}

void timeover(){

    int iJR, iEscolha, iNumero, iAleatorio;
cout<<" Seu tempo acabou :( \n";
system("pause");
inter(iJR, iEscolha, iNumero, iAleatorio);
}
