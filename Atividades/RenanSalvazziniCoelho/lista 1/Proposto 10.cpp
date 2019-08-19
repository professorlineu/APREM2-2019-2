/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Proposto 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float flado = 0 ;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a medida de um lado do quadrado : ";
    cin >> flado;
    cout << " A área do quadro é de :  "
        << flado * flado
        <<" unidades de área "
         << endl;
    return 0;
}
