/**********************************************************
- Autor: Augusto N Almeida
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fdeslocamento = 0;
float flitrosabstecidos =0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "quilometragem percorrida";
cin >> fdeslocamento;
cout << "litros abastecidos";
cin >> flitrosabstecidos;
cout <<" O consumo de seu veiculo foi de "
     <<fdeslocamento/flitrosabstecidos
     <<" KM/L"
     <<endl;


    return 0;
}
