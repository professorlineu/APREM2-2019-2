/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 19 - Este programa calcula a potência necessária para iluminar seu cômodo.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    //Declaração de variáveis
float fLado1= 0;

float fLado2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Para saber a potência em Watts necessária no seu cômodo, digite a medida em metros de um dos lados: ";
cin >> fLado1;

cout << "Digite a medida do outro lado: ";
cin >> fLado2;

cout << "A potência necessária no seu cômodo é de "
     << (fLado1*fLado2)*18
     << "W."
     <<endl;
    
    return 0;
}
