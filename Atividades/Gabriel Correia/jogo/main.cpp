#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <string>
#include <time.h>
#include<windows.h>


using namespace std;

void creditos(int iEscolha);
void interfaze(int iEscolha);
void interfazefacil(int iEscolha);
void interfazemedio(int iEscolha);
void interfazedificil(int iEscolha);
void interfazeplay(int iEscolha);

int main(){

    setlocale(LC_ALL,"");
    system("color 1f");

    int iEscolha=0;
    int i=0;
    int itempo1=100;
    int itempo2=0;
    char csal;

    keybd_event ( VK_MENU, 0x36, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
    keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );

        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t___________________________________________________________________________________________\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t\t|                                    Bem-vindo ao jogo                                    |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t\t\t___________________________________________________________________________________________\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t";
        csal=getch();
        if(csal==27){interfaze(iEscolha);}

        if(iEscolha==5){
                return 0;}
        system("pause");
        system("cls");

        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t___________________________________________________________________________________________\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t|                              UM JOGO POR:                                               |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t|                             ->GABRIEL CORREIA SOARES                                    |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t|                             ->GABRIEL GUIMARAES DE OLIVEIRA                             |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t|                             ->JOAO VITOR MORAIS                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t\t___________________________________________________________________________________________\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";

        system("pause");
        system("cls");

            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t---------------------------------   Bem-vindo ao jogo   ---------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
            cout<<"espere ate completar todo o carregamento da tela inicial";
            cout<<"|***~~~~~~~~~~~~| 25%";
            Sleep(itempo2);
            system("cls");

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t---------------------------------   Bem-vindo ao jogo   ---------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";            cout<<"espere ate completar todo o carregamento da tela inicial";
            cout<<"|******~~~~~~~~~| 40%";
            Sleep(itempo2);
            system("cls");

        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t---------------------------------   Bem-vindo ao jogo   ---------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
            cout<<"espere ate completar todo o carregamento da tela inicial";
            cout<<"|*********~~~~~~| 65%";
            Sleep(itempo2);
            system("cls");

        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t---------------------------------   Bem-vindo ao jogo   ---------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
            cout<<"espere ate completar todo o carregamento da tela inicial";
            cout<<"|************~~~| 80%";
            Sleep(itempo2);
            system("cls");

        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t---------------------------------   Bem-vindo ao jogo   ---------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
            cout<<"espere ate completar todo o carregamento da tela inicial";
            cout<<"|**************~| 99%";
            Sleep(itempo2);
            system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t---------------------------------   Bem-vindo ao jogo   ---------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
            cout<<"espere ate completar todo o carregamento da tela inicial";
            cout<<"|***************| 100%";
            Sleep(itempo2);
            system("cls");

        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t---------------------------------   tenha um otimo jogo ---------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
        Sleep(itempo2);
        system("cls");
        interfaze(iEscolha);}
void interfaze(int iEscolha){
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t___________________________________________________________________________________________\n"
                                         << "\t\t\t\t\t-------------------------------------------------------------------------\n"
                                         << "\t\t\t\t\t-------------------          xxxxxxxxxxxxx              -----------------\n"
                                         << "\t\t\t\t\t-------------------------------------------------------------------------\n"
                                         << "\t\t\t\t\t-------------------    1-> Comecar um novo jogo  <-     -----------------\n"
                                         << "\t\t\t\t\t-------------------    2->    carregar jogo      <-     -----------------\n"
                                         << "\t\t\t\t\t-------------------    3->    classificacoes     <-     -----------------\n"
                                         << "\t\t\t\t\t-------------------    4->      Creditos         <-     -----------------\n"
                                         << "\t\t\t\t\t-------------------    5->        SAIR           <-     -----------------\n"
                                         << "\t\t\t\t\t-------------------------------------------------------------------------\n"
                                         << "\t\t\t\t\t                    Escolha uma opcao de jogo: ";
      cin>>iEscolha;
      if(iEscolha==1){
                cout<<"adas";
                interfazeplay(iEscolha);}
      /*if(iEscolha==3){
                cout<<"adas";
                creditos(iEscolha);}*/
    if(iEscolha==4){
                cout<<"adas";
                creditos(iEscolha);}
                interfaze(iEscolha);

                }

