/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 19
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

     float fLarg = 0;
     float fComp = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Qual a largura do cômodo? ";
    cin  >> fLarg;

    cout << " Qual o comprimento do cômodo? ";
    cin  >> fComp;

    cout << " A iluminação deste cômodo deverá ter uma potência de "
         << fLarg * fComp * 18
         << " W. "
         << endl;

    return 0;
}
