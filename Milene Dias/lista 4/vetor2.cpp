/**********************************************************
- Autor:      Lineu Lima
- Descrição:  Vetor
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int vet[6];
    int iContPar = 0;
    int icontImpar =0;


    // entrada de dados
    for (i = 0; i < 6; i++)
    {
        cout << "Valor " << i << ": ";
        cin >> vet[i];


        // verifica existência de números pares no vetor
        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }


        else
        {
            icontImpar++;
        }

    }
    for

      cout << " os numeros pares sao = " << <<endl;
      cout << "\n\n Total de pares = " << iContPar << endl;
      cout << " os numero impares sao = " <<  << endl;
      cout << " \n\n Total de impares = " << icontImpar << endl;
      return 0;


}





