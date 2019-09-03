/**********************************************************
- Autor: Augusto N Almeida
- Descrição: Exercicio 20 lista 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h> // comando toupper ou tolower
using namespace std;

int main()
{
    int iEscolha;
    float f1=0;
    float f2 =0;
    float f3=0;
    float fp1=0;
    float fp2=0;
    float fp3=0;



    setlocale(LC_ALL,"");
    system("color F1");

    cout << "----------------------------------------\n\n";
    cout << "1 - Media aritimetica\n\n";
    cout << "2 - Media ponderada \n\n";
    cout << "3 - Sair\n\n";
    cout << "----------------------------------------\n\n";

    cout << "Opção: ";
    cin >> iEscolha;

    switch(iEscolha)
    {
        case 1 :
            cout <<" Voce escolheu media aritimetica"<< endl;
            cout << "digite duas notas \n";
            cin>> f1;
            cin>> f2;
            cout<<" Sua media e :" << (f1+f2)/2 << endl;
            break;
        case 2:
            cout <<" Voce escolheu media ponderada "<< endl;
            cout << "digite as notas\n";
            cin>> f1;
            cout<<"digite o peso da nota"<<endl;
            cin>>fp1;

            cout << "digite as notas\n";
            cin>> f2;
            cout<<"digite o peso da nota" <<endl;
            cin>>fp2;

            cout << "digite as notas\n";
            cin>> f3;
            cout<<"digite o peso da nota" <<endl;
            cin>>fp3;
            cout<< "sua media e de :"<< ((f1*fp1)+(f2*fp2)+(f3*fp3))/(fp1+fp2+fp3) <<endl;

            break;
        case 3 :
            cout << "Obrigado pela preferência!\n";
            break;
        default:
            cout << "Valor Inválido!\n";
    }
}
