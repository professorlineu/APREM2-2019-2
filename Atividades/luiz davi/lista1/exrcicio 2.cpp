/**********************************************************
- Autor:     Luiz Davi
- Descrição: Recebe três números e faz a multiplicação entre eles
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iNumero1 = 0;
    int iNumero2 = 0;
    int iNumero3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite tres números: ";

    cin >> iNumero1;
    cin >> iNumero2;
    cin >> iNumero3;

    cout << "A multiplicação desses numeros é : ";
    cout << iNumero1 * iNumero2 * iNumero3;

    return 0;
}
