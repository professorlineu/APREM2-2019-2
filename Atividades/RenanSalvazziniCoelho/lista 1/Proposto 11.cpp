/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Proposto 11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fdmaior = 0 ;
    float fdmenor = 0 ;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a medida da diagonal maior do seu losango : ";
    cin >> fdmaior;

    cout << " Digite a medida da diagonal menor do seu losango :  ";
    cin >> fdmenor;

    cout << " A área do seu losango é :"
        << (fdmaior * fdmenor) / 2
        <<" unidades de área "
         << endl;
    return 0;
}
