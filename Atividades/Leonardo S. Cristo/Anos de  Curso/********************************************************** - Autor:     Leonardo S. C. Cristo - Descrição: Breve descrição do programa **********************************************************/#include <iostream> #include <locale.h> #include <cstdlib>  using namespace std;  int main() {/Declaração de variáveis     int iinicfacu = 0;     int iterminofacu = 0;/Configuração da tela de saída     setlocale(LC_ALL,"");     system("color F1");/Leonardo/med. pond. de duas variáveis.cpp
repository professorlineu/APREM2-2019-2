//ex. (4)

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnum1 = 0;
    float fnum2 = 0;
    float fnum3 = 0;
    double dnum4 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
      cout << "Entre com 1° nota (0-10) ";
      cin >> fnum1 ;

      cout << "Entre com 2° nota (0-10) ";
      cin >> fnum2 ;



       cout << "Resultado " << ( fnum1*0.4) + (fnum2*0.6) <<(".");



    return 0;
}
