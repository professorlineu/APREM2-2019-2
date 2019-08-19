/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Proposto 23
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fangulo1= 0 ;
    float fangulo2= 0 ;
    int  iangulo3= 180;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a medida do primeiro ângulo do triângulo: ";
    cin >> fangulo1;

    cout << "Digite a medida do segundo ângulo triãngulo: ";
    cin >> fangulo2;


    cout << "O terceiro ângulo do triângulo é:"
        << iangulo3 - fangulo1 - fangulo2
        << " Graus "
         << endl;
    return 0;
}

