/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fPeso=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Qual é seu peso em quilogramas ? ";
cin >> fPeso;

cout << "Seu peso em gramas é "
     << fPeso*1000
     << "g"
     << endl;

    return 0;
}
