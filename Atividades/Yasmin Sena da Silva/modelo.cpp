/**********************************************************
- Autor:     Yasmin Sena
- Descrição: subitração
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int iMinfinal = 60;
int iMinatual = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "digite o minuto atual ";
cin  >> iMinatual;

cout << "faltam "
     << iMinfinal - iMinatual
     << " minutos para as quatro horas da tarde. Isso é tudo pessoals2";
    return 0;
}
