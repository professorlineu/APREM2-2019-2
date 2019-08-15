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
int iAngulo1 = 0;

int iAngulo2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Qual é o valor do primeiro ângulo? ";
cin >> iAngulo1;

cout << "Qual é o valor do segundo ângulo? ";
cin >> iAngulo2;

cout << "O valor do terceiro ângulo é "
     << 180-iAngulo1-iAngulo2
     << " graus."
     << endl;

    return 0;
}
