/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 7 - Este programa determina seu peso se você engordasse 15% ou 20%.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fPeso = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Quantos kg você pesa agora? ";
cin >> fPeso;

cout << "Se você engordasse 15%, seu peso seria "
     << fPeso + (fPeso*15/100)
     << " kg."
     << endl;

cout << "se engordasse 20%, você pesaria "
     << fPeso + (fPeso*20/100)
     << " kg."
     << endl;


    return 0;

}
