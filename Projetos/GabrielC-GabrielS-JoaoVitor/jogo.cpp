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

void creditos(int iEscolha, char csal);
void interfaze(int iEscolha, char csal);
void interfazefacil(int iEscolha, char csal);
void interfazemedio(int iEscolha, char csal);
void interfazedificil(int iEscolha, char csal);
void interfazeplay(int iEscolha, char csal);
void errou();

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
        if(csal==27){interfaze(iEscolha, csal);}

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
        interfaze(iEscolha, csal);}
void interfaze(int iEscolha, char csal){
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
    if(iEscolha==1){interfazeplay(iEscolha, csal);}
    /*if(iEscolha==3){creditos(iEscolha);}*/
    if(iEscolha==4){creditos(iEscolha, csal);}
    if(iEscolha!=5){interfaze(iEscolha, csal);}
    if(iEscolha==5){exit(0);}

                }

void creditos(int iEscolha, char csal){
        system("cls");
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t-------------------------------------------------------------------------\n"
         << "\t\t\t\t-------------------------------------------------------------------------\n"
         << "\t\t\t\t-------------------        UM JOGO POR:         -------------------------\n"
         << "\t\t\t\t-------------------------------------------------------------------------\n"
         << "\t\t\t\t-------------------       GABRIEL CORREIL       -------------------------\n"
         << "\t\t\t\t-------------------       GABRIEL GUIMARAES     -------------------------\n"
         << "\t\t\t\t-------------------       JOAO VITOR            -------------------------\n"
         << "\t\t\t\t-------------------------------------------------------------------------\n"
         << "\t\t\t\t-------------------------------------------------------------------------\n\t\t\t\t";
         system("pause");
         interfaze(iEscolha, csal);}
void interfazeplay(int iEscolha, char csal){
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
                interfaze(iEscolha, csal);}
        if(iEscolha==1){
                interfazefacil(iEscolha, csal);}
        if(iEscolha==2){
                interfazemedio(iEscolha,csal);}
        if(iEscolha==3){
                interfazedificil(iEscolha, csal);}



                }
void interfazefacil(int iEscolha,char csal){
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

        cout<<"\n\n\n\n\n|----------------------------------------------------------------------------------------------------------------------------------------------------------------------|\n"
                        "|                                                                                                                                                                      |\n"
                        "|      Uma menina, um Espantalho, o Homem de Lata e o Leão Covarde. Quem diria que assistir esses personagens no filme O Mágico de Oz pudesse nos transportar realmente|\n"
                        "|               para esse incrível mundo. Complete a famosa frase dita por Dorothy: “Tenho a sensação de que não estamos mais no___________”.                          |\n"
                        "|                                                                                                                                                                      |\n"
                        "|----------------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
          cout<<"\t\t\t\t\t\t|-----------------------------|          |-----------------------------|\n";
          cout<<"\t\t\t\t\t\t|                             |          |                             |\n";
          cout<<"\t\t\t\t\t\t|           1-Texas           |          |          2-Kansas           |\n";
          cout<<"\t\t\t\t\t\t|                             |          |                             |\n";
          cout<<"\t\t\t\t\t\t|-----------------------------|          |-----------------------------|\n";
          cout<<"\t\t\t\t\t\t|-----------------------------|          |-----------------------------|\n";
          cout<<"\t\t\t\t\t\t|                             |          |                             |\n";
          cout<<"\t\t\t\t\t\t|          3-Arizona          |          |          4-Colorado         |\n";
          cout<<"\t\t\t\t\t\t|                             |          |                             |\n";
          cout<<"\t\t\t\t\t\t|-----------------------------|          |-----------------------------|\n";
          cout<<"\t\t\t\t\t\t                               respota: ";
          csal =getche();
        if(csal==27){interfaze(iEscolha, csal);}
          if(csal==1||csal==4||csal==3){
          errou();
          interfaze(iEscolha, csal);}
                  system("cls");



 cout<<"\n\n\n\n\n\t\t\t\t\t|-------------------------------------------------------------------|\n"
                 "\t\t\t\t\t|                                                                   |\n"
                 "\t\t\t\t\t|  Quantas notas musicais existem no nosso sistema tonal ocidental  |\n"
                 "\t\t\t\t\t|                                                                   |\n"
                 "\t\t\t\t\t|-------------------------------------------------------------------|\n";
          cout<<"\t\t\t\t\t\t|-----------------------------|         |-----------------------------|\n";
          cout<<"\t\t\t\t\t\t|                             |         |                             |\n";
          cout<<"\t\t\t\t\t\t|           6                 |         |            8                |\n";
          cout<<"\t\t\t\t\t\t|                             |         |                             |\n";
          cout<<"\t\t\t\t\t\t|-----------------------------|         |-----------------------------|\n";
          cout<<"\t\t\t\t\t\t|-----------------------------|         |-----------------------------|\n";
          cout<<"\t\t\t\t\t\t|                             |         |                             |\n";
          cout<<"\t\t\t\t\t\t|           7                 |         |            12               |\n";
          cout<<"\t\t\t\t\t\t|                             |         |                             |\n";
          cout<<"\t\t\t\t\t\t|-----------------------------|         |-----------------------------|\n";
          cout<<"\t\t\t\t\t\t                               respota: ";
          csal =getche();
        if(csal==27){interfaze(iEscolha, csal);}
          if(csal==1||csal==4||csal==3){
          errou();
          interfaze(iEscolha, csal);}
                  system("cls");

                            cout<<"\n\n\n\n\n\t\t\t\t\t|-----------------------------|\n"
          "\t\t\t\t\t|                             |\n"
          "\t\t\t\t\t|  Qual o principal EPI de laboratório?                         |\n"
          "\t\t\t\t\t|                             |\n"
          "\t\t\t\t\t|-----------------------------|\n";
    cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|           1-Jaleco          ||  2-  Relogio de bolso       |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|       4-Oculos de grau      ||   3-  Chave de fenda        |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t                            respota:                      ";
          csal =getche();
        if(csal==27){interfaze(iEscolha, csal);}
          if(csal==1||csal==4||csal==3){
          errou();
          interfaze(iEscolha, csal);}
        system("cls");


cout<<"\n\n\n\n\n\t\t\t\t\t|-----------------------------------------------------------|\n"
                "\t\t\t\t\t|                                                           |\n"
                "\t\t\t\t\t|  Qual time fez a maior goleada da historia do Brasil      |\n"
                "\t\t\t\t\t|                                                           |\n"
                "\t\t\t\t\t|-----------------------------------------------------------|\n";
    cout<<      "\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|           1-Bota Fogo       ||           3-Flamengo        |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|           2-Gremio          ||      4-Atletico Mineiro     |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t                            respota:                      ";
          csal =getche();
        if(csal==27){interfaze(iEscolha, csal);}
          if(csal==1||csal==4||csal==3){
          errou();
          interfaze(iEscolha, csal);}
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
        cout<<"\t\t\t\t|                       parabens, voce acertou todas!!! :D,                               |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                  proximo nivel.                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t___________________________________________________________________________________________\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
        system("pause");
        interfazemedio(iEscolha, csal);
        }



