/**********************************************************
- Autor:     Mário Neto
- Descrição: multiplicação de 3 variáveis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int inumber1=0;
    int inumber2=0;
    int inumber3=0;
    int imultiplicacao=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << " escolha o primeiro numero " ;
    cin >> inumber1;
    cout << " escolha o segundo numero " ;
    cin >> inumber2;
    cout << " escolha o terceiro numero " ;
    cin >> inumber3;
    imultiplicacao = inumber1*inumber2*inumber3;
    cout << " o produto é " << imultiplicacao ;



    return 0;

}
