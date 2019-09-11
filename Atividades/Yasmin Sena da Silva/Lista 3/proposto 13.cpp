/**********************************************************
- Autor:     Yasmin Sena
- Descrição: PROPOSTO 13
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
    int icount1 = 0;
    int icount2 = 0;
    int icount3 = 0;
    int icount4 = 0;
    float fnovopeso1 = 0;
    float fnovopeso2 = 0;
    float fnovopeso3 = 0;
    float fnovopeso4 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "informe a idade de 15 pessoas:  \n ";
    while (i < 15)
    {
        cout << "Digite a " << i + 1 << "º idade: ";
        cin >> idade;
        cout << "Seu peso: ";
        cin >>  ipeso;
        i = i + 1;
    if (0<idade<11)
    {
      icount1++;
      fnovopeso1= fnovopeso1+ ipeso;
    }
    else if (idade<21)
    {
        icount2++;
        fnovopeso2= fnovopeso2+ ipeso;
    }
    else if (idade< 31)
    {
        icount3++;
        fnovopeso3= fnovopeso3+ ipeso;
    }
    else
    {
        icount4++;
        fnovopeso4= fnovopeso4+ ipeso;
    }
    }
    cout << "A média dos pesos da faixa etária entre 1 a 10 anos é de "  <<(fnovopeso1/icount1) << " kg. \n";
    cout << "A média dos pesos da faixa etária entre 11 a 20 anos é de " <<(fnovopeso2/icount2) << " kg. \n";
    cout << "A média dos pesos da faixa etária entre 21 a 30 anos é de " <<(fnovopeso3/icount3) << " kg. \n";
    cout << "A média dos pesos da faixa etária maior que 31 anos é de "  <<(fnovopeso4/icount4) << " kg. \n";


    return 0;
}
