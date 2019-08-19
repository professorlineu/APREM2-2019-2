/**********************************************************
- Autor:     Mário Neto
- Descrição: conversão de temperatura
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fangulo=0;
float fdistescadaaparede=0;
float fmedidadadaescada=0;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 0b");

    //Código do programa

cout << " informe o ângulo horizontal ";
cin >> fangulo;
cout << " informe a distância da escada à parede ";
cin >> fdistescadaaparede;

fmedidadadaescada= fdistescadaaparede/(cosine*fangulo);

cout << "a mediada da escada é " << fmedidadadaescada;

    return 0;
}
