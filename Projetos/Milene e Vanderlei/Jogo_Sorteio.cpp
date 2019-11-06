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


int main(void)
{
    int iEscolha = 0;
    int iAleatorio = 0;
    int iNumero = 0;
    int iJR =0;

    setlocale(LC_ALL,"");
    system("color F1");

    inter(iJR, iEscolha, iNumero, iAleatorio);

}


void inter(int iJR, int iEscolha, int iNumero, int iAleatorio)
{
system("cls");
cout<< " 1-Jogar \n 2-Regras\n ";
    cin>> iJR;

     if (iJR == 1)
    {
    cout << "Escolha seu nível de dificuldade:\n";
    cout << "1- Fácil \n2-Normal \n3- Difícil\n";
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
    <<"\n1- Você terá um determinado tempo para advinhar um número escolhido aleatoriamente"
    <<"\n2- Deve-se escrever números dentro dos pré-definidos"
    <<"\n3- Caso não consiga advinhar o número antes do tempo acabar, você terá de refazer o nível\n\n";
    }


 void interfacil (int iNumero, int iAleatorio)
 {
    srand(time(NULL)); //Evita que o número sorteado seja sempre o mesmo a cada execução

    iAleatorio = rand() % 50 + 1; //Gera um número aleatório

    //cout << "O número sorteado foi: " << iAleatorio << endl;

    do
    {
        cout << "Informe um valor de 1 a 50: ";
        cin >> iNumero;

        if (iAleatorio > iNumero)
        {
            cout << "Pensei em um número MAIOR!" << endl;
        }
        else if (iAleatorio < iNumero)
        {
            cout << "Pensei em um número MENOR!" << endl;
        }
    


 void internormal (int iNumero, int iAleatorio)
 {
    srand(time(NULL)); //Evita que o número sorteado seja sempre o mesmo a cada execução

    iAleatorio = rand() % 250 + 1; //Gera um número aleatório

    //cout << "O número sorteado foi: " << iAleatorio << endl;

    do
    {
        cout << "Informe um valor de 1 a 250: ";
        cin >> iNumero;

        if (iAleatorio > iNumero)
        {
            cout << "Pensei em um número MAIOR!" << endl;
        }
        else if (iAleatorio < iNumero)
        {
            cout << "Pensei em um número MENOR!" << endl;
        }
        else
        {
            cout << "Parabéns, você acertou!" << endl;
        }
    }
    while (iAleatorio != iNumero);
}


 void interdificil (int iNumero, int iAleatorio)
 {
    srand(time(NULL)); //Evita que o número sorteado seja sempre o mesmo a cada execução

    iAleatorio = rand() % 500 + 1; //Gera um número aleatório

    //cout << "O número sorteado foi: " << iAleatorio << endl;

    do
    {
        cout << "Informe um valor de 1 a 500: ";
        cin >> iNumero;

        if (iAleatorio > iNumero)
        {
            cout << "Pensei em um número MAIOR!" << endl;
        }
        else if (iAleatorio < iNumero)
        {
            cout << "Pensei em um número MENOR!" << endl;
        }
        else
        {
            cout << "Parabéns, você acertou!" << endl;
        }
    }
    while (iAleatorio != iNumero);
}    else
        {
            cout << "Parabéns, você acertou!" << endl;
        }
    }
    while (iAleatorio != iNumero);
}


 void internormal (int iNumero, int iAleatorio)
 {
    srand(time(NULL)); //Evita que o número sorteado seja sempre o mesmo a cada execução

    iAleatorio = rand() % 250 + 1; //Gera um número aleatório

    //cout << "O número sorteado foi: " << iAleatorio << endl;

    do
    {
        cout << "Informe um valor de 1 a 250: ";
        cin >> iNumero;

        if (iAleatorio > iNumero)
        {
            cout << "Pensei em um número MAIOR!" << endl;
        }
        else if (iAleatorio < iNumero)
        {
            cout << "Pensei em um número MENOR!" << endl;
        }
        else
        {
            cout << "Parabéns, você acertou!" << endl;
        }
    }
    while (iAleatorio != iNumero);
}


 void interdificil (int iNumero, int iAleatorio)
 {
    srand(time(NULL)); //Evita que o número sorteado seja sempre o mesmo a cada execução

    iAleatorio = rand() % 500 + 1; //Gera um número aleatório

    //cout << "O número sorteado foi: " << iAleatorio << endl;

    do
    {
        cout << "Informe um valor de 1 a 500: ";
        cin >> iNumero;

        if (iAleatorio > iNumero)
        {
            cout << "Pensei em um número MAIOR!" << endl;
        }
        else if (iAleatorio < iNumero)
        {
            cout << "Pensei em um número MENOR!" << endl;
        }
        else
        {
            cout << "Parabéns, você acertou!" << endl;
        }
    }
    while (iAleatorio != iNumero);
}
