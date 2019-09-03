///**********************************************************
///- Autor: Gabriel Oliveira
///- Descrição: Lista 3 - Exercício 6
///**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 1;
    int ip = 0;
    int iv = 0;
    char cescolha = 0;
    float fvalor = 0;
    float fvalorpt = 0;
    float fvalorvt = 0;
    int iN = 0;
    string sEscolha;


    cout<<"me diga seu nome: ";
    cin>>sEscolha;
    cout<<"sao quantas prestacoes sr(a)? "<<sEscolha<<": ";
    cin>>iN;
    iN=iN+1;
    while (i<iN)
        {
        cout<<"preco da sua "<<i<< " compra:                                    " <<"\n";
        cin>>fvalor;
        cout<<"sua escolha de pagamento:\n a prazo(p); a vista(v);                                    \ntotal de prestacoes ate agora:"   <<i<<"\n total de prestacoes a vista"<<iv<<"\n total de prestacoes a prazo "<<ip<<"\n";
        cin>>cescolha;

        switch(tolower(cescolha))
            {
            case 'p':
                fvalorpt=fvalor+fvalorpt;
                ip=ip+1;
                i=i+1;
                cout<<"voce escolheu pagar a prazo. SUA compra total a prazo esta em R$"<<fvalorpt<< "\n\n";
                break;
            case 'v':
                fvalorvt=fvalor+fvalorvt;
                iv=iv+1;
                i=i+1;
                cout<<"voce escolheu pagar a vista. SUA compra total a vista esta em R$"<<fvalorvt<< "\n\n";
                break;
            }
        }

    cout<<"total de prazos "<<ip<<"\n valor total: "<<fvalorpt<<"\n";
    cout<<"total de vista  "<<iv<<"\n valor total: "<<fvalorvt;
}
