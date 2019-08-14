/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 10 - Este programa calcula a Área de um Quadrado.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int iLado = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Digite a medida do lado do quadrado: ";
cin >> iLado;

cout << "A área do quadrado é igual a "
     << iLado * iLado
     << endl;

    return 0;
}
