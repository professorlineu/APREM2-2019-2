/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fcomodo1=0;
float fcomodo2=0;
float fareatotal=0;
float fconsumo=0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

cout << " informe a área do comodo 1";
cin >> fcomodo1;
cout << " informe a área do comodo 2 ";
cin >> fcomodo2;

fareatotal=fcomodo1*fcomodo2;

fconsumo=fareatotal*18;

cout << "o consumo total em W será de " << fconsumo << endl;


    return 0;
}
