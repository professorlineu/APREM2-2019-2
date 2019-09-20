/**********************************************************
- Autor: Leoanrdo S.
- Descrição: Ex 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int vet[5];
    int iSoma = 0;
   

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    for (i = 0; i < 5; i++)
    {
        cout << "Digite o " << i +1 << "ª número ";
        cin >> vet[i]  ;
    }

    for (i = 0; i < 5; i++)
    {



        iSoma = iSoma + vet[i];


    }
    cout << vet[0] << " + " << vet[1] << " + " << vet[2] << " + " << vet[3] << " + " << vet[4];


    cout << " = " << iSoma;




    return 0;
}
