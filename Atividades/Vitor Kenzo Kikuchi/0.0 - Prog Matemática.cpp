/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath> // comandos pow, sqrt, cbrt, etc

using namespace std;

int main()
{
    //Declaração de variáveis
    float fBase = 0;
    float fExpoente = 0;
    float fResul = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o primeiro número (Base): ";
    cin  >> fBase;

    cout << "Digite o segundo número (Expoente): ";
    cin  >> fExpoente;

    fResul = pow(fBase, fExpoente);

    cout << "\n\nPotência: "
         << fResul
         << "\n"
         << endl;

    cout << "Raiz quadrada: "
         << sqrt(fResul)
         << "\n"
         << endl;

    cout << "Raiz cúbica: "
         << cbrt(fResul)
         << endl;

    return 0;
}
