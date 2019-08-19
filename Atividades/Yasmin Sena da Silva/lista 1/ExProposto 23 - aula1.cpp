/**********************************************************
- Autor:     Yasmin Sena
- Descrição: ângulos internos de um triângulo
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fangulo1 = 0;
    float fangulo2 = 0;
    float fangulo3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o primeiro e segundo ângulo do triângulo: ";
    cin  >> fangulo1;
    cout << " graus e ";
    cin  >> fangulo2;
    fangulo3 = 180 - fangulo1 - fangulo2;
    cout << "O terceiro ângulo será de "
         << fangulo3
         << " graus."
         << endl;


    return 0;
}
