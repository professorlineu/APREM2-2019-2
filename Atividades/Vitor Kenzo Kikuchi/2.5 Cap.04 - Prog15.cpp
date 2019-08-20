/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 10 - Esse programa calcula o preço do seu carro levando em conta os impostos e a taxa do distribuidor.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color 1F");

     //Declaração de variáveis
 float fCarro = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 1F");

    //Código do programa
 cout << "Qual é o preço de fábrica do carro que você pretende comprar? ";
    cin  >> fCarro;

    if (fCarro < 12000)
    {
    cout << "Como você está isento da porcentagem dos impostos, apenas a porcentagem do distribuidor é considerada. O preço final será de "
         << fCarro*5/100 +fCarro
         << " reais."
         << endl;
    }
    else if (fCarro > 11999 && fCarro < 25001)
    {
    cout << "Considerando a taxa do distribuidor e dos impostos, o preço final será de "
         << fCarro*10/100 + fCarro*15/100 + fCarro
         << " reais."
         << endl;
    }
    else
    {
    cout << "Levando em conta os impostos e a porcentagem do distribuidor, o preço final será de "
         << fCarro*15/100 + fCarro*20/100 + fCarro
         << " reais."
         << endl;
    }

    return 0;
}
