#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fN1 = 0;
    float fN2 = 0;
    int iP1 = 2;
    int iP2 = 3;
    int iDiv = 5;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a primeira nota de peso 2: ";
    cin >> fN1;
    cout << "Digite a segunda nota de peso 3: ";
    cin >> fN2;

    cout << "A médiadas notas é de: "
         << ((fN1 * iP1) + (fN2 * iP2)) / iDiv
         << endl;


    return 0;
}
