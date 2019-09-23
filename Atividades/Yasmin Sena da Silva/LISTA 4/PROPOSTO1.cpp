/**********************************************************
- Autor:     Yasmin Sena da Silva
- Descrição: proposto 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int vet[6];
    int icontpar=0;
    int icontimpar=0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Informe 6 números:  " <<endl;

   for (i = 0; i < 6; i++)
    {
        cout << "O " << i + 1 << "° valor: ";
        cin >> vet[i];
    }

    cout << "os elementos do vetor são: \n";

    for (i = 0; i < 6; i++)
    {
        cout << vet[i] <<"\t";

    }

    cout << "\n\nOs números pares são:\n ";
    for (i = 0; i < 6; i++)
    {
    if (vet[i]%2==0)
    {
      cout << vet[i] <<"\t";
      icontpar++;
    }
    }
    cout<< "\nExistem "<< icontpar << " elementos pares.\n";

    cout << "\nOs números ímpares são: \n";
    for (i = 0; i < 6; i++)
    {
    if (vet[i]%2!=0)
    {
      cout << vet[i]<<"\t";
      icontimpar++;
    }
    }
    cout<< "\nExistem "<< icontimpar << " elementos ímpares.";

    return 0;
}
