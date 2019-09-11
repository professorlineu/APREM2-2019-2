/**********************************************************
- Autor:     Yasmin Sena
- Descrição: PROPOSTO 9
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
    float fmediaidade=0;
    int icount1 = 0;
    int icount2 = 0;
    int icount3 = 0;
    int inovaidade = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "informe a idade de 10 pessoas:  \n ";
    while (i < 10)
    {
        cout << "Digite a " << i + 1 << "º idade: ";
        cin >> idade;
        cout << "Seu peso: ";
        cin >>  ipeso;
        cout << "Sua altura: ";
        cin >> faltura;
        i = i + 1;
    inovaidade= inovaidade + idade;

    if (ipeso>90 && faltura < 1.5 )
    {
      icount1++;
    }
    else if ((10<idade<30) && faltura > 1.9)
    {
        icount2++;
    }

    if (faltura> 1.9)
    {
        icount3++;
    }
    }
     fmediaidade = (float)inovaidade/10;
    cout << "A média da idade é de " << fmediaidade << " anos. \n";
    cout << "Existem " << icount1 << " pessoas com peso superior a 90 kg e altura inferior a 1,50 metro. \n";
    cout << "A Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 é de " <<(float(icount2)/(icount3+icount2))*100 <<" % \n";

    return 0;
}
