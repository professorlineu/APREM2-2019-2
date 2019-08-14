/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 4 - Este programa calcula a média ponderada.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fNota1 = 0;

float fNota2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Quanto você tirou na primeira prova? ";
cin >> fNota1;

cout << "Quanto você tirou na segunda prova? ";
cin >> fNota2;

cout << "Considerando que a primeira prova tem peso 2 e a segunda 3, sua média ponderada é de "
     << (fNota1*2 + fNota2*3)/5
     << " pontos."
     << endl;

    return 0;
}
