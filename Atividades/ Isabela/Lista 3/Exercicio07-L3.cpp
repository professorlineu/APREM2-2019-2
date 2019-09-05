/**********************************************************
- Autor:     Lineu Lima
- Descrição: Comando while
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variávei
    int i = 0;
    float fIdade = 0;
    float fAltura = 0;
    float fPeso = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F3");

    //Código do programa

    while (i < 2)
 {
        cout << "Digite sua idade: " ;
        cin >> fIdade;

        cout << "Digite sua altura: " ;
        cin >> fAltura;

        cout << "Digite sua Peso: " ;
        cin >> fPeso;
        i++;
 }
