/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Área losango
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fdiagonal1 = 0;
    float fdiagonal2 = 0;

   //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a diagonal maior do losango: ";
    cin  >> fdiagonal1;
    cout << "Insira a sua diagonal menor: ";
    cin  >> fdiagonal2;
    cout << "A área do losango é de "
         << ( fdiagonal1 * fdiagonal2 ) / 2
         << " unidades de área."
         << endl;


    return 0;
}
