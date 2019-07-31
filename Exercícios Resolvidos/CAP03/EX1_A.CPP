#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    int n1, n2, n3, n4, soma;
    // Recebe os quatro números
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    // Soma os números digitados
    soma = n1 + n2 + n3 + n4;
    // Mostra o resultado da soma
    // \n - coloca o cursor na linha de baixo
    cout << "\n" << soma;
    // Para o programa a espera de um ENTER
    getch();
}
