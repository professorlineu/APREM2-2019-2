/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fLitros = 0;

float fEficiencia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Quantos litros de combústivel estão no tanque do seu carro? ";
cin >> fLitros;

cout << "Quantos km seu carro percorre com 1 litro? ";
cin >> fEficiencia;

cout << "Você pode percorrer "
     << fLitros * fEficiencia
     << " km."
     << endl;


    return 0;

}
