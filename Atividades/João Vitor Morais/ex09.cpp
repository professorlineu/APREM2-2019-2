/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fbmaior = 0;
float fbmenor = 0;
float faltura = 0;
float farea   = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "apresente a base maior: ";
cin  >> fbmaior;

cout << "apresente a base menor: ";
cin  >> fbmenor;

cout << "apresente a altura: ";
cin  >> faltura;

farea = ((fbmaior + fbmenor) * faltura)/2;

cout << "essa é area do trapézio: "
     << farea
     << endl;

    return 0;
}
