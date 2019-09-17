/**********************************************************
- Autor:     Willian Paixao da Silva
- Descrição: Atvidade 1
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
    int vet[6];
    int iSoma = 0;
    int iContPar = 0;
    int iContImp = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    for (i = 0; i < 6; i++)
    {
        cout << "Digite o " << i +1 << "ª valor ";
        cin >> vet[i];
    }

    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }
        else
        {
            iContImp++;
        }
    }

    cout << "\n\nTotal de números pares = " << iContPar << endl;
    cout << "\n\nTotal de números ímpares = " << iContImp << endl;




    return 0;
}