void interfazemedio(int iEscolha, char csal){
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
        cout<<"\t\t\t\t|                                    FASE MEDIA                                           |\n";
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



    cout<<"\n\n\n\n\n\t\t\t\t\t|---------------------------------|\n"
                    "\t\t\t\t\t|                                 |\n"
                    "\t\t\t\t\t|  Qual o nome cientifico da urina|\n"
                    "\t\t\t\t\t|                                 |\n"
                    "\t\t\t\t\t|---------------------------------|\n";
    cout<<"\t\t\t|--------------------------------------|   |----------------------------------------|\n";
    cout<<"\t\t\t|                                      |   |                                        |\n";
    cout<<"\t\t\t| 1-Ultra filtrado Glomerular dos rins |   |  2-  Super filtrado Glomerular dos rins|\n";
    cout<<"\t\t\t|                                      |   |                                        |\n";
    cout<<"\t\t\t|--------------------------------------|   |----------------------------------------|\n\n";
    cout<<"\t\t\t|--------------------------------------|   |----------------------------------------|\n";
    cout<<"\t\t\t|                                      |   |                                        |\n";
    cout<<"\t\t\t| 4-Super filtrado Glomerular do figado|   |             3-  Robson                 |\n";
    cout<<"\t\t\t|                                      |   |                                        |\n";
    cout<<"\t\t\t|--------------------------------------|   |----------------------------------------|\n";
    cout<<"\t\t\t                            respota:                      ";
          csal =getche();
        if(csal==27){interfaze(iEscolha, csal);}
          if(csal==1||csal==4||csal==3){
          errou();
          interfaze(iEscolha, csal);}
          system("cls");

                                      cout<<"\n\n\n\n\n\t\t\t\t\t|-----------------------------|\n"
          "\t\t\t\t\t|                             |\n"
          "\t\t\t\t\t|  Qual o jogo em que um ouriço azul foge de um doutor maluco      |\n"
          "\t\t\t\t\t|                             |\n"
          "\t\t\t\t\t|-----------------------------|\n";
    cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|          Sonic              ||           Flash             |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|           Crash             ||     Pacman                  |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t                            respota:                      ";
          csal =getche();
        if(csal==27){interfaze(iEscolha, csal);}
          if(csal==1||csal==4||csal==3){
          errou();
          interfaze(iEscolha, csal);}
          system("cls");


                                                cout<<"\n\n\n\n\n\t\t\t\t\t|-----------------------------|\n"
          "\t\t\t\t\t|                             |\n"
          "\t\t\t\t\t|  Qual destes jogos era comum em fliperamas:      |\n"
          "\t\t\t\t\t|                             |\n"
          "\t\t\t\t\t|-----------------------------|\n";
    cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|        Space Invaders       ||   Shadow of the colossus    |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|         Mario Bros          ||            Minecraft        |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t                            respota:                      ";
          csal =getche();
        if(csal==27){interfaze(iEscolha, csal);}
          if(csal==1||csal==4||csal==3){
          errou();
          interfaze(iEscolha, csal);}
          system("cls");


                                                          cout<<"\n\n\n\n\n\t\t\t\t\t|-----------------------------|\n"
          "\t\t\t\t\t|                             |\n"
          "\t\t\t\t\t|  Alguns meses têm 30 dias e outros, 31. Quantos meses têm 28 dias durante um período de três anos?:      |\n"
          "\t\t\t\t\t|                             |\n"
          "\t\t\t\t\t|-----------------------------|\n";
    cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|               5             ||              3              |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|               2             ||              6              |\n";
          cout<<"\t\t\t|                             ||                             |\n";
          cout<<"\t\t\t|-----------------------------||-----------------------------|\n";
          cout<<"\t\t\t                            respota:                      ";
          csal =getche();
        if(csal==27){interfaze(iEscolha, csal);}
          if(csal==1||csal==4||csal==3){
          errou();
          interfaze(iEscolha, csal);}
        system("cls");}

void interfazedificil(int iEscolha, char csal){
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
        cout<<"\t\t\t\t|                                     FASE DIFICL                                         |\n";
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

void errou(){
    system("cls");
    int itempo1=100;
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
        cout<<"\t\t\t\t|                                   voce errou sorry :(                                     |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        Sleep(itempo1);
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t|                                                                                         |\n";
        cout<<"\t\t\t\t___________________________________________________________________________________________\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
        system("pause");}