void creditos(int iEscolha){
        system("cls");
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t-------------------------------------------------------------------------\n"
         << "\t\t\t\t-------------------------------------------------------------------------\n"
         << "\t\t\t\t-------------------        UM JOGO POR:         -------------------------\n"
         << "\t\t\t\t-------------------------------------------------------------------------\n"
         << "\t\t\t\t-------------------       GABRIEL CORREIL       -------------------------\n"
         << "\t\t\t\t-------------------       GABRIEL GUIMARAES     -------------------------\n"
         << "\t\t\t\t-------------------       JOAO VITOR            -------------------------\n"
         << "\t\t\t\t-------------------------------------------------------------------------\n"
         << "\t\t\t\t-------------------------------------------------------------------------\n";
         system("pause");
         interfaze(iEscolha);}
void interfazeplay(int iEscolha){
        system("cls");
cout     << "\n\n\n\n\n\n\n\n\n\n\t\t-------------------------------------------------------------------------\n"
         << "\t\t-------------------------------------------------------------------------\n"
         << "\t\t-------------------------> Comecar um novo jogo<-------------------------\n"
         << "\t\t-------------------    1->       Facil         <-------------------------\n"
         << "\t\t-------------------    2->       Medio         <-------------------------\n"
         << "\t\t-------------------    3->       Dificil       <-------------------------\n"
         << "\t\t-------------------    4->       Voltar        <-------------------------\n"
         << "\t\t-------------------------------------------------------------------------\n"
         << "\t\t                    Escolha um modo de jogo: ";
         cin>>iEscolha;

        if(iEscolha==4){
                interfaze(iEscolha);}
        if(iEscolha==1){
                interfazefacil(iEscolha);}
        if(iEscolha==2){
                interfazemedio(iEscolha);}
        if(iEscolha==3){
                interfazedificil(iEscolha);}



                }
void interfazefacil(int iEscolha){
        system("cls");
        int itempo1=100;

        setlocale(LC_ALL,"");
        system("color a0");

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t___________________________________________________________________________________________\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                          VOCE ESCOLHEU A OPCAO FACIL                                    |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t___________________________________________________________________________________________\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
        system("pause");
        system("cls");

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t___________________________________________________________________________________________\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                       BORA COMECAR                                      |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t___________________________________________________________________________________________\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
        system("pause");
        system("cls");

        cout<<"\n\n\n\n\n\t\t\t\t\t|-----------------------------|\n"
          "\t\t\t\t\t|                             |\n"
          "\t\t\t\t\t|            texto            |\n"
          "\t\t\t\t\t|                             |\n"
          "\t\t\t\t\t|-----------------------------|\n";
    cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|            texto            ||            texto            |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|            texto            ||            texto            |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t                            respota:                      \n";
          cin>>iEscolha;
          if(iEscolha==1||iEscolha==4||iEscolha==3){interfaze(iEscolha);}






        }



void interfazemedio(int iEscolha){
        system("cls");
        int itempo1=100;

        setlocale(LC_ALL,"");
        system("color e0");

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t___________________________________________________________________________________________\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                          VOCE ESCOLHEU A OPCAO media                                    |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t___________________________________________________________________________________________\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
        system("pause");
        system("cls");}

void interfazedificil(int iEscolha){
        system("cls");
        int itempo1=100;
        setlocale(LC_ALL,"");
        system("color c0");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t___________________________________________________________________________________________\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                        VOCE ESCOLHEU A OPCAO dificil                                    |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t___________________________________________________________________________________________\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
        system("pause");
        system("cls");}
