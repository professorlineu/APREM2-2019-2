/**********************************************************
- Autor:     clayton
- Descrição: trasforma kg em gramas exercício 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
        int ipeso = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o seu peso em kilos (kg) :";
    cin >> ipeso;
    cout << endl;
    cout << "seu peso em gramas vale: " << ipeso * 1000;

    return 0;

}
