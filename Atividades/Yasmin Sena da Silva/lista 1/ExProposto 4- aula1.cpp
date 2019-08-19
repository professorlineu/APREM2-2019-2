/**********************************************************
- Autor:     Yasmin Sena
- Descrição: média ponderada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnota1 = 0;
    float fnota2 = 0;
    float fpeso1 = 2;
    float fpeso2 = 3;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite sua primeira nota, sendo essa peso3: ";
    cin  >> fnota1;
    cout << "Insira sua segunda nota, contendo peso 3: ";
    cin  >> fnota2;
    cout << "Sua média ponderada é: "
         << ((fnota1 * fpeso1) + (fnota2 * fpeso2)) / (fpeso1 + fpeso2)
         << endl;


    return 0;
}
