
/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Raio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fraio = 0;
    float fcomprimento = 0;
    float farea = 0;
    float fvolume = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o raio: ";
    cin  >> fraio;
    fcomprimento = 2 * 3.14 * fraio;
    farea = 3.14 * fraio * fraio;
    fvolume = (3* 3.14 * fraio * fraio * fraio) / 4;
    cout << "Sua circunferência será "
         << fcomprimento;
    cout << " Sua área é: "
         << farea
         <<" unidades de área."
         << " E por fim, o volume será: "
         << fvolume
         <<" unidades de volume."
         << endl;


    return 0;
}
