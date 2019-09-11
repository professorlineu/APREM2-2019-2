/**********************************************************
- Autor:     Yasmin Sena
- Descrição: PROPOSTO7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int idade = 0;
    int ipeso=0;
    float faltura = 0;
    float fmedialtura=0;
    int icount1 = 0;
    int icount2 = 0;
    int icount3 = 0;
    float fnovaltura = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "informe a idade de 5 pessoas:  \n ";
    while (i < 5)
    {
        cout << "Digite a " << i + 1 << "º idade: ";
        cin >> idade;
        cout << "Seu peso: ";
        cin >>  ipeso;
        cout << "Sua altura: ";
        cin >> faltura;
        i = i + 1;


    if (idade>50)
    {
      icount1++;
    }
    else if (10<idade && idade<20)
    {
        icount2++;
        fnovaltura= fnovaltura + faltura;
    }
    if (ipeso< 40)
    {
        icount3++;
    }
    }
     fmedialtura = fnovaltura/icount2;
    cout << "Existem " << icount1 << " pessoas com idade superior a 50 anos. \n";
    cout << "A média das alturas das pessoas com idade entre 10 e 20 anos é de " << fmedialtura << " metros. \n";
    cout << "A porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas é de " << ((float)icount3/5)*100<<" % \n";

    return 0;
}
